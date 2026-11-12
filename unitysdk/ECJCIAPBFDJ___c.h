#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECJCIAPBFDJ;
namespace System { class Object; }

#define ECJCIAPBFDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F550780)
#define ECJCIAPBFDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5507C0)
#define ECJCIAPBFDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5507D0)

inline static constexpr unsigned int ECJCIAPBFDJ___c_TypeDefinitionIndex = 32740;

	class ECJCIAPBFDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECJCIAPBFDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ___C_CTOR_OFFSET))(this);
		}

		::ECJCIAPBFDJ* __cctor_b__23_0()
		{
			return ((::ECJCIAPBFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
