#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ELHMEDAGGPG;
class FPNHGPEICOG;
class IDCFNGCBAIA;
class KPNOJJNHIFL;
class LFGIBPHFIMF;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHMIFAELKCK_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x15CC7A80)
#define HHMIFAELKCK_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0x15CC7A50)
#define HHMIFAELKCK_CJDLJMKBNON_OFFSET UNITYSDK_OFFSET(0x15CC7A70)
#define HHMIFAELKCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15CC6BA0)
#define HHMIFAELKCK_COIEFOLMLFO_OFFSET UNITYSDK_OFFSET(0x15CC7760)
#define HHMIFAELKCK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC7A90)
#define HHMIFAELKCK_FFJFNMGGMBN_OFFSET UNITYSDK_OFFSET(0x15CC7040)
#define HHMIFAELKCK_GEJLECGGHEP_OFFSET UNITYSDK_OFFSET(0x15CC78C0)
#define HHMIFAELKCK_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x15CC71D0)
#define HHMIFAELKCK_KDIAMBOAGCI_OFFSET UNITYSDK_OFFSET(0x15CC6EE0)
#define HHMIFAELKCK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CC6D20)
#define HHMIFAELKCK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15CC7A60)
#define HHMIFAELKCK_PJMPLOFNEOO_OFFSET UNITYSDK_OFFSET(0x15CC7720)

inline static constexpr unsigned int HHMIFAELKCK_TypeDefinitionIndex = 53986;

	class HHMIFAELKCK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* BLOMOEJJCIK; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
		::ELHMEDAGGPG* HCCOJKINEHH; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* NNDOBIMOFEO; // 0x28
		::FPNHGPEICOG* APPIHABBCGK; // 0x30
		::KPNOJJNHIFL* JKDKDLIBEOC; // 0x38
		::IDCFNGCBAIA* CFKHNPGEAJA; // 0x40
		::RPG::GameCore::FixPoint PGMIOKKLHIE; // 0x48
		::RPG::GameCore::FixPoint CDOLCLMGEBO; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::IDCFNGCBAIA* a1, ::System::UInt32 a2, ::LFGIBPHFIMF* a3, ::ELHMEDAGGPG* a4, ::KPNOJJNHIFL* a5, ::RPG::GameCore::FixPoint a6, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::IDCFNGCBAIA*, ::System::UInt32, ::LFGIBPHFIMF*, ::ELHMEDAGGPG*, ::KPNOJJNHIFL*, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void KDIAMBOAGCI(::FPNHGPEICOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_KDIAMBOAGCI_OFFSET))(this, a1);
		}

		::System::Void FFJFNMGGMBN(::FPNHGPEICOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_FFJFNMGGMBN_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void PJMPLOFNEOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_PJMPLOFNEOO_OFFSET))(this);
		}

		::System::Boolean COIEFOLMLFO(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_COIEFOLMLFO_OFFSET))(this, a1, a2);
		}

		::System::Void GEJLECGGHEP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HHMIFAELKCK_GEJLECGGHEP_OFFSET))(this, a1);
		}

		::IDCFNGCBAIA* CEFPFNBOAPL()
		{
			return ((::IDCFNGCBAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_CEFPFNBOAPL_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_MLMGEFIOION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CJDLJMKBNON()
		{
			return ((::Il2CppArray<::RPG::GameCore::JsonEnum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_CJDLJMKBNON_OFFSET))(this);
		}

		::FPNHGPEICOG* ANALOEDDDHD()
		{
			return ((::FPNHGPEICOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMIFAELKCK_ANALOEDDDHD_OFFSET))(this);
		}

	};
