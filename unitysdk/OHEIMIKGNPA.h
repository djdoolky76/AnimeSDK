#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
class PMOJMJFBDFB;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define OHEIMIKGNPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5B9F0)
#define OHEIMIKGNPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5BC60)
#define OHEIMIKGNPA__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBE5BCC0)
#define OHEIMIKGNPA__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE5BD40)
#define OHEIMIKGNPA__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE5BED0)

inline static constexpr unsigned int OHEIMIKGNPA_TypeDefinitionIndex = 52831;

	class OHEIMIKGNPA
	{
	public:
		::KJFIKOKBCCA MPKAFEJFNKN; // 0x68
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0xF8
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PMOJMJFBDFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PMOJMJFBDFB*))((::PBYTE)hIl2Cpp + OHEIMIKGNPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEIMIKGNPA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEIMIKGNPA__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEIMIKGNPA__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEIMIKGNPA__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};
