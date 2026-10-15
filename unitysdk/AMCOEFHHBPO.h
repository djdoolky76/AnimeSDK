#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/System/Object.h"
class AINFNFIDGFF;
class AOFOEOIJEHF;
class BDEHEINMEJB;
class CDEAABODKCP;
class DDAMEHEPOBD;
class FPHPFJLAJDK;
class GGAKNLJJNEI;
class HONNGJEMGGH;
class JLKCBOIFJKC;
class MMEDLCAENAL;
class NJKFOJJDGGG;
class OMINPDAIBLP;
class PFBCBNMKFAK;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define AMCOEFHHBPO_CLCIHJGMHFD_OFFSET UNITYSDK_OFFSET(0x15576EE0)
#define AMCOEFHHBPO_CTOR_OFFSET UNITYSDK_OFFSET(0x155777D0)
#define AMCOEFHHBPO_DJMPBKGDLKI_OFFSET UNITYSDK_OFFSET(0x15577700)
#define AMCOEFHHBPO_DOFEJPOHAOO_OFFSET UNITYSDK_OFFSET(0x15577250)
#define AMCOEFHHBPO_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0x15577160)
#define AMCOEFHHBPO_FBCLJJPDLEA_OFFSET UNITYSDK_OFFSET(0x15577200)
#define AMCOEFHHBPO_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x15576B60)
#define AMCOEFHHBPO_ISCONCERNEDWITH_1_OFFSET UNITYSDK_OFFSET(0x15576C70)
#define AMCOEFHHBPO_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x15576BB0)
#define AMCOEFHHBPO_JNJHAIEIHMH_OFFSET UNITYSDK_OFFSET(0x15576E90)
#define AMCOEFHHBPO_LDBIHEACIHB_OFFSET UNITYSDK_OFFSET(0x155771B0)
#define AMCOEFHHBPO_MBINGCOGKAI_OFFSET UNITYSDK_OFFSET(0x155773E0)
#define AMCOEFHHBPO_NEGKBDJPIJK_OFFSET UNITYSDK_OFFSET(0x155776B0)
#define AMCOEFHHBPO_NOCBCKMNPGD_OFFSET UNITYSDK_OFFSET(0x15577610)
#define AMCOEFHHBPO_OKPOPJCKLIP_OFFSET UNITYSDK_OFFSET(0x15577520)
#define AMCOEFHHBPO_ONOHIEOENBI_OFFSET UNITYSDK_OFFSET(0x155772A0)
#define AMCOEFHHBPO_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x15577790)
#define AMCOEFHHBPO_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x15577570)
#define AMCOEFHHBPO_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x15577390)
#define AMCOEFHHBPO_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x15576FD0)
#define AMCOEFHHBPO_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x15576D50)
#define AMCOEFHHBPO_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x15576D00)
#define AMCOEFHHBPO_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x15576DA0)
#define AMCOEFHHBPO_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x15577750)
#define AMCOEFHHBPO_UPDATEEXP_OFFSET UNITYSDK_OFFSET(0x15576E40)
#define AMCOEFHHBPO_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x15577340)
#define AMCOEFHHBPO_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x15576F30)
#define AMCOEFHHBPO_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x15576F80)
#define AMCOEFHHBPO_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x155775C0)
#define AMCOEFHHBPO_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x15577430)
#define AMCOEFHHBPO_UPDATEPRESENTREMOVE_OFFSET UNITYSDK_OFFSET(0x155774D0)
#define AMCOEFHHBPO_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0x15577480)
#define AMCOEFHHBPO_UPDATEPROJECTIONADD_OFFSET UNITYSDK_OFFSET(0x15577020)
#define AMCOEFHHBPO_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0x15577110)
#define AMCOEFHHBPO_UPDATEREMOVEORB_OFFSET UNITYSDK_OFFSET(0x15577660)
#define AMCOEFHHBPO_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x155772F0)
#define AMCOEFHHBPO_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x15576DF0)
#define AMCOEFHHBPO_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x15576CC0)
#define AMCOEFHHBPO_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x155770C0)
#define AMCOEFHHBPO_UPDATEUNLOCKEDPROJECTIONID_OFFSET UNITYSDK_OFFSET(0x15577070)

inline static constexpr unsigned int AMCOEFHHBPO_TypeDefinitionIndex = 64881;

	class AMCOEFHHBPO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_CTOR_OFFSET))(this);
		}

		static ::BDEHEINMEJB* GHDIJCNKKOM()
		{
			return ((::BDEHEINMEJB*(*)())((::PBYTE)hIl2Cpp + AMCOEFHHBPO_GHDIJCNKKOM_OFFSET))();
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsConcernedWith_1(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_ISCONCERNEDWITH_1_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEEXP_OFFSET))(this, a1);
		}

		::System::Void JNJHAIEIHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_JNJHAIEIHMH_OFFSET))(this, a1, a2);
		}

		::System::Void CLCIHJGMHFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_CLCIHJGMHFD_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEMAXROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateProjectionAdd(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEPROJECTIONADD_OFFSET))(this, a1);
		}

		::System::Void UpdateUnlockedProjectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEUNLOCKEDPROJECTIONID_OFFSET))(this, a1);
		}

		::System::Void UpdateTraitEffect(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Void UpdateProjectionRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEPROJECTIONREMOVE_OFFSET))(this, a1);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void LDBIHEACIHB(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_LDBIHEACIHB_OFFSET))(this, a1);
		}

		::System::Void FBCLJJPDLEA(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_FBCLJJPDLEA_OFFSET))(this, a1);
		}

		::System::Void DOFEJPOHAOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_DOFEJPOHAOO_OFFSET))(this, a1);
		}

		::System::Void ONOHIEOENBI(::AINFNFIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINFNFIDGFF*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_ONOHIEOENBI_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void MBINGCOGKAI(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_MBINGCOGKAI_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdatePresent(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEPRESENT_OFFSET))(this, a1);
		}

		::System::Void UpdatePresentRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEPRESENTREMOVE_OFFSET))(this, a1);
		}

		::System::Void OKPOPJCKLIP(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_OKPOPJCKLIP_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void NOCBCKMNPGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_NOCBCKMNPGD_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveOrb(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEREMOVEORB_OFFSET))(this, a1);
		}

		::System::Void NEGKBDJPIJK(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_NEGKBDJPIJK_OFFSET))(this, a1);
		}

		::System::Void DJMPBKGDLKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_DJMPBKGDLKI_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_UPDATEDONE_OFFSET))(this);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCOEFHHBPO_PREUPDATEDONE_OFFSET))(this);
		}

	};
