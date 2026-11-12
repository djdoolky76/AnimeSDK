#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGIHLHFPGA;
namespace System { class Object; }

#define BGGIHLHFPGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF8310)
#define BGGIHLHFPGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF8350)
#define BGGIHLHFPGA___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1EFF8360)

inline static constexpr unsigned int BGGIHLHFPGA___c_TypeDefinitionIndex = 33387;

	class BGGIHLHFPGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGIHLHFPGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIHLHFPGA___C_CTOR_OFFSET))(this);
		}

		::BGGIHLHFPGA* __cctor_b__56_0()
		{
			return ((::BGGIHLHFPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIHLHFPGA___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
