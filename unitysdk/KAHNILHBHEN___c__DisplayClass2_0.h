#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FODPNNIJCJI;
class KAHNILHBHEN;
namespace RPG::GameCore { class LevelGraphComponent; }

#define KAHNILHBHEN___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19DACCE0)
#define KAHNILHBHEN___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x19DADC00)

inline static constexpr unsigned int KAHNILHBHEN___c__DisplayClass2_0_TypeDefinitionIndex = 59940;

	class KAHNILHBHEN___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::KAHNILHBHEN* __4__this; // 0x10
		::RPG::GameCore::LevelGraphComponent* levelGraphCom; // 0x18
		::FODPNNIJCJI* dataCom; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
