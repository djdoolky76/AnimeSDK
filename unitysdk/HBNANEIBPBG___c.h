#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBNANEIBPBG;
namespace System { class Object; }

#define HBNANEIBPBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52E940)
#define HBNANEIBPBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E980)
#define HBNANEIBPBG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E52E990)

	class HBNANEIBPBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNANEIBPBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG___C_CTOR_OFFSET))(this);
		}

		::HBNANEIBPBG* __cctor_b__18_0()
		{
			return ((::HBNANEIBPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
