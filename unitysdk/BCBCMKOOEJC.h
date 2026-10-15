#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPPGIADOJBF;
class LFCKLPMBGGI;

#define BCBCMKOOEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C433250)
#define BCBCMKOOEJC_DKCDKCPOICD_OFFSET UNITYSDK_OFFSET(0x1C435B40)
#define BCBCMKOOEJC_HIPNDJHGLKG_OFFSET UNITYSDK_OFFSET(0x1C435BE0)
#define BCBCMKOOEJC_JNPFADDONIH_OFFSET UNITYSDK_OFFSET(0x1C435B90)
#define BCBCMKOOEJC_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C435C50)
#define BCBCMKOOEJC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C435CC0)

	class BCBCMKOOEJC : public ::System::Object
	{
	public:
		::Il2CppArray<::HPPGIADOJBF*>* PFBFGLKAGPA; // 0x10
		::Il2CppArray<::LFCKLPMBGGI*>* CILMEJOKECG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_CTOR_OFFSET))(this);
		}

		::System::Int32 DKCDKCPOICD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_DKCDKCPOICD_OFFSET))(this);
		}

		::System::Int32 JNPFADDONIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_JNPFADDONIH_OFFSET))(this);
		}

		::LFCKLPMBGGI* HIPNDJHGLKG(::System::Int32 a1)
		{
			return ((::LFCKLPMBGGI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_HIPNDJHGLKG_OFFSET))(this, a1);
		}

		::HPPGIADOJBF* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HPPGIADOJBF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBCMKOOEJC_PJPFIHFAHGO_OFFSET))(this);
		}

	};
