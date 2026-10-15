#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LILADDHJJGI_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB6D6BF0)
#define LILADDHJJGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D6890)
#define LILADDHJJGI_EFLJAIAIGIH_OFFSET UNITYSDK_OFFSET(0xB6D6C30)
#define LILADDHJJGI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB6D68A0)
#define LILADDHJJGI_TICK_OFFSET UNITYSDK_OFFSET(0xB6D6CE0)

	class LILADDHJJGI : public ::System::Object
	{
	public:
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* PFHKDKKPBMF; // 0x18
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + LILADDHJJGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + LILADDHJJGI_EXECUTE_OFFSET))(this, a1, a2);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILADDHJJGI_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void EFLJAIAIGIH(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*))((::PBYTE)hIl2Cpp + LILADDHJJGI_EFLJAIAIGIH_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LILADDHJJGI_TICK_OFFSET))(this, a1);
		}

	};
