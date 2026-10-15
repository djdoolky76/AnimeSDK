#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENCGCAOLBLC;
namespace System { class Object; }

#define ENCGCAOLBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9840)
#define ENCGCAOLBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9880)
#define ENCGCAOLBLC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2E9890)

inline static constexpr unsigned int ENCGCAOLBLC___c_TypeDefinitionIndex = 30583;

	class ENCGCAOLBLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCGCAOLBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC___C_CTOR_OFFSET))(this);
		}

		::ENCGCAOLBLC* __cctor_b__23_0()
		{
			return ((::ENCGCAOLBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGCAOLBLC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
