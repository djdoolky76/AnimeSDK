#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHKAOPAPJEK;
namespace System { class Object; }

#define LHKAOPAPJEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E937770)
#define LHKAOPAPJEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9377A0)
#define LHKAOPAPJEK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9377B0)

inline static constexpr unsigned int LHKAOPAPJEK___c_TypeDefinitionIndex = 33173;

	class LHKAOPAPJEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHKAOPAPJEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKAOPAPJEK___C_CTOR_OFFSET))(this);
		}

		::LHKAOPAPJEK* __cctor_b__33_0()
		{
			return ((::LHKAOPAPJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKAOPAPJEK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
