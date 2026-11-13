#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLOENPDAHE;
namespace System { class Object; }

#define BJLOENPDAHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD4480)
#define BJLOENPDAHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD44B0)
#define BJLOENPDAHE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FAD44C0)

inline static constexpr unsigned int BJLOENPDAHE___c_TypeDefinitionIndex = 34858;

	class BJLOENPDAHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJLOENPDAHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLOENPDAHE___C_CTOR_OFFSET))(this);
		}

		::BJLOENPDAHE* __cctor_b__58_0()
		{
			return ((::BJLOENPDAHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLOENPDAHE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
