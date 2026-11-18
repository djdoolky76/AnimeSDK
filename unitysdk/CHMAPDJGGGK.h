#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class HDNLHPMDKPN;
class HDNLHPMDKPN_DNEFDIOPFKO;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CHMAPDJGGGK_ABKCKDAEKBI_OFFSET UNITYSDK_OFFSET(0x128FAD60)
#define CHMAPDJGGGK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x128F9A60)
#define CHMAPDJGGGK_HHLHGMLINPG_OFFSET UNITYSDK_OFFSET(0x128FA280)
#define CHMAPDJGGGK_IDHJBKDCGDO_OFFSET UNITYSDK_OFFSET(0x128FA870)
#define CHMAPDJGGGK_KCIOLLPMAJI_OFFSET UNITYSDK_OFFSET(0x128FAEC0)
#define CHMAPDJGGGK_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x128F9D20)
#define CHMAPDJGGGK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x128FAE30)
#define CHMAPDJGGGK_PIHKJJHHFPP_OFFSET UNITYSDK_OFFSET(0x128FB0B0)
#define CHMAPDJGGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x128F9CD0)

inline static constexpr unsigned int CHMAPDJGGGK_TypeDefinitionIndex = 75909;

class CHMAPDJGGGK : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMAPDJGGGK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, DBIOAKNMBDM);
	}

	static ::System::Void ABKCKDAEKBI(::MoleMole::Battle::Entity* BPCBDKLOICM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_ABKCKDAEKBI_OFFSET))(BPCBDKLOICM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void IDHJBKDCGDO(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::HDNLHPMDKPN* NDAFPFGOOPL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::HDNLHPMDKPN*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_IDHJBKDCGDO_OFFSET))(DJHFOGHIFEJ, NDAFPFGOOPL);
	}

	static ::System::Void KCIOLLPMAJI(::HDNLHPMDKPN_DNEFDIOPFKO* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::HDNLHPMDKPN_DNEFDIOPFKO*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_KCIOLLPMAJI_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void PIHKJJHHFPP(::HDNLHPMDKPN_DNEFDIOPFKO* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::HDNLHPMDKPN_DNEFDIOPFKO*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_PIHKJJHHFPP_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void HHLHGMLINPG(::MoleMole::Battle::Entity* DBIOAKNMBDM, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CHMAPDJGGGK_HHLHGMLINPG_OFFSET))(DBIOAKNMBDM, DJHFOGHIFEJ);
	}
};
