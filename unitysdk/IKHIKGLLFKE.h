#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/MoleMole/HollowEntityConfig_TeamRelationship.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace MoleMole::Config { class HollowCampTypeConfig_CampTypeItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKHIKGLLFKE_AJNEMAMECGE_OFFSET UNITYSDK_OFFSET(0x197D4DC0)
#define IKHIKGLLFKE_BNNFMLLCGKL_OFFSET UNITYSDK_OFFSET(0x197D5A40)
#define IKHIKGLLFKE_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x197D5270)
#define IKHIKGLLFKE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x197D4BB0)
#define IKHIKGLLFKE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x197D5C40)
#define IKHIKGLLFKE_HFOACGADHIG_OFFSET UNITYSDK_OFFSET(0x197D5410)
#define IKHIKGLLFKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D4B70)

inline static constexpr unsigned int IKHIKGLLFKE_TypeDefinitionIndex = 60340;

class IKHIKGLLFKE : public ::System::Object
{
public:
	static ::MoleMole::Config::HollowCampTypeConfig_CampTypeItem** StaticGet_PKGLDPMIKBG()
	{
		return (::MoleMole::Config::HollowCampTypeConfig_CampTypeItem**)Il2CppClass::FromTypeDefinitionIndex(IKHIKGLLFKE_TypeDefinitionIndex)->GetStaticField(0x48120);
	}
	static ::MoleMole::Config::HollowCampTypeConfig** StaticGet_EJLCNIBIHOF()
	{
		return (::MoleMole::Config::HollowCampTypeConfig**)Il2CppClass::FromTypeDefinitionIndex(IKHIKGLLFKE_TypeDefinitionIndex)->GetStaticField(0x48128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHIKGLLFKE__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::HollowEntityConfig_TeamRelationship AJNEMAMECGE(::MoleMole::HollowEntityConfig_CampType PFFPGLPMIEM, ::MoleMole::HollowEntityConfig_CampType LKCPOACOIPA)
	{
		return ((::MoleMole::HollowEntityConfig_TeamRelationship(*)(::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_CampType))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_AJNEMAMECGE_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHIKGLLFKE_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* HFOACGADHIG(::MoleMole::HollowEntityConfig_CampType OLNAFBAENGH, ::MoleMole::HollowEntityConfig_TeamRelationship EMNDHDGCAEI)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_TeamRelationship))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_HFOACGADHIG_OFFSET))(OLNAFBAENGH, EMNDHDGCAEI);
	}

	static ::MoleMole::Config::HollowCampTypeConfig* BNNFMLLCGKL()
	{
		return ((::MoleMole::Config::HollowCampTypeConfig*(*)())((::PBYTE)hIl2Cpp + IKHIKGLLFKE_BNNFMLLCGKL_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
