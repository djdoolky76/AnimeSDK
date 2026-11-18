#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace MoleMole { class UIGeneralButtonController; }

#define KFGCLOPEGJO_NKJHGLKDEMD_KFFCPAAEJHL_OFFSET UNITYSDK_OFFSET(0x1A2C5C50)
#define KFGCLOPEGJO_NKJHGLKDEMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C5C40)

inline static constexpr unsigned int KFGCLOPEGJO_NKJHGLKDEMD_TypeDefinitionIndex = 78906;

class KFGCLOPEGJO_NKJHGLKDEMD : public ::System::Object
{
public:
	::MoleMole::UIGeneralButtonController* IDIOALGAEAM; // 0x10
	::LGINJIKKBJA* EMKOMOJPKDH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NKJHGLKDEMD__CTOR_OFFSET))(this);
	}

	::System::Void KFFCPAAEJHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NKJHGLKDEMD_KFFCPAAEJHL_OFFSET))(this);
	}
};
