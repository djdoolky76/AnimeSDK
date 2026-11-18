#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBJFFDGJBON;
class IKKDCFLLIOF;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IBKEFLEJHMH___C_DEAELGMHMJK_OFFSET UNITYSDK_OFFSET(0x15BF3AF0)
#define IBKEFLEJHMH___C_ENGKCADFBLP_OFFSET UNITYSDK_OFFSET(0x15BF39D0)
#define IBKEFLEJHMH___C_IPJAIOJJLGM_OFFSET UNITYSDK_OFFSET(0x15BF3AD0)
#define IBKEFLEJHMH___C_NCFENHOJMOC_OFFSET UNITYSDK_OFFSET(0x15BF3AB0)
#define IBKEFLEJHMH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF3980)
#define IBKEFLEJHMH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF39C0)

inline static constexpr unsigned int IBKEFLEJHMH___c_TypeDefinitionIndex = 85690;

class IBKEFLEJHMH___c : public ::System::Object
{
public:
	static ::System::Func_2<::IKKDCFLLIOF*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::IKKDCFLLIOF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IBKEFLEJHMH___c_TypeDefinitionIndex)->GetStaticField(0x322E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IBKEFLEJHMH___c_TypeDefinitionIndex)->GetStaticField(0x322E8);
	}
	static ::System::Func_2<::IKKDCFLLIOF*, ::MoleMole::Battle::Entity*>** StaticGet___9__8_1()
	{
		return (::System::Func_2<::IKKDCFLLIOF*, ::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(IBKEFLEJHMH___c_TypeDefinitionIndex)->GetStaticField(0x322F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C__CTOR_OFFSET))(this);
	}

	::System::Void ENGKCADFBLP(::DBJFFDGJBON* CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::DBJFFDGJBON*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C_ENGKCADFBLP_OFFSET))(this, CPKODGLINAO);
	}

	::MoleMole::Battle::Entity* NCFENHOJMOC(::IKKDCFLLIOF* CBLGCIFLMKL)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C_NCFENHOJMOC_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Boolean IPJAIOJJLGM(::IKKDCFLLIOF* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C_IPJAIOJJLGM_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Void DEAELGMHMJK(::DBJFFDGJBON* CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::DBJFFDGJBON*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH___C_DEAELGMHMJK_OFFSET))(this, CPKODGLINAO);
	}
};
