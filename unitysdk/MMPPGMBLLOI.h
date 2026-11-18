#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class KKLKJJOMCCE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMPPGMBLLOI_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x16CA8280)
#define MMPPGMBLLOI_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16CA8240)
#define MMPPGMBLLOI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16CA5F40)
#define MMPPGMBLLOI_FDEHPGOJKJE_OFFSET UNITYSDK_OFFSET(0x16CA7040)
#define MMPPGMBLLOI_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16CA6300)
#define MMPPGMBLLOI_GFILGAFJCHP_OFFSET UNITYSDK_OFFSET(0x16CA6C90)
#define MMPPGMBLLOI_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x16CA64C0)
#define MMPPGMBLLOI_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16CA6550)
#define MMPPGMBLLOI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16CA6190)
#define MMPPGMBLLOI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16CA81B0)
#define MMPPGMBLLOI_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x16CA8120)
#define MMPPGMBLLOI_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x16CA8B30)
#define MMPPGMBLLOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA6470)

inline static constexpr unsigned int MMPPGMBLLOI_TypeDefinitionIndex = 47213;

class MMPPGMBLLOI : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPGMBLLOI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void FDEHPGOJKJE(::KKLKJJOMCCE* EKHAGJFCFED)
	{
		return ((::System::Void(*)(::KKLKJJOMCCE*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_FDEHPGOJKJE_OFFSET))(EKHAGJFCFED);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_APAGIJMHEAK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ABDLEONNPAJ(::KKLKJJOMCCE* OBLLFDLMLHM, ::System::Int32 ENENPECBCJE, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::String*>*>* BJNDGFEEPPE)
	{
		return ((::System::Void(*)(::KKLKJJOMCCE*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_ABDLEONNPAJ_OFFSET))(OBLLFDLMLHM, ENENPECBCJE, BJNDGFEEPPE);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean GFILGAFJCHP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MMPPGMBLLOI_GFILGAFJCHP_OFFSET))(KECKGDFIALJ);
	}
};
