#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFLBBKGBDP;
namespace System { class Object; }

#define NNFLBBKGBDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE0570)
#define NNFLBBKGBDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE05A0)
#define NNFLBBKGBDP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FEE05B0)

inline static constexpr unsigned int NNFLBBKGBDP___c_TypeDefinitionIndex = 31588;

	class NNFLBBKGBDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x510D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFLBBKGBDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP___C_CTOR_OFFSET))(this);
		}

		::NNFLBBKGBDP* __cctor_b__18_0()
		{
			return ((::NNFLBBKGBDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
