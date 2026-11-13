#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class PerformanceStartSnapshot; }
namespace System { class Object; }

#define PROTO_PERFORMANCESTARTSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202172D0)
#define PROTO_PERFORMANCESTARTSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20217310)
#define PROTO_PERFORMANCESTARTSNAPSHOT___C___CCTOR_B__133_0_OFFSET UNITYSDK_OFFSET(0x20217320)

namespace Proto
{
	inline static constexpr unsigned int PerformanceStartSnapshot___c_TypeDefinitionIndex = 26354;

	class PerformanceStartSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x539D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::PerformanceStartSnapshot* __cctor_b__133_0()
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C___CCTOR_B__133_0_OFFSET))(this);
		}

	};
}
