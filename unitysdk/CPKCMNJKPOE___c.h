#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKCMNJKPOE;
namespace System { class Object; }

#define CPKCMNJKPOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E141960)
#define CPKCMNJKPOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1419A0)
#define CPKCMNJKPOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1419B0)

inline static constexpr unsigned int CPKCMNJKPOE___c_TypeDefinitionIndex = 35106;

	class CPKCMNJKPOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKCMNJKPOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE___C_CTOR_OFFSET))(this);
		}

		::CPKCMNJKPOE* __cctor_b__28_0()
		{
			return ((::CPKCMNJKPOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
