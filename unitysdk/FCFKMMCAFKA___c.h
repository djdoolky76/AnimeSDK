#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCFKMMCAFKA;
namespace System { class Object; }

#define FCFKMMCAFKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3184D0)
#define FCFKMMCAFKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E318500)
#define FCFKMMCAFKA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E318510)

inline static constexpr unsigned int FCFKMMCAFKA___c_TypeDefinitionIndex = 31461;

	class FCFKMMCAFKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFKMMCAFKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA___C_CTOR_OFFSET))(this);
		}

		::FCFKMMCAFKA* __cctor_b__33_0()
		{
			return ((::FCFKMMCAFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
