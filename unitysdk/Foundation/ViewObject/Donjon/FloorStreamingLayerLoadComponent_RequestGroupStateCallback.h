#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"

class IHLLEPCIGGO;
namespace MoleMole::Config { class FloorStreamingLayerLoadGroupStateEntry; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK_ONRSP_OFFSET UNITYSDK_OFFSET(0x15CCDA00)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCE0C0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent_RequestGroupStateCallback_TypeDefinitionIndex = 45918;

	class FloorStreamingLayerLoadComponent_RequestGroupStateCallback : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*>* StateList; // 0x10
		::System::Object* Flag; // 0x18
		::System::Boolean _failure; // 0x20
		::System::Byte _padding0[0x3];
		::NapStreaming::StreamingLayer Layer; // 0x24
		::System::Int32 _count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK__CTOR_OFFSET))(this);
		}

		::System::Void OnRsp(::System::Boolean success, ::System::Int32 groupId, ::IHLLEPCIGGO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::IHLLEPCIGGO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK_ONRSP_OFFSET))(this, success, groupId, rsp);
		}
	};
}
