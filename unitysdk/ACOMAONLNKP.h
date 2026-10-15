#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EPFHDFJPECH;
class ICLHCMBJDAN;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorExcludeConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorFilterByAttributeConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorIntersectConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorPlaneConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorTakeByCountConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorUnionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACOMAONLNKP_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xB1294B0)
#define ACOMAONLNKP_AGFJGMALDEL_OFFSET UNITYSDK_OFFSET(0xB12AAC0)
#define ACOMAONLNKP_BDCGHJEOACH_OFFSET UNITYSDK_OFFSET(0xB129950)
#define ACOMAONLNKP_BNOLPMHJDJD_OFFSET UNITYSDK_OFFSET(0xB12A440)
#define ACOMAONLNKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB12B450)
#define ACOMAONLNKP_DNCABECMOPA_OFFSET UNITYSDK_OFFSET(0xB129CA0)
#define ACOMAONLNKP_ECGMNNNHHKC_OFFSET UNITYSDK_OFFSET(0xB129AC0)
#define ACOMAONLNKP_EKHCJOJDLOK_OFFSET UNITYSDK_OFFSET(0xB129EA0)
#define ACOMAONLNKP_GHAAHFEJOOJ_OFFSET UNITYSDK_OFFSET(0xB12A520)
#define ACOMAONLNKP_GKGDDHOEOEC_OFFSET UNITYSDK_OFFSET(0xB1298C0)
#define ACOMAONLNKP_GMLFKANLOCM_OFFSET UNITYSDK_OFFSET(0xB12A7E0)
#define ACOMAONLNKP_GPHKDANCKHJ_OFFSET UNITYSDK_OFFSET(0xB12A630)
#define ACOMAONLNKP_HABHIOLIPJI_OFFSET UNITYSDK_OFFSET(0xB12A8B0)
#define ACOMAONLNKP_KIDNKDMCHMA_OFFSET UNITYSDK_OFFSET(0xB12A260)
#define ACOMAONLNKP_MMEOMCINFOG_OFFSET UNITYSDK_OFFSET(0xB12B290)
#define ACOMAONLNKP_PMPDOHLFPMF_OFFSET UNITYSDK_OFFSET(0xB12A080)

inline static constexpr unsigned int ACOMAONLNKP_TypeDefinitionIndex = 79402;

	class ACOMAONLNKP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOMAONLNKP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::ICLHCMBJDAN* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GKGDDHOEOEC(::ICLHCMBJDAN* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_GKGDDHOEOEC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* BDCGHJEOACH(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_BDCGHJEOACH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ECGMNNNHHKC(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_ECGMNNNHHKC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* DNCABECMOPA(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_DNCABECMOPA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* EKHCJOJDLOK(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_EKHCJOJDLOK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* PMPDOHLFPMF(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_PMPDOHLFPMF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* KIDNKDMCHMA(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_KIDNKDMCHMA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* BNOLPMHJDJD(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_BNOLPMHJDJD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GHAAHFEJOOJ(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_GHAAHFEJOOJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GPHKDANCKHJ(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_GPHKDANCKHJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GMLFKANLOCM(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_GMLFKANLOCM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* HABHIOLIPJI(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_HABHIOLIPJI_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* AGFJGMALDEL(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig*))((::PBYTE)hIl2Cpp + ACOMAONLNKP_AGFJGMALDEL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MMEOMCINFOG(::EPFHDFJPECH* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::EPFHDFJPECH*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + ACOMAONLNKP_MMEOMCINFOG_OFFSET))(this, a1, a2);
		}

	};
