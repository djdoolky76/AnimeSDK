#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPENENIMEFE;
namespace System { class Object; }

#define BPENENIMEFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3046F0)
#define BPENENIMEFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F304730)
#define BPENENIMEFE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F304740)

inline static constexpr unsigned int BPENENIMEFE___c_TypeDefinitionIndex = 30241;

	class BPENENIMEFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPENENIMEFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE___C_CTOR_OFFSET))(this);
		}

		::BPENENIMEFE* __cctor_b__33_0()
		{
			return ((::BPENENIMEFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPENENIMEFE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
