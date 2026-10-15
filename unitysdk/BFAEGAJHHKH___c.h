#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAEGAJHHKH;
namespace System { class Object; }

#define BFAEGAJHHKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA663B0)
#define BFAEGAJHHKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA663F0)
#define BFAEGAJHHKH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA66400)

	class BFAEGAJHHKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAEGAJHHKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH___C_CTOR_OFFSET))(this);
		}

		::BFAEGAJHHKH* __cctor_b__23_0()
		{
			return ((::BFAEGAJHHKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
