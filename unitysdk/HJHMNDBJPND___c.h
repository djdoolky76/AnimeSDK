#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJHMNDBJPND;
namespace System { class Object; }

#define HJHMNDBJPND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A99D0)
#define HJHMNDBJPND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9A10)
#define HJHMNDBJPND___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5A9A20)

inline static constexpr unsigned int HJHMNDBJPND___c_TypeDefinitionIndex = 28375;

	class HJHMNDBJPND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJHMNDBJPND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND___C_CTOR_OFFSET))(this);
		}

		::HJHMNDBJPND* __cctor_b__38_0()
		{
			return ((::HJHMNDBJPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
