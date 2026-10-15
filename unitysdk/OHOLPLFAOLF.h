#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class BFMHFBHIAAL;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHOLPLFAOLF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBE6E7F0)
#define OHOLPLFAOLF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6E210)
#define OHOLPLFAOLF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE6E3B0)
#define OHOLPLFAOLF_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xBE6E1F0)
#define OHOLPLFAOLF_HMIHOMIAOCB_OFFSET UNITYSDK_OFFSET(0xBE6E250)
#define OHOLPLFAOLF_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0xBE6E2E0)
#define OHOLPLFAOLF_SET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xBE6E200)
#define OHOLPLFAOLF_TICK_OFFSET UNITYSDK_OFFSET(0xBE6E780)

inline static constexpr unsigned int OHOLPLFAOLF_TypeDefinitionIndex = 77646;

	class OHOLPLFAOLF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* _Commands_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* ICMGDNGCFAA; // 0x18
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x20
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CMOLKFPJDLE; // 0x28
		// static const ::System::String* IBLNAGJPJHJ; // 0x0
		::System::Void _ctor(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1, ::KAKADGHNMFK* a2, ::KAKADGHNMFK* a3, ::BFMHFBHIAAL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* get_Commands()
		{
			return ((::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_GET_COMMANDS_OFFSET))(this);
		}

		::System::Void set_Commands(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_SET_COMMANDS_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::ChimeraDuelNodeContainer* HMIHOMIAOCB()
		{
			return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + OHOLPLFAOLF_HMIHOMIAOCB_OFFSET))();
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHOLPLFAOLF_NFDHENMGIBA_OFFSET))();
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_TICK_OFFSET))(this, a1);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOLPLFAOLF_ACMKLFOMPFC_OFFSET))(this);
		}

	};
