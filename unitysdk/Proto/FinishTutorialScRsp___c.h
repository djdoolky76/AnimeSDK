#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class FinishTutorialScRsp; }
namespace System { class Object; }

#define PROTO_FINISHTUTORIALSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF3200)
#define PROTO_FINISHTUTORIALSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF3240)
#define PROTO_FINISHTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFF3250)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialScRsp___c_TypeDefinitionIndex = 35059;

	class FinishTutorialScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialScRsp* __cctor_b__28_0()
		{
			return ((::Proto::FinishTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
