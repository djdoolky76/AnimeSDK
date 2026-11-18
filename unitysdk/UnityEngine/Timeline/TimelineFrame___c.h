#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5FFF80)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FFFC0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__REFRESHVALUE_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5FFFD0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineFrame___c_TypeDefinitionIndex = 32382;

	class TimelineFrame___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame___c_TypeDefinitionIndex)->GetStaticField(0x29040);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame___c_TypeDefinitionIndex)->GetStaticField(0x29048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshValue_b__28_0(::System::Int32 item1, ::System::Int32 item2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__REFRESHVALUE_B__28_0_OFFSET))(this, item1, item2);
		}
	};
}
