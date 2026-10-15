#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class ICollector_1; }

#define FLEKJOODOBH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x15823190)
#define FLEKJOODOBH_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0x15823950)
#define FLEKJOODOBH_CTOR_OFFSET UNITYSDK_OFFSET(0x158228C0)
#define FLEKJOODOBH_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x15823600)
#define FLEKJOODOBH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15822F00)
#define FLEKJOODOBH_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x158234C0)
#define FLEKJOODOBH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15822DC0)
#define FLEKJOODOBH_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0x15823870)
#define FLEKJOODOBH__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x15823660)
#define FLEKJOODOBH__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x158231D0)

inline static constexpr unsigned int FLEKJOODOBH_TypeDefinitionIndex = 76755;

	class FLEKJOODOBH
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x50
		::MNCOPNHONHO* PDENFEFCAGN; // 0x58
		::Entitas::ICollector_1<::INMMPMDELKE*>* BEIOPDMNDIN; // 0x60
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + FLEKJOODOBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEKJOODOBH_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEKJOODOBH_EXECUTE_OFFSET))(this);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEKJOODOBH_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEKJOODOBH__TEARDOWN_OFFSET))(this);
		}

		::INMMPMDELKE* GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEKJOODOBH_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void DestroyEntity(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH_DESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Void _AddEventEmitter(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH__ADDEVENTEMITTER_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH_POJDHPCCBFH_OFFSET))(this, a1, a2);
		}

		::System::Void CILFPIOIIEH(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH_CILFPIOIIEH_OFFSET))(this, a1, a2);
		}

	};
