#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFGACKAFICK;
namespace System { class Object; }

#define BFGACKAFICK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CA90)
#define BFGACKAFICK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CAD0)
#define BFGACKAFICK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA6CAE0)

inline static constexpr unsigned int BFGACKAFICK___c_TypeDefinitionIndex = 33989;

	class BFGACKAFICK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x421A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGACKAFICK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK___C_CTOR_OFFSET))(this);
		}

		::BFGACKAFICK* __cctor_b__28_0()
		{
			return ((::BFGACKAFICK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
