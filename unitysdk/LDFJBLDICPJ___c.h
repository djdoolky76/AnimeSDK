#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDFJBLDICPJ;
namespace System { class Object; }

#define LDFJBLDICPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F913CD0)
#define LDFJBLDICPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F913D10)
#define LDFJBLDICPJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F913D20)

inline static constexpr unsigned int LDFJBLDICPJ___c_TypeDefinitionIndex = 33794;

	class LDFJBLDICPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFJBLDICPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ___C_CTOR_OFFSET))(this);
		}

		::LDFJBLDICPJ* __cctor_b__18_0()
		{
			return ((::LDFJBLDICPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
