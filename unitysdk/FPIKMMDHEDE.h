#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGHDHELLBBC;
class FPIKMMDHEDE_GFIODGHGCHK;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define FPIKMMDHEDE_AOPKBPPKPIM_OFFSET UNITYSDK_OFFSET(0x1591AAE0)
#define FPIKMMDHEDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1591AE00)
#define FPIKMMDHEDE_GET_GUIDEPROMISE_OFFSET UNITYSDK_OFFSET(0x1591AAC0)
#define FPIKMMDHEDE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1591AAA0)
#define FPIKMMDHEDE_SET_GUIDEPROMISE_OFFSET UNITYSDK_OFFSET(0x1591AAD0)
#define FPIKMMDHEDE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1591AAB0)

inline static constexpr unsigned int FPIKMMDHEDE_TypeDefinitionIndex = 79488;

	class FPIKMMDHEDE : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GuidePromise_k__BackingField; // 0x10
		::FPIKMMDHEDE_GFIODGHGCHK* _Target_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_CTOR_OFFSET))(this);
		}

		::FPIKMMDHEDE_GFIODGHGCHK* get_Target()
		{
			return ((::FPIKMMDHEDE_GFIODGHGCHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::FPIKMMDHEDE_GFIODGHGCHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIKMMDHEDE_GFIODGHGCHK*))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* get_GuidePromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_GET_GUIDEPROMISE_OFFSET))(this);
		}

		::System::Void set_GuidePromise(::RPG::Client::Promises::Promise_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_SET_GUIDEPROMISE_OFFSET))(this, a1);
		}

		::DGHDHELLBBC* AOPKBPPKPIM()
		{
			return ((::DGHDHELLBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_AOPKBPPKPIM_OFFSET))(this);
		}

	};
