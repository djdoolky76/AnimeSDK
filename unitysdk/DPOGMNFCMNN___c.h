#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOGMNFCMNN;
namespace System { class Object; }

#define DPOGMNFCMNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F26E0)
#define DPOGMNFCMNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F2720)
#define DPOGMNFCMNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F2730)

inline static constexpr unsigned int DPOGMNFCMNN___c_TypeDefinitionIndex = 26668;

	class DPOGMNFCMNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C_CTOR_OFFSET))(this);
		}

		::DPOGMNFCMNN* __cctor_b__28_0()
		{
			return ((::DPOGMNFCMNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
