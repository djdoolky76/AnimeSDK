#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class FloorCustomValueSnapshot; }
namespace System { class Object; }

#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC6A60)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC6AA0)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DFC6AB0)

namespace Proto
{
	inline static constexpr unsigned int FloorCustomValueSnapshot___c_TypeDefinitionIndex = 25818;

	class FloorCustomValueSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4AB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::FloorCustomValueSnapshot* __cctor_b__43_0()
		{
			return ((::Proto::FloorCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
