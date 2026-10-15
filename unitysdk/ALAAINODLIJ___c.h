#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAAINODLIJ;
namespace System { class Object; }

#define ALAAINODLIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D18F0)
#define ALAAINODLIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D1930)
#define ALAAINODLIJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3D1940)

	class ALAAINODLIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x374C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAAINODLIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ___C_CTOR_OFFSET))(this);
		}

		::ALAAINODLIJ* __cctor_b__18_0()
		{
			return ((::ALAAINODLIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
