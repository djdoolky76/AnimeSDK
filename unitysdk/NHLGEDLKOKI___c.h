#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHLGEDLKOKI;
namespace System { class Object; }

#define NHLGEDLKOKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF4B50)
#define NHLGEDLKOKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF4B90)
#define NHLGEDLKOKI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAF4BA0)

inline static constexpr unsigned int NHLGEDLKOKI___c_TypeDefinitionIndex = 35100;

	class NHLGEDLKOKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLGEDLKOKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI___C_CTOR_OFFSET))(this);
		}

		::NHLGEDLKOKI* __cctor_b__33_0()
		{
			return ((::NHLGEDLKOKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
