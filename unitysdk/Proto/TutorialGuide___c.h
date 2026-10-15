#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class TutorialGuide; }
namespace System { class Object; }

#define PROTO_TUTORIALGUIDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC810)
#define PROTO_TUTORIALGUIDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC840)
#define PROTO_TUTORIALGUIDE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFEC850)

namespace Proto
{
	inline static constexpr unsigned int TutorialGuide___c_TypeDefinitionIndex = 35039;

	class TutorialGuide___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4F0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C_CTOR_OFFSET))(this);
		}

		::Proto::TutorialGuide* __cctor_b__33_0()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
