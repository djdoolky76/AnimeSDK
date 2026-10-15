#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class PropInfoSnapshot; }
namespace System { class Object; }

#define PROTO_PROPINFOSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDFFA0)
#define PROTO_PROPINFOSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDFFE0)
#define PROTO_PROPINFOSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFDFFF0)

namespace Proto
{
	inline static constexpr unsigned int PropInfoSnapshot___c_TypeDefinitionIndex = 25822;

	class PropInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4E550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::PropInfoSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
