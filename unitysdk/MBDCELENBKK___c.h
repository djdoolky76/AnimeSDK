#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCCMPEIHJMN_CAICKFLHNGI;
class NPINMCKNMCE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MBDCELENBKK___C_HNOEGOCDPKI_OFFSET UNITYSDK_OFFSET(0x16C707D0)
#define MBDCELENBKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C70780)
#define MBDCELENBKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C707C0)

inline static constexpr unsigned int MBDCELENBKK___c_TypeDefinitionIndex = 73251;

class MBDCELENBKK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MBDCELENBKK___c_TypeDefinitionIndex)->GetStaticField(0x3BC20);
	}
	static ::System::Func_2<::System::Object*, ::NPINMCKNMCE*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Object*, ::NPINMCKNMCE*>**)Il2CppClass::FromTypeDefinitionIndex(MBDCELENBKK___c_TypeDefinitionIndex)->GetStaticField(0x3BC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDCELENBKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDCELENBKK___C__CTOR_OFFSET))(this);
	}

	::NPINMCKNMCE* HNOEGOCDPKI(::BCCMPEIHJMN_CAICKFLHNGI* HHEOJLBHEGI)
	{
		return ((::NPINMCKNMCE*(*)(::PVOID, ::BCCMPEIHJMN_CAICKFLHNGI*))((::PBYTE)hIl2Cpp + MBDCELENBKK___C_HNOEGOCDPKI_OFFSET))(this, HHEOJLBHEGI);
	}
};
