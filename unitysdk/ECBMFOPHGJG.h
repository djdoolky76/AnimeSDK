#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ECBMFOPHGJG_OPFJILOCCBI.h"

class COJMBEOAKMD;
class GEIHCPAOKKK;
class MANBGDFAHPC;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define ECBMFOPHGJG_HBFOEPDJNPA_OFFSET UNITYSDK_OFFSET(0xFDD4830)
#define ECBMFOPHGJG_ILMADBMHLDB_1_OFFSET UNITYSDK_OFFSET(0xFDD44E0)
#define ECBMFOPHGJG_ILMADBMHLDB_OFFSET UNITYSDK_OFFSET(0xFDD36D0)
#define ECBMFOPHGJG_JAJAHENHIEC_OFFSET UNITYSDK_OFFSET(0xFDD3ED0)
#define ECBMFOPHGJG_KLJCNOEKDAG_OFFSET UNITYSDK_OFFSET(0xFDD33E0)
#define ECBMFOPHGJG_NIFKLPDKHCJ_OFFSET UNITYSDK_OFFSET(0xFDD45A0)
#define ECBMFOPHGJG_PHHFAKKNIAJ_OFFSET UNITYSDK_OFFSET(0xFDD3CB0)

inline static constexpr unsigned int ECBMFOPHGJG_TypeDefinitionIndex = 82749;

class ECBMFOPHGJG : public ::System::Object
{
public:
	static ::MoleMole::Config::BuddyOutlineCampType KLJCNOEKDAG(::ECBMFOPHGJG_OPFJILOCCBI& param_0)
	{
		return ((::MoleMole::Config::BuddyOutlineCampType(*)(::ECBMFOPHGJG_OPFJILOCCBI&))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_KLJCNOEKDAG_OFFSET))(param_0);
	}

	static ::System::Void ILMADBMHLDB(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::BuddyOutlineCampType CGLJBLMHDED)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_ILMADBMHLDB_OFFSET))(OHPJHPEOFLD, CGLJBLMHDED);
	}

	static ::System::Void PHHFAKKNIAJ(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_PHHFAKKNIAJ_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void JAJAHENHIEC(::MoleMole::InLevelBuddyDataItem* DJLLAKJFOAE, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* PGHDHBINDDC)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_JAJAHENHIEC_OFFSET))(DJLLAKJFOAE, PGHDHBINDDC);
	}

	static ::System::Void ILMADBMHLDB_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::BuddyOutlineCampType HEMIKKKKKOF)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_ILMADBMHLDB_1_OFFSET))(KECKGDFIALJ, HEMIKKKKKOF);
	}

	static ::MoleMole::InLevelBuddyDataItem* NIFKLPDKHCJ(::MoleMole::Config::BuddyTeamType GNFNMLOFNML, ::MANBGDFAHPC* ONFPEMGDCJG, ::COJMBEOAKMD* FAPDINNJMDB)
	{
		return ((::MoleMole::InLevelBuddyDataItem*(*)(::MoleMole::Config::BuddyTeamType, ::MANBGDFAHPC*, ::COJMBEOAKMD*))((::PBYTE)hIl2Cpp + ECBMFOPHGJG_NIFKLPDKHCJ_OFFSET))(GNFNMLOFNML, ONFPEMGDCJG, FAPDINNJMDB);
	}

	static ::System::Void HBFOEPDJNPA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECBMFOPHGJG_HBFOEPDJNPA_OFFSET))();
	}
};
