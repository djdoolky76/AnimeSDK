#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAJGFEJKOIC;
namespace System { class Object; }

#define KAJGFEJKOIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B89D0)
#define KAJGFEJKOIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B8A10)
#define KAJGFEJKOIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7B8A20)

inline static constexpr unsigned int KAJGFEJKOIC___c_TypeDefinitionIndex = 28112;

	class KAJGFEJKOIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAJGFEJKOIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC___C_CTOR_OFFSET))(this);
		}

		::KAJGFEJKOIC* __cctor_b__28_0()
		{
			return ((::KAJGFEJKOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
