#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNFKLDECJE;
namespace System { class Object; }

#define HCNFKLDECJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E545000)
#define HCNFKLDECJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E545040)
#define HCNFKLDECJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E545050)

inline static constexpr unsigned int HCNFKLDECJE___c_TypeDefinitionIndex = 31589;

	class HCNFKLDECJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30BF0);
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
