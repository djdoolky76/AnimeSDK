#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIKPHEMHIOH;
namespace System { class Object; }

#define EIKPHEMHIOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AAD50)
#define EIKPHEMHIOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AAD90)
#define EIKPHEMHIOH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E2AADA0)

	class EIKPHEMHIOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIKPHEMHIOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH___C_CTOR_OFFSET))(this);
		}

		::EIKPHEMHIOH* __cctor_b__48_0()
		{
			return ((::EIKPHEMHIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
