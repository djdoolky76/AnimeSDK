#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOIPKDPHGF;
namespace System { class Object; }

#define NKOIPKDPHGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB32290)
#define NKOIPKDPHGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB322C0)
#define NKOIPKDPHGF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB322D0)

inline static constexpr unsigned int NKOIPKDPHGF___c_TypeDefinitionIndex = 32351;

	class NKOIPKDPHGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOIPKDPHGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF___C_CTOR_OFFSET))(this);
		}

		::NKOIPKDPHGF* __cctor_b__18_0()
		{
			return ((::NKOIPKDPHGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
