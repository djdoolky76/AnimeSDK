#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHDKGCPHDNC;
namespace System { class Object; }

#define JHDKGCPHDNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E715D90)
#define JHDKGCPHDNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E715DD0)
#define JHDKGCPHDNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E715DE0)

inline static constexpr unsigned int JHDKGCPHDNC___c_TypeDefinitionIndex = 33841;

	class JHDKGCPHDNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHDKGCPHDNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC___C_CTOR_OFFSET))(this);
		}

		::JHDKGCPHDNC* __cctor_b__28_0()
		{
			return ((::JHDKGCPHDNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
