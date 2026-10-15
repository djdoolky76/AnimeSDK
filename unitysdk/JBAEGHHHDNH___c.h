#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBAEGHHHDNH;
namespace System { class Object; }

#define JBAEGHHHDNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F1C20)
#define JBAEGHHHDNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F1C60)
#define JBAEGHHHDNH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6F1C70)

	class JBAEGHHHDNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C_CTOR_OFFSET))(this);
		}

		::JBAEGHHHDNH* __cctor_b__18_0()
		{
			return ((::JBAEGHHHDNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
