#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFKNBCEGPL;
namespace System { class Object; }

#define OKFKNBCEGPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE94C20)
#define OKFKNBCEGPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE94C60)
#define OKFKNBCEGPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE94C70)

inline static constexpr unsigned int OKFKNBCEGPL___c_TypeDefinitionIndex = 34749;

	class OKFKNBCEGPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFKNBCEGPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL___C_CTOR_OFFSET))(this);
		}

		::OKFKNBCEGPL* __cctor_b__28_0()
		{
			return ((::OKFKNBCEGPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
