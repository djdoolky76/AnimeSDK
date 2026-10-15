#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLABGDHBEDN;
namespace System { class Object; }

#define KLABGDHBEDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8807A0)
#define KLABGDHBEDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8807E0)
#define KLABGDHBEDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8807F0)

	class KLABGDHBEDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLABGDHBEDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN___C_CTOR_OFFSET))(this);
		}

		::KLABGDHBEDN* __cctor_b__28_0()
		{
			return ((::KLABGDHBEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
