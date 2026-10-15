#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;

#define OFIEKGCFLIK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE42A10)
#define OFIEKGCFLIK_KLICCELODLB_OFFSET UNITYSDK_OFFSET(0xBE42910)
#define OFIEKGCFLIK_LKAFOOENJID_OFFSET UNITYSDK_OFFSET(0xBE42970)

inline static constexpr unsigned int OFIEKGCFLIK_TypeDefinitionIndex = 64747;

	class OFIEKGCFLIK : public ::System::Object
	{
	public:
		::System::UInt32 NIFADAMLBBL; // 0x10
		::System::UInt32 HJPJDCMGENH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIEKGCFLIK_CTOR_OFFSET))(this);
		}

		::System::Boolean KLICCELODLB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIEKGCFLIK_KLICCELODLB_OFFSET))(this, a1);
		}

		::System::UInt32 LKAFOOENJID(::System::UInt32 a1, ::System::UInt32 a2, ::NDPFOOJIAIJ* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + OFIEKGCFLIK_LKAFOOENJID_OFFSET))(this, a1, a2, a3);
		}

	};
