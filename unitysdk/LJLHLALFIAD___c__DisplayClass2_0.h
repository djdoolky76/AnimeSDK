#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LJLHLALFIAD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB71F190)
#define LJLHLALFIAD___C__DISPLAYCLASS2_0__CREATEMARKINPRELAYOUTCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB720B10)

inline static constexpr unsigned int LJLHLALFIAD___c__DisplayClass2_0_TypeDefinitionIndex = 80842;

	class LJLHLALFIAD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateMarkInPreLayoutCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS2_0__CREATEMARKINPRELAYOUTCOMMAND_B__0_OFFSET))(this);
		}

	};
