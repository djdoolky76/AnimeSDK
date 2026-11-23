#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF5FBA80BA4AF1CC/AF995F751A46660E.h"
#include "unitysdk/System/MulticastDelegate.h"

class E5A306878B0E610D;
namespace System { class Object; }

#define AF5FBA80BA4AF1CC_B6A8E12F6D7BECFC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define AF5FBA80BA4AF1CC_B6A8E12F6D7BECFC__CTOR_OFFSET UNITYSDK_OFFSET(0x38E2F50)

namespace AF5FBA80BA4AF1CC
{
	inline static constexpr unsigned int B6A8E12F6D7BECFC_TypeDefinitionIndex = 14625;

	class B6A8E12F6D7BECFC : public ::System::MulticastDelegate
	{
	public:
		::AF5FBA80BA4AF1CC::AF995F751A46660E Invoke(::E5A306878B0E610D* E1684FB517295149)
		{
			return ((::AF5FBA80BA4AF1CC::AF995F751A46660E(*)(::PVOID, ::E5A306878B0E610D*))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_B6A8E12F6D7BECFC_INVOKE_OFFSET))(this, E1684FB517295149);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_B6A8E12F6D7BECFC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
