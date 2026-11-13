#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMLIEFOFJHF;
namespace System { class Object; }

#define PMLIEFOFJHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201F9380)
#define PMLIEFOFJHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201F93C0)
#define PMLIEFOFJHF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x201F93D0)

inline static constexpr unsigned int PMLIEFOFJHF___c_TypeDefinitionIndex = 33308;

	class PMLIEFOFJHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x499E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMLIEFOFJHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF___C_CTOR_OFFSET))(this);
		}

		::PMLIEFOFJHF* __cctor_b__33_0()
		{
			return ((::PMLIEFOFJHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
