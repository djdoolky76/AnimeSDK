#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoButton; }
namespace System { class Action; }

#define E15BB413E7995707_A6A45F3BAC5753BE_OFFSET UNITYSDK_OFFSET(0x1F5E360)
#define E15BB413E7995707_B89EA45DEDC28E4E_OFFSET UNITYSDK_OFFSET(0x1F5E4E0)
#define E15BB413E7995707_EB90428B421AFD0E_OFFSET UNITYSDK_OFFSET(0x1F5E430)
#define E15BB413E7995707_F7AF5D1CF0A80E59_OFFSET UNITYSDK_OFFSET(0x1F5E290)

inline static constexpr unsigned int E15BB413E7995707_TypeDefinitionIndex = 7765;

class E15BB413E7995707 : public ::System::Object
{
public:
	static ::System::Void F7AF5D1CF0A80E59(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Action* E04D2BE64FCE9814, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + E15BB413E7995707_F7AF5D1CF0A80E59_OFFSET))(BC6B0383E5D4D817, E04D2BE64FCE9814, F7C511FBCE59B4A5);
	}

	static ::System::Void B89EA45DEDC28E4E(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Action* E04D2BE64FCE9814, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + E15BB413E7995707_B89EA45DEDC28E4E_OFFSET))(BC6B0383E5D4D817, E04D2BE64FCE9814, F7C511FBCE59B4A5);
	}

	static ::System::Void EB90428B421AFD0E(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Boolean))((::PBYTE)hIl2Cpp + E15BB413E7995707_EB90428B421AFD0E_OFFSET))(BC6B0383E5D4D817, F7C511FBCE59B4A5);
	}

	static ::System::Void A6A45F3BAC5753BE(::ABC::UI::MonoButton* BC6B0383E5D4D817, ::System::Action* E04D2BE64FCE9814, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::ABC::UI::MonoButton*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + E15BB413E7995707_A6A45F3BAC5753BE_OFFSET))(BC6B0383E5D4D817, E04D2BE64FCE9814, F7C511FBCE59B4A5);
	}
};
