#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DLPCMDPJAOM_LAGLCOLIMKM;
class DLPCMDPJAOM_LBEPJIDCMGA;
namespace System { class Action; }

#define DLPCMDPJAOM_CBCFMFJCBLO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12BB60F0)
#define DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12BB6830)
#define DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12BB6890)
#define DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12BB6840)
#define DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BB60E0)
#define DLPCMDPJAOM_CBCFMFJCBLO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB60D0)

inline static constexpr unsigned int DLPCMDPJAOM_CBCFMFJCBLO_TypeDefinitionIndex = 89039;

class DLPCMDPJAOM_CBCFMFJCBLO : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10
	::DLPCMDPJAOM_LBEPJIDCMGA* PAILBMCAPNF; // 0x18
	::MoleMole::Config::ProjectileTraitConfig DFMKILICPFB; // 0x20
	::DLPCMDPJAOM_LBEPJIDCMGA* DJBBILMPDOB; // 0x38
	::DLPCMDPJAOM_LAGLCOLIMKM* AOKHOHCJNFJ; // 0x40
	::System::Single OOMFMKBJPKF; // 0x48
	::UnityEngine::Vector3 EBEPGJOIGNM; // 0x4C
	::UnityEngine::Vector3 KPLBHJFKEMM; // 0x58
	::UnityEngine::Vector3 KPLGFGLGLPD; // 0x64
	::UnityEngine::Vector3 JHJPLADFJBN; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x7C
	::UnityEngine::Vector3 NBABJGOGOLN; // 0x80
	::System::Single OFHEDLGEOAM; // 0x8C
	::System::Single IDBEJJEKGDI; // 0x90
	::System::Single IEBHOFKMCOP; // 0x94

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_CBCFMFJCBLO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
