#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKJMFAFNPMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4A730)
#define HKJMFAFNPMN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D4A970)
#define HKJMFAFNPMN_GET_ALLCHIMERAS_OFFSET UNITYSDK_OFFSET(0x15D4AD00)
#define HKJMFAFNPMN_TICK_OFFSET UNITYSDK_OFFSET(0x15D4ACA0)

	class HKJMFAFNPMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllChimeras_k__BackingField; // 0x10
		::System::Void _ctor(::BFMHFBHIAAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + HKJMFAFNPMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + HKJMFAFNPMN_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKJMFAFNPMN_TICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMFAFNPMN_GET_ALLCHIMERAS_OFFSET))(this);
		}

	};
