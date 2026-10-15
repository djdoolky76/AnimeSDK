#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBAGFJEEIA;
namespace System { class Object; }

#define DEBAGFJEEIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18F170)
#define DEBAGFJEEIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18F1A0)
#define DEBAGFJEEIA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E18F1B0)

	class DEBAGFJEEIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBAGFJEEIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA___C_CTOR_OFFSET))(this);
		}

		::DEBAGFJEEIA* __cctor_b__18_0()
		{
			return ((::DEBAGFJEEIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
