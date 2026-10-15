#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAENAFJCEFD;
namespace System { class Object; }

#define EAENAFJCEFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F7240)
#define EAENAFJCEFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F7280)
#define EAENAFJCEFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F7290)

inline static constexpr unsigned int EAENAFJCEFD___c_TypeDefinitionIndex = 25492;

	class EAENAFJCEFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAENAFJCEFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD___C_CTOR_OFFSET))(this);
		}

		::EAENAFJCEFD* __cctor_b__28_0()
		{
			return ((::EAENAFJCEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
