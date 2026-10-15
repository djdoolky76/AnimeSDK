#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLECENLPBJL;
namespace System { class Object; }

#define KLECENLPBJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85B480)
#define KLECENLPBJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85B4C0)
#define KLECENLPBJL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E85B4D0)

inline static constexpr unsigned int KLECENLPBJL___c_TypeDefinitionIndex = 26940;

	class KLECENLPBJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLECENLPBJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL___C_CTOR_OFFSET))(this);
		}

		::KLECENLPBJL* __cctor_b__33_0()
		{
			return ((::KLECENLPBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
