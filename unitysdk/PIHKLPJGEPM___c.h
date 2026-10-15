#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHKLPJGEPM;
namespace System { class Object; }

#define PIHKLPJGEPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF47110)
#define PIHKLPJGEPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF47150)
#define PIHKLPJGEPM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF47160)

inline static constexpr unsigned int PIHKLPJGEPM___c_TypeDefinitionIndex = 29363;

	class PIHKLPJGEPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHKLPJGEPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM___C_CTOR_OFFSET))(this);
		}

		::PIHKLPJGEPM* __cctor_b__33_0()
		{
			return ((::PIHKLPJGEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHKLPJGEPM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
