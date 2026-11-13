#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPAOIPLDKHB;
namespace System { class Object; }

#define JPAOIPLDKHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D8240)
#define JPAOIPLDKHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D8280)
#define JPAOIPLDKHB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F8D8290)

inline static constexpr unsigned int JPAOIPLDKHB___c_TypeDefinitionIndex = 26378;

	class JPAOIPLDKHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x689C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPAOIPLDKHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAOIPLDKHB___C_CTOR_OFFSET))(this);
		}

		::JPAOIPLDKHB* __cctor_b__48_0()
		{
			return ((::JPAOIPLDKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAOIPLDKHB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
