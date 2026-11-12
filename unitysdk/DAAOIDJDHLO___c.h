#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAAOIDJDHLO;
namespace System { class Object; }

#define DAAOIDJDHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F421B50)
#define DAAOIDJDHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F421B90)
#define DAAOIDJDHLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F421BA0)

inline static constexpr unsigned int DAAOIDJDHLO___c_TypeDefinitionIndex = 27002;

	class DAAOIDJDHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAAOIDJDHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO___C_CTOR_OFFSET))(this);
		}

		::DAAOIDJDHLO* __cctor_b__28_0()
		{
			return ((::DAAOIDJDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
