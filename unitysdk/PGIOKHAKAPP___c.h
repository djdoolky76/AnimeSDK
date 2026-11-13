#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGIOKHAKAPP;
namespace System { class Object; }

#define PGIOKHAKAPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202512A0)
#define PGIOKHAKAPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202512E0)
#define PGIOKHAKAPP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x202512F0)

inline static constexpr unsigned int PGIOKHAKAPP___c_TypeDefinitionIndex = 31558;

	class PGIOKHAKAPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x390B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C_CTOR_OFFSET))(this);
		}

		::PGIOKHAKAPP* __cctor_b__48_0()
		{
			return ((::PGIOKHAKAPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
