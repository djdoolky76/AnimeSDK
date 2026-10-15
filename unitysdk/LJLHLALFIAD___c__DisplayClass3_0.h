#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LJLHLALFIAD___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB718540)
#define LJLHLALFIAD___C__DISPLAYCLASS3_0__CREATECLEARSKIPLAYOUTCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB719D90)

inline static constexpr unsigned int LJLHLALFIAD___c__DisplayClass3_0_TypeDefinitionIndex = 80842;

	class LJLHLALFIAD___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateClearSkipLayoutCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS3_0__CREATECLEARSKIPLAYOUTCOMMAND_B__0_OFFSET))(this);
		}

	};
