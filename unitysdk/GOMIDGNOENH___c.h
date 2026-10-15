#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMIDGNOENH;
namespace System { class Object; }

#define GOMIDGNOENH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2820)
#define GOMIDGNOENH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2860)
#define GOMIDGNOENH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4F2870)

inline static constexpr unsigned int GOMIDGNOENH___c_TypeDefinitionIndex = 31819;

	class GOMIDGNOENH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMIDGNOENH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH___C_CTOR_OFFSET))(this);
		}

		::GOMIDGNOENH* __cctor_b__23_0()
		{
			return ((::GOMIDGNOENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
