#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJHDDFIJJIC;
namespace System { class Object; }

#define GJHDDFIJJIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47ADF0)
#define GJHDDFIJJIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47AE30)
#define GJHDDFIJJIC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E47AE40)

inline static constexpr unsigned int GJHDDFIJJIC___c_TypeDefinitionIndex = 30143;

	class GJHDDFIJJIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJHDDFIJJIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC___C_CTOR_OFFSET))(this);
		}

		::GJHDDFIJJIC* __cctor_b__33_0()
		{
			return ((::GJHDDFIJJIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
