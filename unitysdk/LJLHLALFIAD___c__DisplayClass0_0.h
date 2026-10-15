#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LJLHLALFIAD___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB71EF10)
#define LJLHLALFIAD___C__DISPLAYCLASS0_0__CREATESETINTERACTABLECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB720AF0)

inline static constexpr unsigned int LJLHLALFIAD___c__DisplayClass0_0_TypeDefinitionIndex = 80840;

	class LJLHLALFIAD___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::System::Boolean interactable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSetInteractableCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS0_0__CREATESETINTERACTABLECOMMAND_B__0_OFFSET))(this);
		}

	};
