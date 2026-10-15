#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class EraFlipperSnapshot; }
namespace System { class Object; }

#define PROTO_ERAFLIPPERSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC34C0)
#define PROTO_ERAFLIPPERSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3500)
#define PROTO_ERAFLIPPERSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFC3510)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperSnapshot___c_TypeDefinitionIndex = 25845;

	class EraFlipperSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::EraFlipperSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
