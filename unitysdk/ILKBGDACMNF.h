#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtDefenceGlobalPropertyType.h"
class FOAKMDKBOJJ;
class MOMODPMFIKE;
class ODHMHHGKCJP;
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceValueIncreasement; }

#define ILKBGDACMNF_ACNOFMKCMEP_OFFSET UNITYSDK_OFFSET(0x164C3520)
#define ILKBGDACMNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x164C18C0)
#define ILKBGDACMNF_CMOJNBFEKGP_OFFSET UNITYSDK_OFFSET(0x164C3700)
#define ILKBGDACMNF_CTOR_OFFSET UNITYSDK_OFFSET(0x164C39F0)
#define ILKBGDACMNF_DISPATCHPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x164C1A40)
#define ILKBGDACMNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164C18E0)
#define ILKBGDACMNF_GET_DESCTABLE_OFFSET UNITYSDK_OFFSET(0x164C39C0)
#define ILKBGDACMNF_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x164C39A0)
#define ILKBGDACMNF_GET_PROPERTYTABLE_OFFSET UNITYSDK_OFFSET(0x164C39B0)
#define ILKBGDACMNF_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x164C1920)
#define ILKBGDACMNF_HEBMBCBCPIO_OFFSET UNITYSDK_OFFSET(0x164C2A90)
#define ILKBGDACMNF_IOOEJBOPOHA_OFFSET UNITYSDK_OFFSET(0x164C2550)
#define ILKBGDACMNF_JDELHIBBAMD_OFFSET UNITYSDK_OFFSET(0x164C2FF0)
#define ILKBGDACMNF_JLBCBKJAMKM_OFFSET UNITYSDK_OFFSET(0x164C3270)
#define ILKBGDACMNF_KMFNLBBPOKK_OFFSET UNITYSDK_OFFSET(0x164C27A0)
#define ILKBGDACMNF_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x164C1A90)
#define ILKBGDACMNF_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x164C1990)
#define ILKBGDACMNF_NCKCDHHMFLC_OFFSET UNITYSDK_OFFSET(0x164C3130)
#define ILKBGDACMNF_OAFFHJDODGE_OFFSET UNITYSDK_OFFSET(0x164C2D40)
#define ILKBGDACMNF_OCBCMOHKMKN_OFFSET UNITYSDK_OFFSET(0x164C3850)
#define ILKBGDACMNF_ODGAOBJNAPC_OFFSET UNITYSDK_OFFSET(0x164C2930)

inline static constexpr unsigned int ILKBGDACMNF_TypeDefinitionIndex = 54293;

	class ILKBGDACMNF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::Il2CppArray<::ODHMHHGKCJP*>* KGLOIHNOFCM; // 0x18
		::RPG::GameCore::FixPoint BKDHNJAKBOB; // 0x20
		::RPG::GameCore::FixPoint LPJNHFEOOLH; // 0x28
		static ::FOAKMDKBOJJ** StaticGet_GMBJDHEJMPJ()
		{
			return (::FOAKMDKBOJJ**)UnitySDK::FromName("", "ILKBGDACMNF")->GetStaticField(0x66410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILKBGDACMNF_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_DISPOSE_OFFSET))(this);
		}

		::MOMODPMFIKE* HAIEJENPAMD(::RPG::GameCore::RtDefenceGlobalPropertyType a1)
		{
			return ((::MOMODPMFIKE*(*)(::PVOID, ::RPG::GameCore::RtDefenceGlobalPropertyType))((::PBYTE)hIl2Cpp + ILKBGDACMNF_HAIEJENPAMD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtDefenceGlobalPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtDefenceGlobalPropertyType))((::PBYTE)hIl2Cpp + ILKBGDACMNF_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void DispatchPropertyChange(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + ILKBGDACMNF_DISPATCHPROPERTYCHANGE_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void KMFNLBBPOKK(::RPG::GameCore::RtDefenceGlobalPropertyType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDefenceGlobalPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ILKBGDACMNF_KMFNLBBPOKK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODGAOBJNAPC(::RPG::GameCore::RtDefenceGlobalPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDefenceGlobalPropertyType))((::PBYTE)hIl2Cpp + ILKBGDACMNF_ODGAOBJNAPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint IOOEJBOPOHA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::RtDefenceValueIncreasement* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::RtDefenceValueIncreasement*))((::PBYTE)hIl2Cpp + ILKBGDACMNF_IOOEJBOPOHA_OFFSET))(this, a1, a2);
		}

		::System::Void HEBMBCBCPIO(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + ILKBGDACMNF_HEBMBCBCPIO_OFFSET))(this, a1);
		}

		::System::Void OAFFHJDODGE(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + ILKBGDACMNF_OAFFHJDODGE_OFFSET))(this, a1);
		}

		::System::Boolean JDELHIBBAMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_JDELHIBBAMD_OFFSET))(this);
		}

		::System::Boolean NCKCDHHMFLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_NCKCDHHMFLC_OFFSET))(this);
		}

		::System::Int32 JLBCBKJAMKM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_JLBCBKJAMKM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ACNOFMKCMEP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_ACNOFMKCMEP_OFFSET))(this);
		}

		::System::Int32 CMOJNBFEKGP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_CMOJNBFEKGP_OFFSET))(this);
		}

		::System::Int32 OCBCMOHKMKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_OCBCMOHKMKN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_GET_OWNERENTITY_OFFSET))(this);
		}

		::Il2CppArray<::ODHMHHGKCJP*>* get_PropertyTable()
		{
			return ((::Il2CppArray<::ODHMHHGKCJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_GET_PROPERTYTABLE_OFFSET))(this);
		}

		::FOAKMDKBOJJ* get_DescTable()
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKBGDACMNF_GET_DESCTABLE_OFFSET))(this);
		}

	};
