#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJHDDFIJJIC;
namespace System { class Object; }

#define GJHDDFIJJIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8480)
#define GJHDDFIJJIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A84C0)
#define GJHDDFIJJIC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4A84D0)

inline static constexpr unsigned int GJHDDFIJJIC___c_TypeDefinitionIndex = 30143;

	class GJHDDFIJJIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BA00);
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
