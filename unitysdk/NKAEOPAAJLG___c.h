#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKAEOPAAJLG;
namespace System { class Object; }

#define NKAEOPAAJLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB55610)
#define NKAEOPAAJLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB55650)
#define NKAEOPAAJLG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB55660)

	class NKAEOPAAJLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKAEOPAAJLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG___C_CTOR_OFFSET))(this);
		}

		::NKAEOPAAJLG* __cctor_b__28_0()
		{
			return ((::NKAEOPAAJLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
