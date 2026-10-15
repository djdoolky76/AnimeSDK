#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICAJBEJAHC;
namespace System { class Object; }

#define NICAJBEJAHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF86A0)
#define NICAJBEJAHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF86E0)
#define NICAJBEJAHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAF86F0)

inline static constexpr unsigned int NICAJBEJAHC___c_TypeDefinitionIndex = 33560;

	class NICAJBEJAHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICAJBEJAHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC___C_CTOR_OFFSET))(this);
		}

		::NICAJBEJAHC* __cctor_b__23_0()
		{
			return ((::NICAJBEJAHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
