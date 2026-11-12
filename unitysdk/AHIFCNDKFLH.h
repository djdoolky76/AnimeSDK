#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AHIFCNDKFLH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA0EFC0)
#define AHIFCNDKFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0F020)

inline static constexpr unsigned int AHIFCNDKFLH_TypeDefinitionIndex = 44459;

	class AHIFCNDKFLH : public ::System::Object
	{
	public:
		::System::String* PJNDKCMPMAO; // 0x10
		::System::Boolean EDCNKGHPHFC; // 0x18
		::System::Boolean ALFACIGNFJB; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 MNMHMECGDAK; // 0x1C
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
