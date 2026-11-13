#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJNOEFFJDJK;
namespace System { class Object; }

#define GJNOEFFJDJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE1480)
#define GJNOEFFJDJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE14C0)
#define GJNOEFFJDJK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBE14D0)

inline static constexpr unsigned int GJNOEFFJDJK___c_TypeDefinitionIndex = 26590;

	class GJNOEFFJDJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJNOEFFJDJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK___C_CTOR_OFFSET))(this);
		}

		::GJNOEFFJDJK* __cctor_b__33_0()
		{
			return ((::GJNOEFFJDJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
