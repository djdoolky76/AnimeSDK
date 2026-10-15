#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDJFHJFADOI;
namespace System { class Object; }

#define PDJFHJFADOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF10130)
#define PDJFHJFADOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF10170)
#define PDJFHJFADOI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF10180)

inline static constexpr unsigned int PDJFHJFADOI___c_TypeDefinitionIndex = 30381;

	class PDJFHJFADOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDJFHJFADOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJFHJFADOI___C_CTOR_OFFSET))(this);
		}

		::PDJFHJFADOI* __cctor_b__33_0()
		{
			return ((::PDJFHJFADOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJFHJFADOI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
