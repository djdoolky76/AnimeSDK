#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/UnityEngine/EC2AC38D9624497F.h"

namespace System { class Object; }

#define BF500EC7044DC6A8_A81C82B3BE09BB8C_A9A4C3982603ECBD_INVOKE_OFFSET UNITYSDK_OFFSET(0x42173B0)
#define BF500EC7044DC6A8_A81C82B3BE09BB8C_A9A4C3982603ECBD__CTOR_OFFSET UNITYSDK_OFFSET(0x4227C90)

namespace BF500EC7044DC6A8
{
	inline static constexpr unsigned int A81C82B3BE09BB8C_A9A4C3982603ECBD_TypeDefinitionIndex = 18535;

	class A81C82B3BE09BB8C_A9A4C3982603ECBD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_A9A4C3982603ECBD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::UnityEngine::EC2AC38D9624497F A342D5344F7596A8, ::UnityEngine::E99D0ADA759D15E2& FD38A9AB8BEA087C, ::System::Single A45600735D539BFC, ::System::Int32 FC300ADBDFF24726)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EC2AC38D9624497F, ::UnityEngine::E99D0ADA759D15E2&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_A9A4C3982603ECBD_INVOKE_OFFSET))(this, A342D5344F7596A8, FD38A9AB8BEA087C, A45600735D539BFC, FC300ADBDFF24726);
		}
	};
}
