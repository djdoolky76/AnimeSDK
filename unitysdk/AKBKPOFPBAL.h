#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBKPOFPBAL;
class BEMBBOJGAON;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define AKBKPOFPBAL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC91F0)

inline static constexpr unsigned int AKBKPOFPBAL_TypeDefinitionIndex = 73119;

	class AKBKPOFPBAL : public ::System::Object
	{
	public:
		::RPG::Client::UIController* LFGGECDJFHB; // 0x10
		::System::Action* DPANHIICMLD; // 0x18
		::RPG::Client::UIController* LPJMDKIBPCG; // 0x20
		::RPG::Client::UIController* ANIHEHNCACM; // 0x28
		::BEMBBOJGAON* LGNNAOLPNIP; // 0x30
		::System::Boolean FEBKMOCOJLE; // 0x38
		::System::Boolean CCKPNCIBDGP; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKPOFPBAL_CTOR_OFFSET))(this);
		}

	};
