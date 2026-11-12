#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJPKBDFIHKF;
class CDEAABODKCP;
namespace RPG::Client { class GridFightEquipItemData; }

#define BJPKBDFIHKF___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC0FCB90)
#define BJPKBDFIHKF___C__DISPLAYCLASS9_0__UPDATEROLE_B__0_OFFSET UNITYSDK_OFFSET(0xC100BD0)
#define BJPKBDFIHKF___C__DISPLAYCLASS9_0__UPDATEROLE_B__1_OFFSET UNITYSDK_OFFSET(0xC100C10)

inline static constexpr unsigned int BJPKBDFIHKF___c__DisplayClass9_0_TypeDefinitionIndex = 66539;

	class BJPKBDFIHKF___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::BJPKBDFIHKF* __4__this; // 0x10
		::CDEAABODKCP* roleSever; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS9_0__UPDATEROLE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateRole_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS9_0__UPDATEROLE_B__1_OFFSET))(this, a1);
		}

	};
