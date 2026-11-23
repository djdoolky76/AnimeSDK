#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A3F70B3A64449992;
namespace System { class Object; }

#define FE740FFB83D7618F_ADD1F47484E4FB0B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FE740FFB83D7618F_ADD1F47484E4FB0B__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace FE740FFB83D7618F
{
	inline static constexpr unsigned int ADD1F47484E4FB0B_TypeDefinitionIndex = 15101;

	class ADD1F47484E4FB0B : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::A3F70B3A64449992* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::A3F70B3A64449992*))((::PBYTE)hIl2Cpp + FE740FFB83D7618F_ADD1F47484E4FB0B_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE740FFB83D7618F_ADD1F47484E4FB0B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
