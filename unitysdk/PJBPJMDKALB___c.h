#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJBPJMDKALB;
namespace System { class Object; }

#define PJBPJMDKALB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF47B90)
#define PJBPJMDKALB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF47BD0)
#define PJBPJMDKALB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF47BE0)

inline static constexpr unsigned int PJBPJMDKALB___c_TypeDefinitionIndex = 31565;

	class PJBPJMDKALB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBPJMDKALB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB___C_CTOR_OFFSET))(this);
		}

		::PJBPJMDKALB* __cctor_b__28_0()
		{
			return ((::PJBPJMDKALB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPJMDKALB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
