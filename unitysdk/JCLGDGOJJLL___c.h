#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCLGDGOJJLL;
namespace System { class Object; }

#define JCLGDGOJJLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E704070)
#define JCLGDGOJJLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7040B0)
#define JCLGDGOJJLL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7040C0)

	class JCLGDGOJJLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLGDGOJJLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL___C_CTOR_OFFSET))(this);
		}

		::JCLGDGOJJLL* __cctor_b__18_0()
		{
			return ((::JCLGDGOJJLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
