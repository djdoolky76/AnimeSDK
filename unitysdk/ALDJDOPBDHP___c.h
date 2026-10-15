#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDJDOPBDHP;
namespace System { class Object; }

#define ALDJDOPBDHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D65D0)
#define ALDJDOPBDHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D6610)
#define ALDJDOPBDHP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3D6620)

	class ALDJDOPBDHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDJDOPBDHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP___C_CTOR_OFFSET))(this);
		}

		::ALDJDOPBDHP* __cctor_b__23_0()
		{
			return ((::ALDJDOPBDHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
