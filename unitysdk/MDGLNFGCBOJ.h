#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"

class DNGEKLMPBAC;
class FBAMLABJMKF;
class KLFOBDFJFJE;
class NGPAGDNPMKJ;
class OBKNEEOLOPB;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define MDGLNFGCBOJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x158D0AC0)
#define MDGLNFGCBOJ_CEJDCNPJOJP_OFFSET UNITYSDK_OFFSET(0x15926CD0)
#define MDGLNFGCBOJ_DFJKCFGGFHN_OFFSET UNITYSDK_OFFSET(0x15926C20)
#define MDGLNFGCBOJ_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15926DC0)
#define MDGLNFGCBOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15926BD0)
#define MDGLNFGCBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0EE0)

inline static constexpr unsigned int MDGLNFGCBOJ_TypeDefinitionIndex = 42950;

class MDGLNFGCBOJ : public ::LLKOFEPPBNJ
{
public:
	static ::System::String** StaticGet_IIBAKMJJIAD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MDGLNFGCBOJ_TypeDefinitionIndex)->GetStaticField(0x329F0);
	}
	static ::System::String** StaticGet_AGMGHOPEHHE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MDGLNFGCBOJ_TypeDefinitionIndex)->GetStaticField(0x329F8);
	}
	::OBKNEEOLOPB* KHLGIJDBNAC; // 0x28
	::KLFOBDFJFJE* LDOOMLCIJOM; // 0x30
	::MoleMole::UIHollowChessboard3DModelController* GJHDIMHAGNI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGLNFGCBOJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGLNFGCBOJ__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + MDGLNFGCBOJ_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::FBAMLABJMKF* DFJKCFGGFHN()
	{
		return ((::FBAMLABJMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGLNFGCBOJ_DFJKCFGGFHN_OFFSET))(this);
	}

	::FBAMLABJMKF* CEJDCNPJOJP(::MoleMole::Config::ConfigSetSection_Order OCALHHLFBAF)
	{
		return ((::FBAMLABJMKF*(*)(::PVOID, ::MoleMole::Config::ConfigSetSection_Order))((::PBYTE)hIl2Cpp + MDGLNFGCBOJ_CEJDCNPJOJP_OFFSET))(this, OCALHHLFBAF);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + MDGLNFGCBOJ_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
