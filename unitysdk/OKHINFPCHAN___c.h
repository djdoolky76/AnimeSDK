#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKHINFPCHAN;
namespace System { class Object; }

#define OKHINFPCHAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6D510)
#define OKHINFPCHAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6D540)
#define OKHINFPCHAN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE6D550)

inline static constexpr unsigned int OKHINFPCHAN___c_TypeDefinitionIndex = 29016;

	class OKHINFPCHAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHINFPCHAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN___C_CTOR_OFFSET))(this);
		}

		::OKHINFPCHAN* __cctor_b__23_0()
		{
			return ((::OKHINFPCHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
