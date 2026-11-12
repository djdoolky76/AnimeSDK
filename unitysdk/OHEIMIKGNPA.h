#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
class PMOJMJFBDFB;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define OHEIMIKGNPA_CTOR_OFFSET UNITYSDK_OFFSET(0xC71D1A0)
#define OHEIMIKGNPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC71D410)
#define OHEIMIKGNPA__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC71D470)
#define OHEIMIKGNPA__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC71D4F0)
#define OHEIMIKGNPA__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC71D680)

inline static constexpr unsigned int OHEIMIKGNPA_TypeDefinitionIndex = 53984;

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
