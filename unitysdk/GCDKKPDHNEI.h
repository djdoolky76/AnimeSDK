#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GCDKKPDHNEI_KBMMPFPMIDD;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }

#define GCDKKPDHNEI_AJGGAGILNFM_1_OFFSET UNITYSDK_OFFSET(0x15968D10)
#define GCDKKPDHNEI_AJGGAGILNFM_OFFSET UNITYSDK_OFFSET(0x159683B0)
#define GCDKKPDHNEI_BCEIAOKJPKP_OFFSET UNITYSDK_OFFSET(0x15968FB0)
#define GCDKKPDHNEI_BNFJJLCIELH_OFFSET UNITYSDK_OFFSET(0x15966330)
#define GCDKKPDHNEI_BONDMMJCHAM_OFFSET UNITYSDK_OFFSET(0x15966E80)
#define GCDKKPDHNEI_BPMGNPADEIO_OFFSET UNITYSDK_OFFSET(0x15968BF0)
#define GCDKKPDHNEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15969850)
#define GCDKKPDHNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15966040)
#define GCDKKPDHNEI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15966710)
#define GCDKKPDHNEI_DMCHBGPGKJK_OFFSET UNITYSDK_OFFSET(0x15968410)
#define GCDKKPDHNEI_EACHKMEPKJJ_OFFSET UNITYSDK_OFFSET(0x15967060)
#define GCDKKPDHNEI_ENIPJAENIAF_OFFSET UNITYSDK_OFFSET(0x15966960)
#define GCDKKPDHNEI_EPNFGPMDMFE_OFFSET UNITYSDK_OFFSET(0x15968190)
#define GCDKKPDHNEI_GLIAKBLLJAI_OFFSET UNITYSDK_OFFSET(0x15968AE0)
#define GCDKKPDHNEI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x159668B0)
#define GCDKKPDHNEI_IGKMBKEEAPO_OFFSET UNITYSDK_OFFSET(0x15969630)
#define GCDKKPDHNEI_IIGDCLIJEJN_OFFSET UNITYSDK_OFFSET(0x159695C0)
#define GCDKKPDHNEI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x159661E0)
#define GCDKKPDHNEI_LEONKDAMEAC_1_OFFSET UNITYSDK_OFFSET(0x15969310)
#define GCDKKPDHNEI_LEONKDAMEAC_OFFSET UNITYSDK_OFFSET(0x15967800)
#define GCDKKPDHNEI_NBHEFANGHPM_OFFSET UNITYSDK_OFFSET(0x159682D0)
#define GCDKKPDHNEI_NCIJCOPIPDB_OFFSET UNITYSDK_OFFSET(0x15968C60)
#define GCDKKPDHNEI_NNOAMEDGDND_OFFSET UNITYSDK_OFFSET(0x15968ED0)
#define GCDKKPDHNEI_OEGIFHCJILO_OFFSET UNITYSDK_OFFSET(0x15967660)
#define GCDKKPDHNEI_PEDEGFEAIFF_OFFSET UNITYSDK_OFFSET(0x15966EE0)

inline static constexpr unsigned int GCDKKPDHNEI_TypeDefinitionIndex = 60493;

	class GCDKKPDHNEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>* IOPDNECHGJH; // 0x10
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::System::Object*>*>* KHDJFOBNNAL; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PKFPKINOFNJ; // 0x20
		::RPG::GameCore::GameEntity* ANEKNEEJELB; // 0x28
		::UnityEngine::Object* OPJDELFMLHG; // 0x30
		::System::Collections::Generic::Stack_1<::System::Object*>* KGPJODCJKKD; // 0x38
		::RPG::Client::AdventurePhase* EIOBKDBICHL; // 0x40
		::System::Boolean MHEAIOMEGCA; // 0x48
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_CALCENIINAM()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "GCDKKPDHNEI")->GetStaticField(0x52EB0);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_FPEOFLNHOOL()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "GCDKKPDHNEI")->GetStaticField(0x52EB8);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet_MPENJHHKCDD()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "GCDKKPDHNEI")->GetStaticField(0x52EC0);
		}

		static ::UnityEngine::Vector3* StaticGet_LBHFPDEFFEE()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "GCDKKPDHNEI")->GetStaticField(0x12660);
		}

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCDKKPDHNEI_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BONDMMJCHAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_BONDMMJCHAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* EACHKMEPKJJ(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::AdvEnterBattleSelectTargetType a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdvEnterBattleSelectTargetType))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_EACHKMEPKJJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* OEGIFHCJILO(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_OEGIFHCJILO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNFJJLCIELH(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_BNFJJLCIELH_OFFSET))(this, a1, a2);
		}

		::System::Void GLIAKBLLJAI(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_GLIAKBLLJAI_OFFSET))(this, a1, a2);
		}

		::System::Int32 NCIJCOPIPDB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_NCIJCOPIPDB_OFFSET))(this);
		}

		::System::Void PEDEGFEAIFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_PEDEGFEAIFF_OFFSET))(this);
		}

		::System::Void NNOAMEDGDND(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_NNOAMEDGDND_OFFSET))(this, a1);
		}

		::System::Void BPMGNPADEIO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_BPMGNPADEIO_OFFSET))(this, a1);
		}

		static ::System::Boolean NBHEFANGHPM(::RPG::GameCore::NPCComponent* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_NBHEFANGHPM_OFFSET))(a1);
		}

		static ::System::Void LEONKDAMEAC(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_LEONKDAMEAC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LEONKDAMEAC_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Object* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Object*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_LEONKDAMEAC_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean BCEIAOKJPKP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_BCEIAOKJPKP_OFFSET))(a1);
		}

		::System::Void IIGDCLIJEJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_IIGDCLIJEJN_OFFSET))(this, a1);
		}

		::System::Void EPNFGPMDMFE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_EPNFGPMDMFE_OFFSET))(this, a1);
		}

		::System::Void AJGGAGILNFM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_AJGGAGILNFM_OFFSET))(this, a1);
		}

		::System::Void AJGGAGILNFM_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_AJGGAGILNFM_1_OFFSET))(this, a1);
		}

		::System::Void DMCHBGPGKJK(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_DMCHBGPGKJK_OFFSET))(this, a1, a2);
		}

		::System::Void ENIPJAENIAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_ENIPJAENIAF_OFFSET))(this);
		}

		::GCDKKPDHNEI_KBMMPFPMIDD* IGKMBKEEAPO()
		{
			return ((::GCDKKPDHNEI_KBMMPFPMIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_IGKMBKEEAPO_OFFSET))(this);
		}

	};
