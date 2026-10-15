#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKLBGNIABDE;
namespace System { class Object; }

#define IKLBGNIABDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6761A0)
#define IKLBGNIABDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6761E0)
#define IKLBGNIABDE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6761F0)

inline static constexpr unsigned int IKLBGNIABDE___c_TypeDefinitionIndex = 30227;

	class IKLBGNIABDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x507C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKLBGNIABDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE___C_CTOR_OFFSET))(this);
		}

		::IKLBGNIABDE* __cctor_b__23_0()
		{
			return ((::IKLBGNIABDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
