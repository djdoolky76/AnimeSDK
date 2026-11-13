#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOKOIADHFCN;
namespace System { class Object; }

#define GOKOIADHFCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCF90D0)
#define GOKOIADHFCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF9110)
#define GOKOIADHFCN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCF9120)

inline static constexpr unsigned int GOKOIADHFCN___c_TypeDefinitionIndex = 35723;

	class GOKOIADHFCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKOIADHFCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN___C_CTOR_OFFSET))(this);
		}

		::GOKOIADHFCN* __cctor_b__33_0()
		{
			return ((::GOKOIADHFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOIADHFCN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
