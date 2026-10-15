#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCECLBDBENF;
namespace System { class Object; }

#define MCECLBDBENF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F46E0)
#define MCECLBDBENF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4720)
#define MCECLBDBENF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9F4730)

inline static constexpr unsigned int MCECLBDBENF___c_TypeDefinitionIndex = 34422;

	class MCECLBDBENF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCECLBDBENF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF___C_CTOR_OFFSET))(this);
		}

		::MCECLBDBENF* __cctor_b__28_0()
		{
			return ((::MCECLBDBENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
