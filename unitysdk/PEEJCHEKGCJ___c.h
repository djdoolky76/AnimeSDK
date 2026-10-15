#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEJCHEKGCJ;
namespace System { class Object; }

#define PEEJCHEKGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE9700)
#define PEEJCHEKGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE9740)
#define PEEJCHEKGCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEE9750)

inline static constexpr unsigned int PEEJCHEKGCJ___c_TypeDefinitionIndex = 27091;

	class PEEJCHEKGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30AA0);
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
