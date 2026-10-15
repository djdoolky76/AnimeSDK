#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFCJPEGJFL;
namespace System { class Object; }

#define BNFCJPEGJFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E032110)
#define BNFCJPEGJFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E032150)
#define BNFCJPEGJFL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E032160)

	class BNFCJPEGJFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x523A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFCJPEGJFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL___C_CTOR_OFFSET))(this);
		}

		::BNFCJPEGJFL* __cctor_b__33_0()
		{
			return ((::BNFCJPEGJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
