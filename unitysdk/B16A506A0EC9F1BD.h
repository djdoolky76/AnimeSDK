#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoButton; }
namespace System { class Action; }

#define B16A506A0EC9F1BD_AC0E9D9734D7E0CB_OFFSET UNITYSDK_OFFSET(0x1FE4630)
#define B16A506A0EC9F1BD_ADBEA58151453818_OFFSET UNITYSDK_OFFSET(0x1FE46F0)
#define B16A506A0EC9F1BD_B0F3F9AA532F9EDD_OFFSET UNITYSDK_OFFSET(0x1FE4550)
#define B16A506A0EC9F1BD_BD4DEE03CE8EBF34_OFFSET UNITYSDK_OFFSET(0x1FE47D0)

inline static constexpr unsigned int B16A506A0EC9F1BD_TypeDefinitionIndex = 8123;

class B16A506A0EC9F1BD : public ::System::Object
{
public:
	static ::System::Void BD4DEE03CE8EBF34(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Action* E04D2BE64FCE9814, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + B16A506A0EC9F1BD_BD4DEE03CE8EBF34_OFFSET))(BC6B0383E5D4D817, E04D2BE64FCE9814, F7C511FBCE59B4A5);
	}

	static ::System::Void AC0E9D9734D7E0CB(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Boolean))((::PBYTE)hIl2Cpp + B16A506A0EC9F1BD_AC0E9D9734D7E0CB_OFFSET))(BC6B0383E5D4D817, F7C511FBCE59B4A5);
	}

	static ::System::Void ADBEA58151453818(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Boolean EB8901FEAF009D26, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + B16A506A0EC9F1BD_ADBEA58151453818_OFFSET))(BC6B0383E5D4D817, EB8901FEAF009D26, F7C511FBCE59B4A5);
	}

	static ::System::Void B0F3F9AA532F9EDD(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Action* E04D2BE64FCE9814, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + B16A506A0EC9F1BD_B0F3F9AA532F9EDD_OFFSET))(BC6B0383E5D4D817, E04D2BE64FCE9814, F7C511FBCE59B4A5);
	}
};
