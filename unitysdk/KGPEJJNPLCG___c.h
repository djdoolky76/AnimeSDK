#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPEJJNPLCG;
namespace System { class Object; }

#define KGPEJJNPLCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E810DA0)
#define KGPEJJNPLCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E810DD0)
#define KGPEJJNPLCG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E810DE0)

inline static constexpr unsigned int KGPEJJNPLCG___c_TypeDefinitionIndex = 26788;

	class KGPEJJNPLCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGPEJJNPLCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPEJJNPLCG___C_CTOR_OFFSET))(this);
		}

		::KGPEJJNPLCG* __cctor_b__43_0()
		{
			return ((::KGPEJJNPLCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPEJJNPLCG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
