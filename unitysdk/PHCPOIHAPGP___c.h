#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCPOIHAPGP;
namespace System { class Object; }

#define PHCPOIHAPGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A390)
#define PHCPOIHAPGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A3D0)
#define PHCPOIHAPGP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF0A3E0)

inline static constexpr unsigned int PHCPOIHAPGP___c_TypeDefinitionIndex = 31752;

	class PHCPOIHAPGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHCPOIHAPGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP___C_CTOR_OFFSET))(this);
		}

		::PHCPOIHAPGP* __cctor_b__23_0()
		{
			return ((::PHCPOIHAPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
