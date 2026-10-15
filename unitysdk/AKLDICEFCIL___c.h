#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLDICEFCIL;
namespace System { class Object; }

#define AKLDICEFCIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CECC0)
#define AKLDICEFCIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CED00)
#define AKLDICEFCIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3CED10)

	class AKLDICEFCIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLDICEFCIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL___C_CTOR_OFFSET))(this);
		}

		::AKLDICEFCIL* __cctor_b__28_0()
		{
			return ((::AKLDICEFCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
