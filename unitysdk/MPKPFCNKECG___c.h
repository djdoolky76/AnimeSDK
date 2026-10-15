#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPKPFCNKECG;
namespace System { class Object; }

#define MPKPFCNKECG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABAC60)
#define MPKPFCNKECG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABACA0)
#define MPKPFCNKECG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EABACB0)

inline static constexpr unsigned int MPKPFCNKECG___c_TypeDefinitionIndex = 28565;

	class MPKPFCNKECG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKPFCNKECG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG___C_CTOR_OFFSET))(this);
		}

		::MPKPFCNKECG* __cctor_b__43_0()
		{
			return ((::MPKPFCNKECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
