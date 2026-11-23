#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F21744948B0D0B11;
namespace System { class Object; }

#define EC2259717D713A4F_AC558706222AE91C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EC2259717D713A4F_AC558706222AE91C__CTOR_OFFSET UNITYSDK_OFFSET(0x334B040)

namespace EC2259717D713A4F
{
	inline static constexpr unsigned int AC558706222AE91C_TypeDefinitionIndex = 15019;

	class AC558706222AE91C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC2259717D713A4F_AC558706222AE91C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke(::F21744948B0D0B11* F99B0FE319DB74D1)
		{
			return ((::System::Int32(*)(::PVOID, ::F21744948B0D0B11*))((::PBYTE)hIl2Cpp + EC2259717D713A4F_AC558706222AE91C_INVOKE_OFFSET))(this, F99B0FE319DB74D1);
		}
	};
}
