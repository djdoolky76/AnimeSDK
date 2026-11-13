#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class PKJPPAEPLOM;
namespace RPG::Client { class FateRoundInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET UNITYSDK_OFFSET(0x1DB95200)
#define RPG_CLIENT_FATEPHASEINFOITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB951A0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_BUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1DB95390)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1DB83300)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x1DB82B10)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0x1DB830C0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_ROUNDS_OFFSET UNITYSDK_OFFSET(0x1DB82E70)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1DB95330)
#define RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1DB952E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FatePhaseInfoItem_TypeDefinitionIndex = 65559;

	class FatePhaseInfoItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>* _Rounds; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _BuffWeights; // 0x18
		::System::UInt32 _PhaseID; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void AddRoundItem(::RPG::Client::FateRoundInfoItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET))(this, a1);
		}

		::System::Void SetBuffWeights(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEID_OFFSET))(this);
		}

		::System::UInt32 get_PhaseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEINDEX_OFFSET))(this);
		}

		::System::String* get_PhaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>* get_Rounds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_ROUNDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_BuffWeights()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_BUFFWEIGHTS_OFFSET))(this);
		}

		::PKJPPAEPLOM* get__Row()
		{
			return ((::PKJPPAEPLOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET))(this);
		}

	};
}
