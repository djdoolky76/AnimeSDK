#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCMNJNNOLLM;
namespace System { class Object; }

#define NCMNJNNOLLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1E30)
#define NCMNJNNOLLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1E70)
#define NCMNJNNOLLM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAE1E80)

	class NCMNJNNOLLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCMNJNNOLLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMNJNNOLLM___C_CTOR_OFFSET))(this);
		}

		::NCMNJNNOLLM* __cctor_b__38_0()
		{
			return ((::NCMNJNNOLLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMNJNNOLLM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
