#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F98597EFAB25A0CD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F98597EFAB25A0CD_EB094CCBC0FF2E5A_BC2EEFB43CECF519_OFFSET UNITYSDK_OFFSET(0x21FB8E0)
#define F98597EFAB25A0CD_EB094CCBC0FF2E5A_EFD9EE3A9EE2A842_OFFSET UNITYSDK_OFFSET(0x21FB730)
#define F98597EFAB25A0CD_EB094CCBC0FF2E5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F98597EFAB25A0CD_EB094CCBC0FF2E5A_TypeDefinitionIndex = 8983;

class F98597EFAB25A0CD_EB094CCBC0FF2E5A : public ::System::Object
{
public:
	::F98597EFAB25A0CD* A544919C800E2923; // 0x10
	::System::Action_1<::System::Boolean>* B294FBF5AC6D3546; // 0x18
	::System::String* E3E0E7721FFE73E1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F98597EFAB25A0CD_EB094CCBC0FF2E5A__CTOR_OFFSET))(this);
	}

	::System::Void EFD9EE3A9EE2A842(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F98597EFAB25A0CD_EB094CCBC0FF2E5A_EFD9EE3A9EE2A842_OFFSET))(this, E83E519C5C42896F);
	}

	::System::Void BC2EEFB43CECF519(::System::String* EF92D7BA49D05EC0, ::System::Int64 E84073D3D0C5F54B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + F98597EFAB25A0CD_EB094CCBC0FF2E5A_BC2EEFB43CECF519_OFFSET))(this, EF92D7BA49D05EC0, E84073D3D0C5F54B);
	}
};
