#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/EC2AC38D9624497F.h"
#include "unitysdk/UnityEngine/FCA3E53C2DA052B5.h"

namespace System { class Object; }

#define BF500EC7044DC6A8_A81C82B3BE09BB8C_F53C9BE06E8A14ED_INVOKE_OFFSET UNITYSDK_OFFSET(0x42173B0)
#define BF500EC7044DC6A8_A81C82B3BE09BB8C_F53C9BE06E8A14ED__CTOR_OFFSET UNITYSDK_OFFSET(0x42173F0)

namespace BF500EC7044DC6A8
{
	inline static constexpr unsigned int A81C82B3BE09BB8C_F53C9BE06E8A14ED_TypeDefinitionIndex = 18540;

	class A81C82B3BE09BB8C_F53C9BE06E8A14ED : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_F53C9BE06E8A14ED__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke(::UnityEngine::EC2AC38D9624497F A342D5344F7596A8, ::Il2CppArray<::UnityEngine::FCA3E53C2DA052B5>* ED6F2018685A621A, ::System::Single A45600735D539BFC, ::System::Int32 FC300ADBDFF24726)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EC2AC38D9624497F, ::Il2CppArray<::UnityEngine::FCA3E53C2DA052B5>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_F53C9BE06E8A14ED_INVOKE_OFFSET))(this, A342D5344F7596A8, ED6F2018685A621A, A45600735D539BFC, FC300ADBDFF24726);
		}
	};
}
