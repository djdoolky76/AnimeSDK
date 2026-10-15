#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCIGOCFOGHK;
namespace System { class Object; }

#define FCIGOCFOGHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E349560)
#define FCIGOCFOGHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3495A0)
#define FCIGOCFOGHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3495B0)

	class FCIGOCFOGHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIGOCFOGHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK___C_CTOR_OFFSET))(this);
		}

		::FCIGOCFOGHK* __cctor_b__28_0()
		{
			return ((::FCIGOCFOGHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
