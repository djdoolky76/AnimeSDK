#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AHIFCNDKFLH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C85F790)
#define AHIFCNDKFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C85F7F0)

inline static constexpr unsigned int AHIFCNDKFLH_TypeDefinitionIndex = 43477;

	class AHIFCNDKFLH : public ::System::Object
	{
	public:
		::System::String* PJNDKCMPMAO; // 0x10
		::System::Int32 MNMHMECGDAK; // 0x18
		::System::Boolean ALFACIGNFJB; // 0x1C
		::System::Boolean EDCNKGHPHFC; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single PGCBHJLPHIF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIFCNDKFLH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIFCNDKFLH_CLEAR_OFFSET))(this);
		}

	};
