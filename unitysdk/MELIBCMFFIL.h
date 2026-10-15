#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/LNNEBLLJHPC.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCGKEELAOEA;
class BLIBHFKMKML;
class EOANFGCEPDB;
class INLLBOLDLNC;
class KHDJLEELKHD;
class LFNJCGNABKA;
class NMAKBNJNLIB;
class PMILDELPGPB;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MELIBCMFFIL_APPEMHNNDND_OFFSET UNITYSDK_OFFSET(0xB8DE570)
#define MELIBCMFFIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8DE200)
#define MELIBCMFFIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DE9F0)
#define MELIBCMFFIL_DOCJAFEAKIM_OFFSET UNITYSDK_OFFSET(0xB8DE4B0)
#define MELIBCMFFIL_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE1E0)
#define MELIBCMFFIL_GET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB8DE1C0)
#define MELIBCMFFIL_GET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE180)
#define MELIBCMFFIL_GET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE1A0)
#define MELIBCMFFIL_LKCNCDMLHFE_OFFSET UNITYSDK_OFFSET(0xB8DE7E0)
#define MELIBCMFFIL_MNIDAIDOAGA_OFFSET UNITYSDK_OFFSET(0xB8DE600)
#define MELIBCMFFIL_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE1F0)
#define MELIBCMFFIL_SET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB8DE1D0)
#define MELIBCMFFIL_SET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE190)
#define MELIBCMFFIL_SET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0xB8DE1B0)

inline static constexpr unsigned int MELIBCMFFIL_TypeDefinitionIndex = 62621;

	class MELIBCMFFIL : public ::System::Object
	{
	public:
		::PMILDELPGPB* _PropertyCalculator_k__BackingField; // 0x10
		::INLLBOLDLNC* _ServantSkillRepository_k__BackingField; // 0x18
		::EOANFGCEPDB* _ServantRepository_k__BackingField; // 0x20
		::BLIBHFKMKML* _MultiplePathConfigRepository_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELIBCMFFIL_CTOR_OFFSET))(this);
		}

		::EOANFGCEPDB* get_ServantRepository()
		{
			return ((::EOANFGCEPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELIBCMFFIL_GET_SERVANTREPOSITORY_OFFSET))(this);
		}

		::System::Void set_ServantRepository(::EOANFGCEPDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOANFGCEPDB*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_SET_SERVANTREPOSITORY_OFFSET))(this, a1);
		}

		::INLLBOLDLNC* get_ServantSkillRepository()
		{
			return ((::INLLBOLDLNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELIBCMFFIL_GET_SERVANTSKILLREPOSITORY_OFFSET))(this);
		}

		::System::Void set_ServantSkillRepository(::INLLBOLDLNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INLLBOLDLNC*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_SET_SERVANTSKILLREPOSITORY_OFFSET))(this, a1);
		}

		::PMILDELPGPB* get_PropertyCalculator()
		{
			return ((::PMILDELPGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELIBCMFFIL_GET_PROPERTYCALCULATOR_OFFSET))(this);
		}

		::System::Void set_PropertyCalculator(::PMILDELPGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMILDELPGPB*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_SET_PROPERTYCALCULATOR_OFFSET))(this, a1);
		}

		::BLIBHFKMKML* get_MultiplePathConfigRepository()
		{
			return ((::BLIBHFKMKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELIBCMFFIL_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this);
		}

		::System::Void set_MultiplePathConfigRepository(::BLIBHFKMKML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLIBHFKMKML*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this, a1);
		}

		::NMAKBNJNLIB* BPLPBPMEODA(::APCGKBOPGJL a1, ::BCGKEELAOEA* a2, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a3, ::LFNJCGNABKA* a4, ::Il2CppArray<::BCGKEELAOEA*>* a5)
		{
			return ((::NMAKBNJNLIB*(*)(::PVOID, ::APCGKBOPGJL, ::BCGKEELAOEA*, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*, ::LFNJCGNABKA*, ::Il2CppArray<::BCGKEELAOEA*>*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean DOCJAFEAKIM(::APCGKBOPGJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + MELIBCMFFIL_DOCJAFEAKIM_OFFSET))(this, a1);
		}

		::LNNEBLLJHPC APPEMHNNDND(::System::Boolean a1, ::APCGKBOPGJL a2)
		{
			return ((::LNNEBLLJHPC(*)(::PVOID, ::System::Boolean, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + MELIBCMFFIL_APPEMHNNDND_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHDJLEELKHD*>* MNIDAIDOAGA(::RPG::AvatarSystem::AvatarServant* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHDJLEELKHD*>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_MNIDAIDOAGA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* LKCNCDMLHFE(::RPG::AvatarSystem::AvatarServant* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + MELIBCMFFIL_LKCNCDMLHFE_OFFSET))(this, a1);
		}

	};
