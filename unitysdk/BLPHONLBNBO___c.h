#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPHONLBNBO;
namespace System { class Object; }

#define BLPHONLBNBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0260)
#define BLPHONLBNBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0290)
#define BLPHONLBNBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2C02A0)

inline static constexpr unsigned int BLPHONLBNBO___c_TypeDefinitionIndex = 33230;

	class BLPHONLBNBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x505C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPHONLBNBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO___C_CTOR_OFFSET))(this);
		}

		::BLPHONLBNBO* __cctor_b__28_0()
		{
			return ((::BLPHONLBNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
