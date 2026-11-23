#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/UnityEngine/EC2AC38D9624497F.h"

namespace System { class Object; }

#define BF500EC7044DC6A8_A81C82B3BE09BB8C_EB733B7A63F24911_INVOKE_OFFSET UNITYSDK_OFFSET(0x42172C0)
#define BF500EC7044DC6A8_A81C82B3BE09BB8C_EB733B7A63F24911__CTOR_OFFSET UNITYSDK_OFFSET(0x4217300)

namespace BF500EC7044DC6A8
{
	inline static constexpr unsigned int A81C82B3BE09BB8C_EB733B7A63F24911_TypeDefinitionIndex = 18536;

	class A81C82B3BE09BB8C_EB733B7A63F24911 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_EB733B7A63F24911__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::Il2CppArray<::UnityEngine::E99D0ADA759D15E2>* Invoke(::UnityEngine::EC2AC38D9624497F A342D5344F7596A8, ::System::Single A45600735D539BFC, ::System::Int32 FC300ADBDFF24726)
		{
			return ((::Il2CppArray<::UnityEngine::E99D0ADA759D15E2>*(*)(::PVOID, ::UnityEngine::EC2AC38D9624497F, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_EB733B7A63F24911_INVOKE_OFFSET))(this, A342D5344F7596A8, A45600735D539BFC, FC300ADBDFF24726);
		}
	};
}
