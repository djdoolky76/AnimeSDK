#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class CJCNJKOCENM;
class ENGKPGFGGLM;
class ILBFOMNNGDL;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAABAHKJEEN_AIKPKGJPFMN_OFFSET UNITYSDK_OFFSET(0x14205740)
#define JAABAHKJEEN_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x14205680)
#define JAABAHKJEEN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x142048C0)
#define JAABAHKJEEN_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x142055E0)
#define JAABAHKJEEN_IFGFBKADFFB_OFFSET UNITYSDK_OFFSET(0x14206990)
#define JAABAHKJEEN_JODCJIHJLEB_OFFSET UNITYSDK_OFFSET(0x14204B20)
#define JAABAHKJEEN_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x14206CD0)
#define JAABAHKJEEN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14205B00)
#define JAABAHKJEEN_NJJIOJGFMIN_OFFSET UNITYSDK_OFFSET(0x14205B90)
#define JAABAHKJEEN_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x14205630)
#define JAABAHKJEEN_OAOOPLJHIGP_OFFSET UNITYSDK_OFFSET(0x14205ED0)
#define JAABAHKJEEN_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x14205190)
#define JAABAHKJEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x14204AD0)

inline static constexpr unsigned int JAABAHKJEEN_TypeDefinitionIndex = 70932;

class JAABAHKJEEN : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAABAHKJEEN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void JODCJIHJLEB(::System::UInt32 NJNCGJLHLKC, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_JODCJIHJLEB_OFFSET))(NJNCGJLHLKC, KECKGDFIALJ);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_NPIJFJJOBCA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Boolean AIKPKGJPFMN(::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::UInt32 NJNCGJLHLKC, ::System::UInt32 NPHJHGKNOOB, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::UInt32, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_AIKPKGJPFMN_OFFSET))(HMPKKCKNFIH, NJNCGJLHLKC, NPHJHGKNOOB, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean NJJIOJGFMIN(::CJCNJKOCENM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::CJCNJKOCENM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_NJJIOJGFMIN_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void OAOOPLJHIGP(::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_OAOOPLJHIGP_OFFSET))(HMPKKCKNFIH, KECKGDFIALJ);
	}

	static ::System::Boolean IFGFBKADFFB(::ILBFOMNNGDL* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::ILBFOMNNGDL*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_IFGFBKADFFB_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JAABAHKJEEN_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}
};
