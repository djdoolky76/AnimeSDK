#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECPNKPOOCP;
namespace System { class Object; }

#define AECPNKPOOCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA020)
#define AECPNKPOOCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA060)
#define AECPNKPOOCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDEA070)

inline static constexpr unsigned int AECPNKPOOCP___c_TypeDefinitionIndex = 26057;

	class AECPNKPOOCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AECPNKPOOCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP___C_CTOR_OFFSET))(this);
		}

		::AECPNKPOOCP* __cctor_b__28_0()
		{
			return ((::AECPNKPOOCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
