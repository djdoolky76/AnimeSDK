#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIHABKNJPHB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBBE4E00)
#define NIHABKNJPHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBE4A70)
#define NIHABKNJPHB_EFLJAIAIGIH_OFFSET UNITYSDK_OFFSET(0xBBE4E40)
#define NIHABKNJPHB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBBE4A80)
#define NIHABKNJPHB_GMBOECMOMNA_OFFSET UNITYSDK_OFFSET(0xBBE4F60)
#define NIHABKNJPHB_TICK_OFFSET UNITYSDK_OFFSET(0xBBE4EF0)

inline static constexpr unsigned int NIHABKNJPHB_TypeDefinitionIndex = 77668;

	class NIHABKNJPHB : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* PFHKDKKPBMF; // 0x10
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x18
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x20
		::System::UInt32 CHPOANEOFCO; // 0x28
		::System::Void _ctor(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::UInt32))((::PBYTE)hIl2Cpp + NIHABKNJPHB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + NIHABKNJPHB_EXECUTE_OFFSET))(this, a1, a2);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHABKNJPHB_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void EFLJAIAIGIH(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*))((::PBYTE)hIl2Cpp + NIHABKNJPHB_EFLJAIAIGIH_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIHABKNJPHB_TICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HBLDGJCDJPF*>* GMBOECMOMNA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HBLDGJCDJPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHABKNJPHB_GMBOECMOMNA_OFFSET))(this);
		}

	};
