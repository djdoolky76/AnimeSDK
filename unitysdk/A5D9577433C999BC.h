#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoAvatarIcon; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define A5D9577433C999BC_A0078FFEEE7A0DC3_OFFSET UNITYSDK_OFFSET(0x181B4A0)
#define A5D9577433C999BC_E34E08B3E962FE70_OFFSET UNITYSDK_OFFSET(0x181B520)
#define A5D9577433C999BC_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x181B590)
#define A5D9577433C999BC_F611BC776AD4AA99_OFFSET UNITYSDK_OFFSET(0x181B880)
#define A5D9577433C999BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A5D9577433C999BC_TypeDefinitionIndex = 1102;

class A5D9577433C999BC : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoAvatarIcon* BE8B00C796036193; // 0x80
	::System::UInt32 E971E24AD73D201C; // 0x88
	::System::Byte _padding0[0x4];
	::System::Action_2<::System::UInt32, ::ABC::UI::MonoAvatarIcon*>* FCCD2716B1B4CDF5; // 0x90

	::System::Boolean F611BC776AD4AA99(::System::UInt32 F421A62D3EFA9845, ::System::UInt32& B3CAAA38E8603E99)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + A5D9577433C999BC_F611BC776AD4AA99_OFFSET))(this, F421A62D3EFA9845, B3CAAA38E8603E99);
	}

	::System::Void A0078FFEEE7A0DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5D9577433C999BC_A0078FFEEE7A0DC3_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5D9577433C999BC__CTOR_OFFSET))(this);
	}

	::System::Void E34E08B3E962FE70(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A5D9577433C999BC_E34E08B3E962FE70_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 BC8A36DD3606E794, ::System::Boolean E9AC3977D356A1A7, ::System::Action_2<::System::UInt32, ::ABC::UI::MonoAvatarIcon*>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Action_2<::System::UInt32, ::ABC::UI::MonoAvatarIcon*>*))((::PBYTE)hIl2Cpp + A5D9577433C999BC_EC3033C0485522FB_OFFSET))(this, BC8A36DD3606E794, E9AC3977D356A1A7, FABBF4F55603A392);
	}
};
