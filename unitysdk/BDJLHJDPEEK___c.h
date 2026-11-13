#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
namespace System { class Object; }

#define BDJLHJDPEEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA8D030)
#define BDJLHJDPEEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA8D060)
#define BDJLHJDPEEK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FA8D070)

inline static constexpr unsigned int BDJLHJDPEEK___c_TypeDefinitionIndex = 33952;

	class BDJLHJDPEEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJLHJDPEEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK___C_CTOR_OFFSET))(this);
		}

		::BDJLHJDPEEK* __cctor_b__38_0()
		{
			return ((::BDJLHJDPEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
