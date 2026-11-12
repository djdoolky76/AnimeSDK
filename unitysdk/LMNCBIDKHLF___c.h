#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMNCBIDKHLF;
namespace System { class Object; }

#define LMNCBIDKHLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0CB0)
#define LMNCBIDKHLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0CF0)
#define LMNCBIDKHLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCD0D00)

inline static constexpr unsigned int LMNCBIDKHLF___c_TypeDefinitionIndex = 34523;

	class LMNCBIDKHLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C_CTOR_OFFSET))(this);
		}

		::LMNCBIDKHLF* __cctor_b__23_0()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
