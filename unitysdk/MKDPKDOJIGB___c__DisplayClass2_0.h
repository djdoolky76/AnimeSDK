#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define MKDPKDOJIGB___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB988790)
#define MKDPKDOJIGB___C__DISPLAYCLASS2_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xB988890)

inline static constexpr unsigned int MKDPKDOJIGB___c__DisplayClass2_0_TypeDefinitionIndex = 75036;

	class MKDPKDOJIGB___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingGameInstance* owner; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPKDOJIGB___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPKDOJIGB___C__DISPLAYCLASS2_0___ONENTER_B__0_OFFSET))(this);
		}

	};
