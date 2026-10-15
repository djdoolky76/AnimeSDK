#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIJCNENKDP;
namespace System { class Object; }

#define CFIJCNENKDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A49D0)
#define CFIJCNENKDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4A10)
#define CFIJCNENKDP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0A4A20)

inline static constexpr unsigned int CFIJCNENKDP___c_TypeDefinitionIndex = 27346;

	class CFIJCNENKDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x131C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIJCNENKDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCNENKDP___C_CTOR_OFFSET))(this);
		}

		::CFIJCNENKDP* __cctor_b__38_0()
		{
			return ((::CFIJCNENKDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCNENKDP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
