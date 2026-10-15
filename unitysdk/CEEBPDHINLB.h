#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODLAALCCNF;
class CKCJOCJGHKC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace System { class Action; }

#define CEEBPDHINLB_ADD_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xC77F000)
#define CEEBPDHINLB_CBLMIJIFFCN_OFFSET UNITYSDK_OFFSET(0xC77F650)
#define CEEBPDHINLB_CGIBGOOFMGE_OFFSET UNITYSDK_OFFSET(0xC77F730)
#define CEEBPDHINLB_CTOR_OFFSET UNITYSDK_OFFSET(0xC77F0C0)
#define CEEBPDHINLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC77F4B0)
#define CEEBPDHINLB_ELLFKCEMJNN_OFFSET UNITYSDK_OFFSET(0xC77F6A0)
#define CEEBPDHINLB_GCMKOALOOHE_OFFSET UNITYSDK_OFFSET(0xC77EF90)
#define CEEBPDHINLB_GHJFPHIGFNE_OFFSET UNITYSDK_OFFSET(0xC77EF50)
#define CEEBPDHINLB_HLANOJIFFMH_OFFSET UNITYSDK_OFFSET(0xC77F320)
#define CEEBPDHINLB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC77F270)
#define CEEBPDHINLB_REMOVE_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xC77F060)

	class CEEBPDHINLB : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* IKMGKHNGJHB; // 0x10
		::System::Action* OnRecordChanged; // 0x18
		::AODLAALCCNF* FCNCPKGEMJF; // 0x20
		::CKCJOCJGHKC* JHINGAOJMBI; // 0x28
		::System::Void _ctor(::CKCJOCJGHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + CEEBPDHINLB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* GHJFPHIGFNE()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_GHJFPHIGFNE_OFFSET))(this);
		}

		::System::Void GCMKOALOOHE(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + CEEBPDHINLB_GCMKOALOOHE_OFFSET))(this, a1);
		}

		::System::Void add_OnRecordChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CEEBPDHINLB_ADD_ONRECORDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRecordChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CEEBPDHINLB_REMOVE_ONRECORDCHANGED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_DISPOSE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void HLANOJIFFMH(::AODLAALCCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AODLAALCCNF*))((::PBYTE)hIl2Cpp + CEEBPDHINLB_HLANOJIFFMH_OFFSET))(this, a1);
		}

		::System::Void CBLMIJIFFCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_CBLMIJIFFCN_OFFSET))(this);
		}

		::System::Void ELLFKCEMJNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_ELLFKCEMJNN_OFFSET))(this);
		}

		::System::Void CGIBGOOFMGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBPDHINLB_CGIBGOOFMGE_OFFSET))(this);
		}

	};
