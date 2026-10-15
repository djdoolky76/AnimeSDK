#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class VectorSnapshot; }
namespace System { class Object; }

#define PROTO_VECTORSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01C750)
#define PROTO_VECTORSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01C790)
#define PROTO_VECTORSNAPSHOT___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E01C7A0)

namespace Proto
{
	class VectorSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x47760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::VectorSnapshot* __cctor_b__33_0()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
