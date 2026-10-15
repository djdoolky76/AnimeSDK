#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOLGEKPKJOF;
namespace RPG::Client::ActivityIdleLive { class IdleLiveTickManager; }

#define JOIFPPPGOHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0B80)
#define JOIFPPPGOHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A0C50)
#define JOIFPPPGOHD_ENILNPGABHD_OFFSET UNITYSDK_OFFSET(0xB2A0BF0)

inline static constexpr unsigned int JOIFPPPGOHD_TypeDefinitionIndex = 75449;

	class JOIFPPPGOHD : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveTickManager* ONANOCKIKOK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIFPPPGOHD_CTOR_OFFSET))(this);
		}

		::System::Void ENILNPGABHD(::AOLGEKPKJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOLGEKPKJOF*))((::PBYTE)hIl2Cpp + JOIFPPPGOHD_ENILNPGABHD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIFPPPGOHD_DISPOSE_OFFSET))(this);
		}

	};
