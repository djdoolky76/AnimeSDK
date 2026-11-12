#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPEFOOCOJED_CTOR_OFFSET UNITYSDK_OFFSET(0xCCB36C0)
#define PPEFOOCOJED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCB3530)
#define PPEFOOCOJED_INIT_OFFSET UNITYSDK_OFFSET(0xCCB2F80)
#define PPEFOOCOJED_NOMPDJNPGKH_OFFSET UNITYSDK_OFFSET(0xCCB3620)
#define PPEFOOCOJED_PEKGFIAPADN_OFFSET UNITYSDK_OFFSET(0xCCB3040)
#define PPEFOOCOJED__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCCB35E0)

inline static constexpr unsigned int PPEFOOCOJED_TypeDefinitionIndex = 64337;

	class PPEFOOCOJED : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* EIMHNEMFGIH; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BNIKMDAGAOP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void NOMPDJNPGKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED_NOMPDJNPGKH_OFFSET))(this);
		}

		::System::Void PEKGFIAPADN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED_PEKGFIAPADN_OFFSET))(this);
		}

	};
