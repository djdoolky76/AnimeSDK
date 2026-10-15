#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKBILIPEDPP;
namespace System { class Object; }

#define OKBILIPEDPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE61CE0)
#define OKBILIPEDPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE61D20)
#define OKBILIPEDPP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE61D30)

inline static constexpr unsigned int OKBILIPEDPP___c_TypeDefinitionIndex = 28160;

	class OKBILIPEDPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKBILIPEDPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP___C_CTOR_OFFSET))(this);
		}

		::OKBILIPEDPP* __cctor_b__28_0()
		{
			return ((::OKBILIPEDPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
