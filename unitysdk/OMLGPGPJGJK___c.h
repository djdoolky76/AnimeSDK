#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMLGPGPJGJK;
namespace System { class Object; }

#define OMLGPGPJGJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBAD50)
#define OMLGPGPJGJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBAD90)
#define OMLGPGPJGJK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DEBADA0)

	class OMLGPGPJGJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMLGPGPJGJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLGPGPJGJK___C_CTOR_OFFSET))(this);
		}

		::OMLGPGPJGJK* __cctor_b__43_0()
		{
			return ((::OMLGPGPJGJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLGPGPJGJK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
