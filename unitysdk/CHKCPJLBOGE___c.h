#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKCPJLBOGE;
namespace System { class Object; }

#define CHKCPJLBOGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9CB0)
#define CHKCPJLBOGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9CF0)
#define CHKCPJLBOGE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0C9D00)

	class CHKCPJLBOGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKCPJLBOGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE___C_CTOR_OFFSET))(this);
		}

		::CHKCPJLBOGE* __cctor_b__33_0()
		{
			return ((::CHKCPJLBOGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
