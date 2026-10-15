#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPBJJJMJOBN;
namespace System { class Object; }

#define PPBJJJMJOBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD4580)
#define PPBJJJMJOBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD45C0)
#define PPBJJJMJOBN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFD45D0)

	class PPBJJJMJOBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBJJJMJOBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN___C_CTOR_OFFSET))(this);
		}

		::PPBJJJMJOBN* __cctor_b__28_0()
		{
			return ((::PPBJJJMJOBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
