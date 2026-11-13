#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCHPFJEKNGM;
namespace System { class Object; }

#define OCHPFJEKNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0110)
#define OCHPFJEKNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0140)
#define OCHPFJEKNGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDB0150)

inline static constexpr unsigned int OCHPFJEKNGM___c_TypeDefinitionIndex = 34937;

	class OCHPFJEKNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCHPFJEKNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM___C_CTOR_OFFSET))(this);
		}

		::OCHPFJEKNGM* __cctor_b__28_0()
		{
			return ((::OCHPFJEKNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPFJEKNGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
