#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHECCCANFGP;
namespace System { class Object; }

#define JHECCCANFGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204AD4A0)
#define JHECCCANFGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204AD4D0)
#define JHECCCANFGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x204AD4E0)

inline static constexpr unsigned int JHECCCANFGP___c_TypeDefinitionIndex = 34582;

	class JHECCCANFGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x606D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHECCCANFGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP___C_CTOR_OFFSET))(this);
		}

		::JHECCCANFGP* __cctor_b__33_0()
		{
			return ((::JHECCCANFGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
