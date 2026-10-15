#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLFLONHKCF;
namespace System { class Object; }

#define BGLFLONHKCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C690)
#define BGLFLONHKCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C6C0)
#define BGLFLONHKCF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA7C6D0)

inline static constexpr unsigned int BGLFLONHKCF___c_TypeDefinitionIndex = 30506;

	class BGLFLONHKCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x430F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLFLONHKCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF___C_CTOR_OFFSET))(this);
		}

		::BGLFLONHKCF* __cctor_b__33_0()
		{
			return ((::BGLFLONHKCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
