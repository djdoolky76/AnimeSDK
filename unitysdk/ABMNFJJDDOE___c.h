#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABMNFJJDDOE;
namespace System { class Object; }

#define ABMNFJJDDOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA1CF0)
#define ABMNFJJDDOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA1D30)
#define ABMNFJJDDOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDA1D40)

inline static constexpr unsigned int ABMNFJJDDOE___c_TypeDefinitionIndex = 25703;

	class ABMNFJJDDOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABMNFJJDDOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE___C_CTOR_OFFSET))(this);
		}

		::ABMNFJJDDOE* __cctor_b__28_0()
		{
			return ((::ABMNFJJDDOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
