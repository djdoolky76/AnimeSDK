#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJIFHBGMDJ;
namespace System { class Object; }

#define MNJIFHBGMDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD6F40)
#define MNJIFHBGMDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD6F80)
#define MNJIFHBGMDJ___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1FDD6F90)

inline static constexpr unsigned int MNJIFHBGMDJ___c_TypeDefinitionIndex = 30495;

	class MNJIFHBGMDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C_CTOR_OFFSET))(this);
		}

		::MNJIFHBGMDJ* __cctor_b__56_0()
		{
			return ((::MNJIFHBGMDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
