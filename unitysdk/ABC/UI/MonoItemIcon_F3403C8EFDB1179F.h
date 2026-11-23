#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoItemIcon; }
namespace System { template <typename T> class Action_1; }

#define ABC_UI_MONOITEMICON_F3403C8EFDB1179F_E6FF46ADD6B79EFF_OFFSET UNITYSDK_OFFSET(0x22C0510)
#define ABC_UI_MONOITEMICON_F3403C8EFDB1179F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoItemIcon_F3403C8EFDB1179F_TypeDefinitionIndex = 7164;

	class MonoItemIcon_F3403C8EFDB1179F : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* BB2BDE172CA6C68F; // 0x10
		::ABC::UI::MonoItemIcon* A544919C800E2923; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOITEMICON_F3403C8EFDB1179F__CTOR_OFFSET))(this);
		}

		::System::Void E6FF46ADD6B79EFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOITEMICON_F3403C8EFDB1179F_E6FF46ADD6B79EFF_OFFSET))(this);
		}
	};
}
