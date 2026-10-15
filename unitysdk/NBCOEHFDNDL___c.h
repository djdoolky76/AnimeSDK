#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBCOEHFDNDL;
namespace System { class Object; }

#define NBCOEHFDNDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0280)
#define NBCOEHFDNDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA02C0)
#define NBCOEHFDNDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAA02D0)

inline static constexpr unsigned int NBCOEHFDNDL___c_TypeDefinitionIndex = 31891;

	class NBCOEHFDNDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBCOEHFDNDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL___C_CTOR_OFFSET))(this);
		}

		::NBCOEHFDNDL* __cctor_b__23_0()
		{
			return ((::NBCOEHFDNDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
