#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANACIPLIMDE.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D11280)
#define NPPNOGNDFMJ___C__DISPLAYCLASS42_0___APPLYWORLDENTITYVISIBILITYTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x19D1AA20)
#define NPPNOGNDFMJ___C__DISPLAYCLASS42_0___APPLYWORLDENTITYVISIBILITYTOENTITY_B__1_OFFSET UNITYSDK_OFFSET(0x19D1AA50)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass42_0_TypeDefinitionIndex = 61872;

	class NPPNOGNDFMJ___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* visible; // 0x10
		::ANACIPLIMDE visibleParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyWorldEntityVisibilityToEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS42_0___APPLYWORLDENTITYVISIBILITYTOENTITY_B__0_OFFSET))(this);
		}

		::System::Void __ApplyWorldEntityVisibilityToEntity_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS42_0___APPLYWORLDENTITYVISIBILITYTOENTITY_B__1_OFFSET))(this);
		}

	};
