#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFCAGHNKJOA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C765190)
#define NFCAGHNKJOA___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x1C765400)

inline static constexpr unsigned int NFCAGHNKJOA___c__DisplayClass1_0_TypeDefinitionIndex = 37350;

	class NFCAGHNKJOA___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* actionConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCAGHNKJOA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _EnterImpl_b__0(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NFCAGHNKJOA___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET))(this, a1);
		}

	};
