#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBBHDPCPHNN;
namespace System { class Object; }

#define NBBHDPCPHNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACC8E0)
#define NBBHDPCPHNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACC920)
#define NBBHDPCPHNN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EACC930)

inline static constexpr unsigned int NBBHDPCPHNN___c_TypeDefinitionIndex = 28280;

	class NBBHDPCPHNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBHDPCPHNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBHDPCPHNN___C_CTOR_OFFSET))(this);
		}

		::NBBHDPCPHNN* __cctor_b__48_0()
		{
			return ((::NBBHDPCPHNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBHDPCPHNN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
