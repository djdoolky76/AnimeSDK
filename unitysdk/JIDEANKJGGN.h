#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
class ELECJOJHOAJ;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIDEANKJGGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E79A0)
#define JIDEANKJGGN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB1E7C00)
#define JIDEANKJGGN_TICK_OFFSET UNITYSDK_OFFSET(0xB1E8550)

inline static constexpr unsigned int JIDEANKJGGN_TypeDefinitionIndex = 77663;

	class JIDEANKJGGN : public ::System::Object
	{
	public:
		::System::Action* LGAOOKPFIMF; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* FAGBDHNDLBO; // 0x18
		::System::Collections::Generic::List_1<::ELECJOJHOAJ*>* JCDJIOEPELJ; // 0x20
		::System::Void _ctor(::BFMHFBHIAAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + JIDEANKJGGN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + JIDEANKJGGN_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JIDEANKJGGN_TICK_OFFSET))(this, a1);
		}

	};
