#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPIOLJJKC;
namespace System { class Object; }

#define LNOPIOLJJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200CD1D0)
#define LNOPIOLJJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200CD210)
#define LNOPIOLJJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x200CD220)

inline static constexpr unsigned int LNOPIOLJJKC___c_TypeDefinitionIndex = 32958;

	class LNOPIOLJJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C_CTOR_OFFSET))(this);
		}

		::LNOPIOLJJKC* __cctor_b__33_0()
		{
			return ((::LNOPIOLJJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
