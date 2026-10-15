#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKNGAGGAJKC;
namespace System { class Object; }

#define KKNGAGGAJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87B0D0)
#define KKNGAGGAJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87B110)
#define KKNGAGGAJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E87B120)

inline static constexpr unsigned int KKNGAGGAJKC___c_TypeDefinitionIndex = 25714;

	class KKNGAGGAJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNGAGGAJKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC___C_CTOR_OFFSET))(this);
		}

		::KKNGAGGAJKC* __cctor_b__33_0()
		{
			return ((::KKNGAGGAJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
