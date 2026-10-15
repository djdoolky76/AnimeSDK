#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class AssistSimpleInfo; }
namespace System { class Object; }

#define PROTO_ASSISTSIMPLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE84C0)
#define PROTO_ASSISTSIMPLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE84F0)
#define PROTO_ASSISTSIMPLEINFO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFE8500)

namespace Proto
{
	inline static constexpr unsigned int AssistSimpleInfo___c_TypeDefinitionIndex = 25862;

	class AssistSimpleInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x439F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C_CTOR_OFFSET))(this);
		}

		::Proto::AssistSimpleInfo* __cctor_b__38_0()
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
