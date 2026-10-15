#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FJOHALKABDJ;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPJOLHBKFAJ_ANBOIIDGNGC_OFFSET UNITYSDK_OFFSET(0x12655430)
#define DPJOLHBKFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x126550E0)

inline static constexpr unsigned int DPJOLHBKFAJ_TypeDefinitionIndex = 81092;

	class DPJOLHBKFAJ : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinHouguOwnerType, ::FJOHALKABDJ*>* BMBPOHCIMBD; // 0x18
		::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + DPJOLHBKFAJ_CTOR_OFFSET))(this, a1);
		}

		::FJOHALKABDJ* ANBOIIDGNGC(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::FJOHALKABDJ*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + DPJOLHBKFAJ_ANBOIIDGNGC_OFFSET))(this, a1);
		}

	};
