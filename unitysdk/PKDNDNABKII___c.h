#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKDNDNABKII;
namespace System { class Object; }

#define PKDNDNABKII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF88BA0)
#define PKDNDNABKII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88BE0)
#define PKDNDNABKII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF88BF0)

inline static constexpr unsigned int PKDNDNABKII___c_TypeDefinitionIndex = 25532;

	class PKDNDNABKII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKDNDNABKII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDNDNABKII___C_CTOR_OFFSET))(this);
		}

		::PKDNDNABKII* __cctor_b__38_0()
		{
			return ((::PKDNDNABKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDNDNABKII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
