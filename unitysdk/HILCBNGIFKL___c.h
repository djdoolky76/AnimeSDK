#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILCBNGIFKL;
namespace System { class Object; }

#define HILCBNGIFKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59A620)
#define HILCBNGIFKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59A650)
#define HILCBNGIFKL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E59A660)

	class HILCBNGIFKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILCBNGIFKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL___C_CTOR_OFFSET))(this);
		}

		::HILCBNGIFKL* __cctor_b__38_0()
		{
			return ((::HILCBNGIFKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
