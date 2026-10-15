#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AHIFCNDKFLH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C88D8D0)
#define AHIFCNDKFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D920)

	class AHIFCNDKFLH : public ::System::Object
	{
	public:
		::System::String* PJNDKCMPMAO; // 0x10
		::System::Int32 MNMHMECGDAK; // 0x18
		::System::Single PGCBHJLPHIF; // 0x1C
		::System::Boolean EDCNKGHPHFC; // 0x20
		::System::Boolean ALFACIGNFJB; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIFCNDKFLH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIFCNDKFLH_CLEAR_OFFSET))(this);
		}

	};
