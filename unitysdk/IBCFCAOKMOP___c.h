#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCFCAOKMOP;
namespace System { class Object; }

#define IBCFCAOKMOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3210)
#define IBCFCAOKMOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3250)
#define IBCFCAOKMOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5E3260)

inline static constexpr unsigned int IBCFCAOKMOP___c_TypeDefinitionIndex = 28854;

	class IBCFCAOKMOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCFCAOKMOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP___C_CTOR_OFFSET))(this);
		}

		::IBCFCAOKMOP* __cctor_b__23_0()
		{
			return ((::IBCFCAOKMOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
