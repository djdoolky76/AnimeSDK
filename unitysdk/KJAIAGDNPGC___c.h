#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAIAGDNPGC;
namespace System { class Object; }

#define KJAIAGDNPGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDEF550)
#define KJAIAGDNPGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEF590)
#define KJAIAGDNPGC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDEF5A0)

inline static constexpr unsigned int KJAIAGDNPGC___c_TypeDefinitionIndex = 28274;

	class KJAIAGDNPGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAIAGDNPGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC___C_CTOR_OFFSET))(this);
		}

		::KJAIAGDNPGC* __cctor_b__23_0()
		{
			return ((::KJAIAGDNPGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAIAGDNPGC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
