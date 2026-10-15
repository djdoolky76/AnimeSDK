#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LinearModuleRendererBehavior_ItemData.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_EDITOR_BGCURVEPCG_ROAD___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE49FB60)
#define RPG_EDITOR_BGCURVEPCG_ROAD___C__DISPLAYCLASS27_0__MERGELINEARMODULEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xE4A03A0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_Road___c__DisplayClass27_0_TypeDefinitionIndex = 52017;

	class BGCurvePCG_Road___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::System::Object*>* __9__0; // 0x10
		::System::Int32 sourceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeLinearModuleGroup_b__0(::RPG::Client::LinearModuleRendererBehavior_ItemData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LinearModuleRendererBehavior_ItemData))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD___C__DISPLAYCLASS27_0__MERGELINEARMODULEGROUP_B__0_OFFSET))(this, a1);
		}

	};
}
