#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBGHIJGFAFD;
namespace System { class Object; }

#define LBGHIJGFAFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD410)
#define LBGHIJGFAFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD440)
#define LBGHIJGFAFD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8DD450)

	class LBGHIJGFAFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C_CTOR_OFFSET))(this);
		}

		::LBGHIJGFAFD* __cctor_b__33_0()
		{
			return ((::LBGHIJGFAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
