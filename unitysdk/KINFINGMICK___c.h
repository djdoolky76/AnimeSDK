#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINFINGMICK;
namespace System { class Object; }

#define KINFINGMICK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E836FE0)
#define KINFINGMICK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E837020)
#define KINFINGMICK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E837030)

inline static constexpr unsigned int KINFINGMICK___c_TypeDefinitionIndex = 28765;

	class KINFINGMICK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINFINGMICK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK___C_CTOR_OFFSET))(this);
		}

		::KINFINGMICK* __cctor_b__28_0()
		{
			return ((::KINFINGMICK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
