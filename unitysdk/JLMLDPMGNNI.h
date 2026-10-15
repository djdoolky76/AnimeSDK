#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JLMLDPMGNNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB250A00)
#define JLMLDPMGNNI_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xB250A20)
#define JLMLDPMGNNI_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0xB250A10)

	class JLMLDPMGNNI : public ::System::Object
	{
	public:
		::System::String* _FigurePath_k__BackingField; // 0x10
		::System::UInt32 _MonsterID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + JLMLDPMGNNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMLDPMGNNI_GET_MONSTERID_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMLDPMGNNI_GET_FIGUREPATH_OFFSET))(this);
		}

	};
