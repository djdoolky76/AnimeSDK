#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNEFGJCCMB;
namespace System { class Object; }

#define HCNEFGJCCMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E544820)
#define HCNEFGJCCMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E544850)
#define HCNEFGJCCMB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E544860)

inline static constexpr unsigned int HCNEFGJCCMB___c_TypeDefinitionIndex = 33031;

	class HCNEFGJCCMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNEFGJCCMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB___C_CTOR_OFFSET))(this);
		}

		::HCNEFGJCCMB* __cctor_b__23_0()
		{
			return ((::HCNEFGJCCMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
