#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEAABODKCP;
namespace System { class Object; }

#define CDEAABODKCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E084CC0)
#define CDEAABODKCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E084D00)
#define CDEAABODKCP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E084D10)

	class CDEAABODKCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEAABODKCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP___C_CTOR_OFFSET))(this);
		}

		::CDEAABODKCP* __cctor_b__53_0()
		{
			return ((::CDEAABODKCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
