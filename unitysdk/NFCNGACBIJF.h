#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KELPHNNDEDF.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFCNGACBIJF_AJCPOHLMIDG_OFFSET UNITYSDK_OFFSET(0x12FE4AA0)
#define NFCNGACBIJF_CCEKCFOEOAF_OFFSET UNITYSDK_OFFSET(0x12FE3FF0)
#define NFCNGACBIJF_DIFJANGPEOE_OFFSET UNITYSDK_OFFSET(0x12FE4520)
#define NFCNGACBIJF_GMEOLFLAGEF_OFFSET UNITYSDK_OFFSET(0x12FE42A0)
#define NFCNGACBIJF_MLHMECJAHNK_1_OFFSET UNITYSDK_OFFSET(0x12FE47A0)
#define NFCNGACBIJF_MLHMECJAHNK_OFFSET UNITYSDK_OFFSET(0x12FE3ED0)
#define NFCNGACBIJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FE3E40)

inline static constexpr unsigned int NFCNGACBIJF_TypeDefinitionIndex = 49772;

class NFCNGACBIJF : public ::System::Object
{
public:
	static ::Il2CppArray<::KELPHNNDEDF>** StaticGet_FBFHFHJPKOE()
	{
		return (::Il2CppArray<::KELPHNNDEDF>**)Il2CppClass::FromTypeDefinitionIndex(NFCNGACBIJF_TypeDefinitionIndex)->GetStaticField(0x4FC30);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_LGPEOKHEHDG()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NFCNGACBIJF_TypeDefinitionIndex)->GetStaticField(0x4FC38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCNGACBIJF__CCTOR_OFFSET))();
	}

	static ::System::Void MLHMECJAHNK(::System::Boolean FBILHHBPEHD, ::MoleMole::Config::InputGroup IKGCPMHOFJJ, ::KELPHNNDEDF FCPCLIJNDLA, ::System::Int32 DKOFFFNEFJC, ::System::Boolean GAAIEKPDJLE)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::KELPHNNDEDF, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NFCNGACBIJF_MLHMECJAHNK_OFFSET))(FBILHHBPEHD, IKGCPMHOFJJ, FCPCLIJNDLA, DKOFFFNEFJC, GAAIEKPDJLE);
	}

	static ::System::Void MLHMECJAHNK_1(::System::Boolean FBILHHBPEHD, ::MoleMole::Config::InputGroup IKGCPMHOFJJ, ::KELPHNNDEDF FCPCLIJNDLA, ::System::Single DLBFEAOALML, ::System::Boolean GAAIEKPDJLE)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::KELPHNNDEDF, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NFCNGACBIJF_MLHMECJAHNK_1_OFFSET))(FBILHHBPEHD, IKGCPMHOFJJ, FCPCLIJNDLA, DLBFEAOALML, GAAIEKPDJLE);
	}

	static ::System::Void GMEOLFLAGEF(::System::Boolean FBILHHBPEHD, ::MoleMole::Config::InputGroup IKGCPMHOFJJ, ::KELPHNNDEDF FCPCLIJNDLA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::KELPHNNDEDF, ::System::Int32))((::PBYTE)hIl2Cpp + NFCNGACBIJF_GMEOLFLAGEF_OFFSET))(FBILHHBPEHD, IKGCPMHOFJJ, FCPCLIJNDLA, DKOFFFNEFJC);
	}

	static ::System::Void DIFJANGPEOE(::System::Boolean FBILHHBPEHD, ::MoleMole::Config::InputGroup IKGCPMHOFJJ, ::KELPHNNDEDF FCPCLIJNDLA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::KELPHNNDEDF, ::System::Int32))((::PBYTE)hIl2Cpp + NFCNGACBIJF_DIFJANGPEOE_OFFSET))(FBILHHBPEHD, IKGCPMHOFJJ, FCPCLIJNDLA, DKOFFFNEFJC);
	}

	static ::System::Void AJCPOHLMIDG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCNGACBIJF_AJCPOHLMIDG_OFFSET))();
	}

	static ::System::Void CCEKCFOEOAF(::KELPHNNDEDF FCPCLIJNDLA, ::MoleMole::Config::InputGroup IKGCPMHOFJJ)
	{
		return ((::System::Void(*)(::KELPHNNDEDF, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + NFCNGACBIJF_CCEKCFOEOAF_OFFSET))(FCPCLIJNDLA, IKGCPMHOFJJ);
	}
};
