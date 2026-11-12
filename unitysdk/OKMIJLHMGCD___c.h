#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKMIJLHMGCD;
namespace System { class Object; }

#define OKMIJLHMGCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F149100)
#define OKMIJLHMGCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F149140)
#define OKMIJLHMGCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F149150)

inline static constexpr unsigned int OKMIJLHMGCD___c_TypeDefinitionIndex = 27913;

	class OKMIJLHMGCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMIJLHMGCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD___C_CTOR_OFFSET))(this);
		}

		::OKMIJLHMGCD* __cctor_b__28_0()
		{
			return ((::OKMIJLHMGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
