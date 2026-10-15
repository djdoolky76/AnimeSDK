#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMGAOCOIILH;
namespace System { class Object; }

#define OMGAOCOIILH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4E90)
#define OMGAOCOIILH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4ED0)
#define OMGAOCOIILH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEB4EE0)

	class OMGAOCOIILH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGAOCOIILH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAOCOIILH___C_CTOR_OFFSET))(this);
		}

		::OMGAOCOIILH* __cctor_b__33_0()
		{
			return ((::OMGAOCOIILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAOCOIILH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
