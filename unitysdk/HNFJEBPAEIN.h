#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HNFJEBPAEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x16D337D0)

inline static constexpr unsigned int HNFJEBPAEIN_TypeDefinitionIndex = 50042;

	class HNFJEBPAEIN : public ::System::Object
	{
	public:
		::System::String* BHKOBDBPMMK; // 0x10
		::System::String* IGEKBHHGDPP; // 0x18
		::System::String* PIFJBOCDDCO; // 0x20
		::System::Int32 KHDGENHPBPO; // 0x28
		::System::Boolean MCOPEPELMKK; // 0x2C
		::System::Boolean FHDMPHMBFBM; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Int32 DHPIFLNBLNM; // 0x30
		::System::UInt32 EBIIKKFIHNG; // 0x34
		::System::Int32 PAOCEOAPMHC; // 0x38
		::System::Int32 FIADCAPBCMC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJEBPAEIN_CTOR_OFFSET))(this);
		}

	};
