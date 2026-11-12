#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMNMJKCHABE;
namespace System { class Object; }

#define HMNMJKCHABE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D0550)
#define HMNMJKCHABE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D0590)
#define HMNMJKCHABE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8D05A0)

inline static constexpr unsigned int HMNMJKCHABE___c_TypeDefinitionIndex = 30274;

	class HMNMJKCHABE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMNMJKCHABE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMJKCHABE___C_CTOR_OFFSET))(this);
		}

		::HMNMJKCHABE* __cctor_b__23_0()
		{
			return ((::HMNMJKCHABE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMJKCHABE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
