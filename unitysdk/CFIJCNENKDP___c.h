#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIJCNENKDP;
namespace System { class Object; }

#define CFIJCNENKDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1A420)
#define CFIJCNENKDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD1A460)
#define CFIJCNENKDP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD1A470)

inline static constexpr unsigned int CFIJCNENKDP___c_TypeDefinitionIndex = 27877;

	class CFIJCNENKDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA5E0);
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
