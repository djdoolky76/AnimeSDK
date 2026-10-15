#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLLDHFAAHEP;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGJANNFKDLK___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14517FC0)
#define EGJANNFKDLK___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET UNITYSDK_OFFSET(0x14518300)

inline static constexpr unsigned int EGJANNFKDLK___c__DisplayClass8_0_TypeDefinitionIndex = 71197;

	class EGJANNFKDLK___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* buffData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJANNFKDLK___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetupBuffList_b__0(::DLLDHFAAHEP* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLLDHFAAHEP*, ::System::Int32))((::PBYTE)hIl2Cpp + EGJANNFKDLK___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET))(this, a1, a2);
		}

	};
