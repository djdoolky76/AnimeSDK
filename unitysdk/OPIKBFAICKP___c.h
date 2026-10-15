#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPIKBFAICKP;
namespace System { class Object; }

#define OPIKBFAICKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3D20)
#define OPIKBFAICKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3D60)
#define OPIKBFAICKP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEE3D70)

inline static constexpr unsigned int OPIKBFAICKP___c_TypeDefinitionIndex = 28661;

	class OPIKBFAICKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x303A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIKBFAICKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP___C_CTOR_OFFSET))(this);
		}

		::OPIKBFAICKP* __cctor_b__28_0()
		{
			return ((::OPIKBFAICKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
