#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFAIANENDEE;
namespace System { class Object; }

#define PFAIANENDEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF21730)
#define PFAIANENDEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF21770)
#define PFAIANENDEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF21780)

	class PFAIANENDEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFAIANENDEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE___C_CTOR_OFFSET))(this);
		}

		::PFAIANENDEE* __cctor_b__23_0()
		{
			return ((::PFAIANENDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
