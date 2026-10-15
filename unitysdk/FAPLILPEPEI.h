#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionPhase.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionType.h"
#include "unitysdk/System/Object.h"
class BCFMDCAMPDN;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }
namespace RPG::GameCore { class LevelGroupAtmosphereMainMissionCompleteCondition; }
namespace RPG::GameCore { class LevelGroupAtmosphereSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupMissionSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupSavedValueConditionSet; }
namespace RPG::GameCore { class LevelGroupSubMissionCompleteCondition; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAPLILPEPEI_AJGMIMMGJML_OFFSET UNITYSDK_OFFSET(0x15681410)
#define FAPLILPEPEI_BDELEPPBDNI_OFFSET UNITYSDK_OFFSET(0x15680700)
#define FAPLILPEPEI_BDGOEHDFMOM_OFFSET UNITYSDK_OFFSET(0x15681160)
#define FAPLILPEPEI_BGMDHJCJOPK_OFFSET UNITYSDK_OFFSET(0x15681630)
#define FAPLILPEPEI_BHMIIEHPFFN_OFFSET UNITYSDK_OFFSET(0x15681210)
#define FAPLILPEPEI_CCECHMHIIGI_OFFSET UNITYSDK_OFFSET(0x15680DA0)
#define FAPLILPEPEI_CNGHHCNEKAE_OFFSET UNITYSDK_OFFSET(0x15680140)
#define FAPLILPEPEI_DCIBDDIOCBG_OFFSET UNITYSDK_OFFSET(0x15680F60)
#define FAPLILPEPEI_ECOIBJGJFEJ_OFFSET UNITYSDK_OFFSET(0x15681DA0)
#define FAPLILPEPEI_GBGGKIDNMPP_OFFSET UNITYSDK_OFFSET(0x15682160)
#define FAPLILPEPEI_GLCIEGEEAJB_OFFSET UNITYSDK_OFFSET(0x15680B50)
#define FAPLILPEPEI_GLMKDIMMMDF_1_OFFSET UNITYSDK_OFFSET(0x15681A30)
#define FAPLILPEPEI_GLMKDIMMMDF_OFFSET UNITYSDK_OFFSET(0x15681BF0)
#define FAPLILPEPEI_JBPCANOBCGA_OFFSET UNITYSDK_OFFSET(0x15681E60)
#define FAPLILPEPEI_JNFNLIEEKEL_OFFSET UNITYSDK_OFFSET(0x15680820)
#define FAPLILPEPEI_LBECMJCNNBL_OFFSET UNITYSDK_OFFSET(0x15681470)
#define FAPLILPEPEI_LPBKFHFNNPK_OFFSET UNITYSDK_OFFSET(0x15680BE0)
#define FAPLILPEPEI_NDGGKDFMIGD_OFFSET UNITYSDK_OFFSET(0x156814D0)
#define FAPLILPEPEI_NGGMOANIJKJ_OFFSET UNITYSDK_OFFSET(0x156820B0)
#define FAPLILPEPEI_NKKNHOICCNO_OFFSET UNITYSDK_OFFSET(0x15682210)
#define FAPLILPEPEI_OENNECFFKBD_OFFSET UNITYSDK_OFFSET(0x156809A0)
#define FAPLILPEPEI_PEIIPAFPMGD_OFFSET UNITYSDK_OFFSET(0x15681FF0)
#define FAPLILPEPEI_POLJFCCEIPB_OFFSET UNITYSDK_OFFSET(0x156817F0)

inline static constexpr unsigned int FAPLILPEPEI_TypeDefinitionIndex = 62205;

	class FAPLILPEPEI : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise* CNGHHCNEKAE(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionType a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + FAPLILPEPEI_CNGHHCNEKAE_OFFSET))(a1, a2);
		}

		static ::System::Boolean OENNECFFKBD(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionConditionSet* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionConditionSet*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_OENNECFFKBD_OFFSET))(a1, a2);
		}

		static ::System::Boolean GLCIEGEEAJB(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_GLCIEGEEAJB_OFFSET))(a1, a2);
		}

		static ::System::Boolean DCIBDDIOCBG(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueConditionSet* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueConditionSet*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_DCIBDDIOCBG_OFFSET))(a1, a2);
		}

		static ::System::Boolean BDGOEHDFMOM(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_BDGOEHDFMOM_OFFSET))(a1, a2);
		}

		static ::System::Boolean BHMIIEHPFFN(::RPG::GameCore::LevelGroupMissionSavedValueCondition* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_BHMIIEHPFFN_OFFSET))(a1);
		}

		static ::System::Boolean AJGMIMMGJML(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_AJGMIMMGJML_OFFSET))(a1, a2);
		}

		static ::System::Boolean LBECMJCNNBL(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_LBECMJCNNBL_OFFSET))(a1, a2);
		}

		static ::System::Boolean NDGGKDFMIGD(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_NDGGKDFMIGD_OFFSET))(a1, a2);
		}

		static ::System::Boolean BGMDHJCJOPK(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_BGMDHJCJOPK_OFFSET))(a1, a2);
		}

		static ::System::Boolean POLJFCCEIPB(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_POLJFCCEIPB_OFFSET))(a1, a2);
		}

		static ::System::Boolean LPBKFHFNNPK(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_LPBKFHFNNPK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CCECHMHIIGI(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_CCECHMHIIGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GLMKDIMMMDF(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::System::Predicate_1<::System::Object*>* a3, ::System::Predicate_1<::System::Object*>* a4, ::System::Predicate_1<::System::UInt32>* a5)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_GLMKDIMMMDF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GLMKDIMMMDF_1(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3, ::BCFMDCAMPDN* a4, ::BCFMDCAMPDN* a5, ::System::Predicate_1<::System::UInt32>* a6)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*, ::BCFMDCAMPDN*, ::BCFMDCAMPDN*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_GLMKDIMMMDF_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BDELEPPBDNI(::RPG::GameCore::LevelGroupMissionConditionSet* a1, ::RPG::GameCore::LevelGroupMissionType a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGroupMissionConditionSet*, ::RPG::GameCore::LevelGroupMissionType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_BDELEPPBDNI_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Promises::IPromise* JNFNLIEEKEL(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::LevelGroupMissionType a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + FAPLILPEPEI_JNFNLIEEKEL_OFFSET))(a1, a2);
		}

		static ::System::Boolean ECOIBJGJFEJ(::System::Object* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_ECOIBJGJFEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean JBPCANOBCGA(::System::Object* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_JBPCANOBCGA_OFFSET))(a1, a2);
		}

		static ::System::Boolean PEIIPAFPMGD(::System::Object* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_PEIIPAFPMGD_OFFSET))(a1, a2);
		}

		static ::System::Boolean NGGMOANIJKJ(::System::Object* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAPLILPEPEI_NGGMOANIJKJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean GBGGKIDNMPP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FAPLILPEPEI_GBGGKIDNMPP_OFFSET))(a1);
		}

		static ::System::Boolean NKKNHOICCNO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FAPLILPEPEI_NKKNHOICCNO_OFFSET))(a1);
		}

	};
