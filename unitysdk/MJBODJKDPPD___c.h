#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJBODJKDPPD;
namespace System { class Object; }

#define MJBODJKDPPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA457B0)
#define MJBODJKDPPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA457E0)
#define MJBODJKDPPD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA457F0)

	class MJBODJKDPPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBODJKDPPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD___C_CTOR_OFFSET))(this);
		}

		::MJBODJKDPPD* __cctor_b__23_0()
		{
			return ((::MJBODJKDPPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
