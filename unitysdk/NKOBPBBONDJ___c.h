#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOBPBBONDJ;
namespace System { class Object; }

#define NKOBPBBONDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E3D0)
#define NKOBPBBONDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E400)
#define NKOBPBBONDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB5E410)

	class NKOBPBBONDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C_CTOR_OFFSET))(this);
		}

		::NKOBPBBONDJ* __cctor_b__28_0()
		{
			return ((::NKOBPBBONDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
