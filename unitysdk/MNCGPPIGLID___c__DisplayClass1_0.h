#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCGPPIGLID;
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesItemView; }

#define MNCGPPIGLID___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E81B0)
#define MNCGPPIGLID___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB9E83C0)

inline static constexpr unsigned int MNCGPPIGLID___c__DisplayClass1_0_TypeDefinitionIndex = 52661;

	class MNCGPPIGLID___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MNCGPPIGLID* __4__this; // 0x10
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesItemView* chenLingVisitorView; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCGPPIGLID___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCGPPIGLID___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
