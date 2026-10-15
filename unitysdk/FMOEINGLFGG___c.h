#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMOEINGLFGG;
namespace System { class Object; }

#define FMOEINGLFGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EB990)
#define FMOEINGLFGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EB9D0)
#define FMOEINGLFGG___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E3EB9E0)

inline static constexpr unsigned int FMOEINGLFGG___c_TypeDefinitionIndex = 30741;

	class FMOEINGLFGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMOEINGLFGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEINGLFGG___C_CTOR_OFFSET))(this);
		}

		::FMOEINGLFGG* __cctor_b__32_0()
		{
			return ((::FMOEINGLFGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEINGLFGG___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
