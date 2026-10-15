#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;

#define DNBDPIOLLHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x11940630)
#define DNBDPIOLLHH_CTOR_OFFSET UNITYSDK_OFFSET(0x11940480)
#define DNBDPIOLLHH_GBAJONBCAJJ_OFFSET UNITYSDK_OFFSET(0x119405C0)
#define DNBDPIOLLHH_PBAMNLGHDJG_OFFSET UNITYSDK_OFFSET(0x11940530)

inline static constexpr unsigned int DNBDPIOLLHH_TypeDefinitionIndex = 71211;

	class DNBDPIOLLHH : public ::System::Object
	{
	public:
		::GEDMHFPPBHN* IOJNCJMDDOD; // 0x10
		::System::UInt32 LCHLDHNIILN; // 0x18
		::System::Boolean JMBIGPPGCEK; // 0x1C
		::System::Boolean HIGNCPLFPCK; // 0x1D
		static ::System::UInt32* StaticGet_KKGGDACLCAE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "DNBDPIOLLHH")->GetStaticField(0x158A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBDPIOLLHH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNBDPIOLLHH_CCTOR_OFFSET))();
		}

		static ::System::UInt32 PBAMNLGHDJG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + DNBDPIOLLHH_PBAMNLGHDJG_OFFSET))();
		}

		static ::System::Void GBAJONBCAJJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNBDPIOLLHH_GBAJONBCAJJ_OFFSET))();
		}

	};
