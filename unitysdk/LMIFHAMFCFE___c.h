#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMIFHAMFCFE;
namespace System { class Object; }

#define LMIFHAMFCFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCCA130)
#define LMIFHAMFCFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCCA170)
#define LMIFHAMFCFE___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1FCCA180)

inline static constexpr unsigned int LMIFHAMFCFE___c_TypeDefinitionIndex = 30149;

	class LMIFHAMFCFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x402B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C_CTOR_OFFSET))(this);
		}

		::LMIFHAMFCFE* __cctor_b__56_0()
		{
			return ((::LMIFHAMFCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
