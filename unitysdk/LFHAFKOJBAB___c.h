#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFHAFKOJBAB;
namespace System { class Object; }

#define LFHAFKOJBAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E910420)
#define LFHAFKOJBAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E910460)
#define LFHAFKOJBAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E910470)

inline static constexpr unsigned int LFHAFKOJBAB___c_TypeDefinitionIndex = 34864;

	class LFHAFKOJBAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFHAFKOJBAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB___C_CTOR_OFFSET))(this);
		}

		::LFHAFKOJBAB* __cctor_b__23_0()
		{
			return ((::LFHAFKOJBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
