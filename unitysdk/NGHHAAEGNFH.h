#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRouteState.h"
#include "unitysdk/System/Object.h"
class OHKGNIAAAAM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGHHAAEGNFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA7C00)
#define NGHHAAEGNFH_GBCLMLJGKFE_OFFSET UNITYSDK_OFFSET(0xBBA73F0)
#define NGHHAAEGNFH_LMDJIJOKOCO_OFFSET UNITYSDK_OFFSET(0xBBA76A0)
#define NGHHAAEGNFH_LMIDELPKLAH_OFFSET UNITYSDK_OFFSET(0xBBA71E0)

	class NGHHAAEGNFH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHHAAEGNFH_CTOR_OFFSET))(this);
		}

		::System::Void LMIDELPKLAH(::OHKGNIAAAAM* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OHKGNIAAAAM*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + NGHHAAEGNFH_LMIDELPKLAH_OFFSET))(this, a1, a2);
		}

		::System::Void GBCLMLJGKFE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + NGHHAAEGNFH_GBCLMLJGKFE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LMDJIJOKOCO(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + NGHHAAEGNFH_LMDJIJOKOCO_OFFSET))(this, a1);
		}

	};
