#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA764B4A67FFE28D.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define ABC_VIEW_MONOVIEW_A53FC47820527A3C_AA95CED8E1A79FB6_OFFSET UNITYSDK_OFFSET(0x2702AD0)
#define ABC_VIEW_MONOVIEW_A53FC47820527A3C_B3D5F5ED035C3827_OFFSET UNITYSDK_OFFSET(0x2702B90)
#define ABC_VIEW_MONOVIEW_A53FC47820527A3C_F1A90A1CBC8A9B14_OFFSET UNITYSDK_OFFSET(0x2702910)
#define ABC_VIEW_MONOVIEW_A53FC47820527A3C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::View
{
	inline static constexpr unsigned int MonoView_A53FC47820527A3C_TypeDefinitionIndex = 2826;

	class MonoView_A53FC47820527A3C : public ::BA764B4A67FFE28D
	{
	public:
		::UnityEngine::Quaternion B670B5401C1C52DB; // 0x28
		::UnityEngine::Quaternion E8DFD419CD7A8A30; // 0x38

		::System::Void B3D5F5ED035C3827(::UnityEngine::Quaternion E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A53FC47820527A3C_B3D5F5ED035C3827_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AA95CED8E1A79FB6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A53FC47820527A3C_AA95CED8E1A79FB6_OFFSET))(this);
		}

		::System::Void F1A90A1CBC8A9B14(::System::Single A63A2A070210EF43)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A53FC47820527A3C_F1A90A1CBC8A9B14_OFFSET))(this, A63A2A070210EF43);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A53FC47820527A3C__CTOR_OFFSET))(this);
		}
	};
}
