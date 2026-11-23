#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A67713ED1D84A79B;
namespace System { class Object; }

#define B93548963298C8B7_BF3DBB87FE332CDF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B93548963298C8B7_BF3DBB87FE332CDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace B93548963298C8B7
{
	inline static constexpr unsigned int BF3DBB87FE332CDF_TypeDefinitionIndex = 15862;

	class BF3DBB87FE332CDF : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::A67713ED1D84A79B* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::A67713ED1D84A79B*))((::PBYTE)hIl2Cpp + B93548963298C8B7_BF3DBB87FE332CDF_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B93548963298C8B7_BF3DBB87FE332CDF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
