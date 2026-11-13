#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBABBOPJMLK;
namespace System { class Object; }

#define FBABBOPJMLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F754020)
#define FBABBOPJMLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F754060)
#define FBABBOPJMLK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F754070)

inline static constexpr unsigned int FBABBOPJMLK___c_TypeDefinitionIndex = 32976;

	class FBABBOPJMLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBABBOPJMLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK___C_CTOR_OFFSET))(this);
		}

		::FBABBOPJMLK* __cctor_b__33_0()
		{
			return ((::FBABBOPJMLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
