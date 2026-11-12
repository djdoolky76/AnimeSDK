#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class ILKJANNKCJO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEKCCAGBHKK_CJPBPKNJKBO_OFFSET UNITYSDK_OFFSET(0xB980F00)
#define JEKCCAGBHKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB980CC0)
#define JEKCCAGBHKK_DHCHEEMKLPM_OFFSET UNITYSDK_OFFSET(0xB981860)
#define JEKCCAGBHKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB980DD0)
#define JEKCCAGBHKK_GEEBFEPLEEC_OFFSET UNITYSDK_OFFSET(0xB981200)
#define JEKCCAGBHKK_HECMALHOJPH_OFFSET UNITYSDK_OFFSET(0xB9815F0)
#define JEKCCAGBHKK_KKEJBMCDBAO_OFFSET UNITYSDK_OFFSET(0xB981930)
#define JEKCCAGBHKK_OHBHFKJKNOB_OFFSET UNITYSDK_OFFSET(0xB981080)
#define JEKCCAGBHKK_PLLALDFCJNC_OFFSET UNITYSDK_OFFSET(0xB981360)

inline static constexpr unsigned int JEKCCAGBHKK_TypeDefinitionIndex = 59158;

	class JEKCCAGBHKK : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PEKOIBEMINM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ILKJANNKCJO*>* EPPMCDAFBEM; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EJFJFNHPJOP; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DLMJNPLGJLG; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAPOHICNBM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_DISPOSE_OFFSET))(this);
		}

		::System::Void OHBHFKJKNOB(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_OHBHFKJKNOB_OFFSET))(this, a1);
		}

		::System::Void GEEBFEPLEEC(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_GEEBFEPLEEC_OFFSET))(this, a1);
		}

		::System::Void PLLALDFCJNC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_PLLALDFCJNC_OFFSET))(this, a1);
		}

		::System::Void CJPBPKNJKBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_CJPBPKNJKBO_OFFSET))(this);
		}

		::System::Void HECMALHOJPH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_HECMALHOJPH_OFFSET))(this, a1);
		}

		::System::Void DHCHEEMKLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_DHCHEEMKLPM_OFFSET))(this);
		}

		::System::Void KKEJBMCDBAO(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JEKCCAGBHKK_KKEJBMCDBAO_OFFSET))(this, a1);
		}

	};
