#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCCMPEIHJMN_CAICKFLHNGI;
class NPINMCKNMCE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define OIDGMHOJHJH___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x18445CC0)
#define OIDGMHOJHJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18445C70)
#define OIDGMHOJHJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18445CB0)

inline static constexpr unsigned int OIDGMHOJHJH___c_TypeDefinitionIndex = 80803;

class OIDGMHOJHJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OIDGMHOJHJH___c_TypeDefinitionIndex)->GetStaticField(0x45840);
	}
	static ::System::Func_2<::System::Object*, ::NPINMCKNMCE*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Object*, ::NPINMCKNMCE*>**)Il2CppClass::FromTypeDefinitionIndex(OIDGMHOJHJH___c_TypeDefinitionIndex)->GetStaticField(0x45848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDGMHOJHJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDGMHOJHJH___C__CTOR_OFFSET))(this);
	}

	::NPINMCKNMCE* HLOOGMIAIDG(::BCCMPEIHJMN_CAICKFLHNGI* HHEOJLBHEGI)
	{
		return ((::NPINMCKNMCE*(*)(::PVOID, ::BCCMPEIHJMN_CAICKFLHNGI*))((::PBYTE)hIl2Cpp + OIDGMHOJHJH___C_HLOOGMIAIDG_OFFSET))(this, HHEOJLBHEGI);
	}
};
