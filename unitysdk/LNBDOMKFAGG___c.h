#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNBDOMKFAGG;
namespace System { class Object; }

#define LNBDOMKFAGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9831F0)
#define LNBDOMKFAGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E983230)
#define LNBDOMKFAGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E983240)

inline static constexpr unsigned int LNBDOMKFAGG___c_TypeDefinitionIndex = 34492;

	class LNBDOMKFAGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNBDOMKFAGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG___C_CTOR_OFFSET))(this);
		}

		::LNBDOMKFAGG* __cctor_b__23_0()
		{
			return ((::LNBDOMKFAGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
