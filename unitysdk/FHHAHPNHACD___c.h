#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHAHPNHACD;
namespace System { class Object; }

#define FHHAHPNHACD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38B9D0)
#define FHHAHPNHACD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38BA10)
#define FHHAHPNHACD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E38BA20)

inline static constexpr unsigned int FHHAHPNHACD___c_TypeDefinitionIndex = 32564;

	class FHHAHPNHACD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHAHPNHACD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD___C_CTOR_OFFSET))(this);
		}

		::FHHAHPNHACD* __cctor_b__28_0()
		{
			return ((::FHHAHPNHACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
