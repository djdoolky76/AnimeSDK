#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCJMFNOJBAC;
namespace System { class Object; }

#define LCJMFNOJBAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2BCA0)
#define LCJMFNOJBAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2BCE0)
#define LCJMFNOJBAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC2BCF0)

inline static constexpr unsigned int LCJMFNOJBAC___c_TypeDefinitionIndex = 31689;

	class LCJMFNOJBAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCJMFNOJBAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC___C_CTOR_OFFSET))(this);
		}

		::LCJMFNOJBAC* __cctor_b__33_0()
		{
			return ((::LCJMFNOJBAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
