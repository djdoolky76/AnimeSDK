#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
namespace System { class Object; }

#define BDJLHJDPEEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB1C0)
#define BDJLHJDPEEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB1F0)
#define BDJLHJDPEEK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8EB200)

inline static constexpr unsigned int BDJLHJDPEEK___c_TypeDefinitionIndex = 33037;

	class BDJLHJDPEEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52150);
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
