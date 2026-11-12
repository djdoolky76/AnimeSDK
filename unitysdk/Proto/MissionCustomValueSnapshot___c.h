#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MissionCustomValueSnapshot; }
namespace System { class Object; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2D4050)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D4090)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2D40A0)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshot___c_TypeDefinitionIndex = 26328;

	class MissionCustomValueSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x508E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MissionCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
