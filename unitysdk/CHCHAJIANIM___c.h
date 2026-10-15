#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCHAJIANIM;
namespace System { class Object; }

#define CHCHAJIANIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1EE0)
#define CHCHAJIANIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1F20)
#define CHCHAJIANIM___C___CCTOR_B__89_0_OFFSET UNITYSDK_OFFSET(0x1E0C1F30)

	class CHCHAJIANIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCHAJIANIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCHAJIANIM___C_CTOR_OFFSET))(this);
		}

		::CHCHAJIANIM* __cctor_b__89_0()
		{
			return ((::CHCHAJIANIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCHAJIANIM___C___CCTOR_B__89_0_OFFSET))(this);
		}

	};
