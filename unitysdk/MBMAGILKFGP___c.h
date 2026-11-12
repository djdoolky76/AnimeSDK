#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBMAGILKFGP;
namespace System { class Object; }

#define MBMAGILKFGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD12BD0)
#define MBMAGILKFGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD12C10)
#define MBMAGILKFGP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD12C20)

inline static constexpr unsigned int MBMAGILKFGP___c_TypeDefinitionIndex = 32781;

	class MBMAGILKFGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMAGILKFGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP___C_CTOR_OFFSET))(this);
		}

		::MBMAGILKFGP* __cctor_b__23_0()
		{
			return ((::MBMAGILKFGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
