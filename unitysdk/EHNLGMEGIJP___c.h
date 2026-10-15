#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHNLGMEGIJP;
namespace System { class Object; }

#define EHNLGMEGIJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E275990)
#define EHNLGMEGIJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2759D0)
#define EHNLGMEGIJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2759E0)

inline static constexpr unsigned int EHNLGMEGIJP___c_TypeDefinitionIndex = 30812;

	class EHNLGMEGIJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHNLGMEGIJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP___C_CTOR_OFFSET))(this);
		}

		::EHNLGMEGIJP* __cctor_b__23_0()
		{
			return ((::EHNLGMEGIJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
