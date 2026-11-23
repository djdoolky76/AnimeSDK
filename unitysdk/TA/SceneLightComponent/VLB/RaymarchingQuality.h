#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY_NEW_OFFSET UNITYSDK_OFFSET(0x2878B70)
#define TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x2878C90)
#define TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x2878D40)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int RaymarchingQuality_TypeDefinitionIndex = 16086;

	class RaymarchingQuality : public ::System::Object
	{
	public:
		static ::TA::SceneLightComponent::VLB::RaymarchingQuality** StaticGet_ms_DefaultInstance()
		{
			return (::TA::SceneLightComponent::VLB::RaymarchingQuality**)Il2CppClass::FromTypeDefinitionIndex(RaymarchingQuality_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* name; // 0x10
		::System::Int32 stepCount; // 0x18
		::System::Int32 _UniqueID; // 0x1C

		static ::TA::SceneLightComponent::VLB::RaymarchingQuality* New(::System::String* F79B4D487F303AB2, ::System::Int32 EE63AA76D1438992, ::System::Int32 E75479DCBDF7D45C)
		{
			return ((::TA::SceneLightComponent::VLB::RaymarchingQuality*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY_NEW_OFFSET))(F79B4D487F303AB2, EE63AA76D1438992, E75479DCBDF7D45C);
		}

		::System::Void _ctor(::System::Int32 BFCA5087D3CB7688)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY__CTOR_OFFSET))(this, BFCA5087D3CB7688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY__CCTOR_OFFSET))();
		}

		::System::Int32 get_uniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_RAYMARCHINGQUALITY_GET_UNIQUEID_OFFSET))(this);
		}
	};
}
