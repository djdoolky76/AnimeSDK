#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEJCHEKGCJ;
namespace System { class Object; }

#define PEEJCHEKGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E2750)
#define PEEJCHEKGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E2790)
#define PEEJCHEKGCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1E27A0)

inline static constexpr unsigned int PEEJCHEKGCJ___c_TypeDefinitionIndex = 27622;

	class PEEJCHEKGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEJCHEKGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEJCHEKGCJ___C_CTOR_OFFSET))(this);
		}

		::PEEJCHEKGCJ* __cctor_b__23_0()
		{
			return ((::PEEJCHEKGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEJCHEKGCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
