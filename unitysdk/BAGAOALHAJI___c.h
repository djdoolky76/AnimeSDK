#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAGAOALHAJI;
namespace System { class Object; }

#define BAGAOALHAJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA6F640)
#define BAGAOALHAJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6F680)
#define BAGAOALHAJI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA6F690)

inline static constexpr unsigned int BAGAOALHAJI___c_TypeDefinitionIndex = 32693;

	class BAGAOALHAJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAGAOALHAJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI___C_CTOR_OFFSET))(this);
		}

		::BAGAOALHAJI* __cctor_b__23_0()
		{
			return ((::BAGAOALHAJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
