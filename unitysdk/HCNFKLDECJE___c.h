#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNFKLDECJE;
namespace System { class Object; }

#define HCNFKLDECJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C5D30)
#define HCNFKLDECJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200C5D70)
#define HCNFKLDECJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200C5D80)

inline static constexpr unsigned int HCNFKLDECJE___c_TypeDefinitionIndex = 32502;

	class HCNFKLDECJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNFKLDECJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE___C_CTOR_OFFSET))(this);
		}

		::HCNFKLDECJE* __cctor_b__23_0()
		{
			return ((::HCNFKLDECJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
