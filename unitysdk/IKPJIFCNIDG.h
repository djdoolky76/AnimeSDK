#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class AAKADBDHKBJ;
class FPNHGPEICOG;
class IKPJIFCNIDG;
class KAOOFGPIBGF;
class LFGIBPHFIMF;
namespace RPG::GameCore { class JsonEnum; }

#define IKPJIFCNIDG_BDDNFEDBCBO_OFFSET UNITYSDK_OFFSET(0x164A0350)
#define IKPJIFCNIDG_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x164A06C0)
#define IKPJIFCNIDG_BMEDNBHJKLE_OFFSET UNITYSDK_OFFSET(0x164A04B0)
#define IKPJIFCNIDG_CTOR_OFFSET UNITYSDK_OFFSET(0x164A0A10)
#define IKPJIFCNIDG_DGOKPMDIHOE_OFFSET UNITYSDK_OFFSET(0x164A0530)
#define IKPJIFCNIDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A00F0)
#define IKPJIFCNIDG_FFJFNMGGMBN_OFFSET UNITYSDK_OFFSET(0x164A0830)
#define IKPJIFCNIDG_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x164A0260)
#define IKPJIFCNIDG_IOGGIIBIOIA_OFFSET UNITYSDK_OFFSET(0x164A09F0)
#define IKPJIFCNIDG_KDIAMBOAGCI_OFFSET UNITYSDK_OFFSET(0x164A07E0)
#define IKPJIFCNIDG_MFMOHGHOFOJ_OFFSET UNITYSDK_OFFSET(0x164A0670)
#define IKPJIFCNIDG_MLLLMBCBDGD_1_OFFSET UNITYSDK_OFFSET(0x164A0450)
#define IKPJIFCNIDG_MLLLMBCBDGD_OFFSET UNITYSDK_OFFSET(0x164A03E0)
#define IKPJIFCNIDG_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0x164A0A00)
#define IKPJIFCNIDG_NJOMEBHLLAN_OFFSET UNITYSDK_OFFSET(0x164A02D0)
#define IKPJIFCNIDG_OFEGLEDEFIK_OFFSET UNITYSDK_OFFSET(0x164A0900)
#define IKPJIFCNIDG_PJMPLOFNEOO_OFFSET UNITYSDK_OFFSET(0x164A0880)
#define IKPJIFCNIDG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1649FFB0)

inline static constexpr unsigned int IKPJIFCNIDG_TypeDefinitionIndex = 53979;

	class IKPJIFCNIDG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::KAOOFGPIBGF* PLJPNMPJMJH; // 0x18
		::LFGIBPHFIMF* BPOEEEDGCCJ; // 0x20
		::AAKADBDHKBJ* AAPDKELFMNH; // 0x28
		::FPNHGPEICOG* APPIHABBCGK; // 0x30
		::System::UInt32 GBFKGJFHEDM; // 0x38
		::System::UInt32 NLEJDMADAEP; // 0x3C
		::RPG::GameCore::CollisionDataFlag GMJLOINLDNE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_DISPOSE_OFFSET))(this);
		}

		::IKPJIFCNIDG* NJOMEBHLLAN()
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_NJOMEBHLLAN_OFFSET))(this);
		}

		::IKPJIFCNIDG* BDDNFEDBCBO(::RPG::GameCore::FixPoint a1)
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_BDDNFEDBCBO_OFFSET))(this, a1);
		}

		::IKPJIFCNIDG* MLLLMBCBDGD(::RPG::GameCore::JsonEnum* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_MLLLMBCBDGD_OFFSET))(this, a1, a2);
		}

		::IKPJIFCNIDG* MLLLMBCBDGD_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_MLLLMBCBDGD_1_OFFSET))(this, a1, a2);
		}

		::System::Void BMEDNBHJKLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_BMEDNBHJKLE_OFFSET))(this);
		}

		::IKPJIFCNIDG* DGOKPMDIHOE(::RPG::GameCore::CollisionDataFlag a1, ::System::Boolean a2)
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_DGOKPMDIHOE_OFFSET))(this, a1, a2);
		}

		::System::Boolean MFMOHGHOFOJ(::RPG::GameCore::CollisionDataFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_MFMOHGHOFOJ_OFFSET))(this, a1);
		}

		::IKPJIFCNIDG* BKJGMFOKKKN()
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_BKJGMFOKKKN_OFFSET))(this);
		}

		::IKPJIFCNIDG* GNCJAGHKEPO()
		{
			return ((::IKPJIFCNIDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void KDIAMBOAGCI(::FPNHGPEICOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_KDIAMBOAGCI_OFFSET))(this, a1);
		}

		::System::Void FFJFNMGGMBN(::FPNHGPEICOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_FFJFNMGGMBN_OFFSET))(this, a1);
		}

		::System::Void PJMPLOFNEOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_PJMPLOFNEOO_OFFSET))(this);
		}

		::System::Void OFEGLEDEFIK(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_OFEGLEDEFIK_OFFSET))(this, a1, a2);
		}

		::AAKADBDHKBJ* IOGGIIBIOIA()
		{
			return ((::AAKADBDHKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_IOGGIIBIOIA_OFFSET))(this);
		}

		::KAOOFGPIBGF* MOPJLKIHIHP()
		{
			return ((::KAOOFGPIBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPJIFCNIDG_MOPJLKIHIHP_OFFSET))(this);
		}

	};
