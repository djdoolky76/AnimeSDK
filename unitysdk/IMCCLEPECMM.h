#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IMCCLEPECMM_CFAJKKDLGEH_OFFSET UNITYSDK_OFFSET(0x1381C850)
#define IMCCLEPECMM_PBEFIMFFFJH_OFFSET UNITYSDK_OFFSET(0x1381C730)
#define IMCCLEPECMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1381C710)

inline static constexpr unsigned int IMCCLEPECMM_TypeDefinitionIndex = 87245;

class IMCCLEPECMM : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_FKBOHGPOLKI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IMCCLEPECMM_TypeDefinitionIndex)->GetStaticField(0xE2F0);
	}
	static ::System::Boolean* StaticGet_NICPPBHAMLI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IMCCLEPECMM_TypeDefinitionIndex)->GetStaticField(0xE2F4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMCCLEPECMM__CCTOR_OFFSET))();
	}

	static ::System::Boolean PBEFIMFFFJH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMCCLEPECMM_PBEFIMFFFJH_OFFSET))();
	}

	static ::System::Boolean CFAJKKDLGEH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMCCLEPECMM_CFAJKKDLGEH_OFFSET))();
	}
};
