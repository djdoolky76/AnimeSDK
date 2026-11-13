#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Object.h"
class AOLDKHPPCEM_MBGHEMOFNIL;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AssemNPCColliderInfo; }
namespace RPG::Client { class AssemblyNPCAttachPointInfo; }
namespace RPG::Client { class AssetsPathConfig; }
namespace RPG::Client { class AssetsPathDict; }
namespace RPG::Client { class NpcBodySizeConfig; }
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AOLDKHPPCEM_AGCEHEELMKB_OFFSET UNITYSDK_OFFSET(0x1A84BAE0)
#define AOLDKHPPCEM_AJGOLJFFAIC_OFFSET UNITYSDK_OFFSET(0x1A84E280)
#define AOLDKHPPCEM_BHGKILJBILD_OFFSET UNITYSDK_OFFSET(0x1A84D780)
#define AOLDKHPPCEM_BIECOAKLHOK_OFFSET UNITYSDK_OFFSET(0x1A84D4C0)
#define AOLDKHPPCEM_BJOAFLNLNCB_OFFSET UNITYSDK_OFFSET(0x1A84F100)
#define AOLDKHPPCEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A84FAD0)
#define AOLDKHPPCEM_DCBFLDAGMIB_OFFSET UNITYSDK_OFFSET(0x1A84F6F0)
#define AOLDKHPPCEM_EDFCJFECHOM_OFFSET UNITYSDK_OFFSET(0x1A84D380)
#define AOLDKHPPCEM_ELMCNMBOKCG_OFFSET UNITYSDK_OFFSET(0x1A84C630)
#define AOLDKHPPCEM_EOPGJDMCFHM_OFFSET UNITYSDK_OFFSET(0x1A84E550)
#define AOLDKHPPCEM_EPGMKHPPACI_OFFSET UNITYSDK_OFFSET(0x1A84D120)
#define AOLDKHPPCEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1A84B8C0)
#define AOLDKHPPCEM_FHKOPANAKBO_OFFSET UNITYSDK_OFFSET(0x1A84C230)
#define AOLDKHPPCEM_FIECKOAHDHJ_OFFSET UNITYSDK_OFFSET(0x1A84E970)
#define AOLDKHPPCEM_FKPAEPKGNBM_OFFSET UNITYSDK_OFFSET(0x1A84E130)
#define AOLDKHPPCEM_GDLEGCHEGML_OFFSET UNITYSDK_OFFSET(0x1A84D2D0)
#define AOLDKHPPCEM_GLFAMGKPHBH_OFFSET UNITYSDK_OFFSET(0x1A84DE60)
#define AOLDKHPPCEM_GMKNEEFIHJA_1_OFFSET UNITYSDK_OFFSET(0x1A84CCA0)
#define AOLDKHPPCEM_GMKNEEFIHJA_OFFSET UNITYSDK_OFFSET(0x1A84C950)
#define AOLDKHPPCEM_GNGFJEKJDCB_OFFSET UNITYSDK_OFFSET(0x1A84DFE0)
#define AOLDKHPPCEM_HBPAGDDFBAM_OFFSET UNITYSDK_OFFSET(0x1A84EDD0)
#define AOLDKHPPCEM_HMNDMNILLFH_OFFSET UNITYSDK_OFFSET(0x1A84BB80)
#define AOLDKHPPCEM_KEPMMNCIGDK_OFFSET UNITYSDK_OFFSET(0x1A84DAC0)
#define AOLDKHPPCEM_KKCOGGOBILN_OFFSET UNITYSDK_OFFSET(0x1A84E380)
#define AOLDKHPPCEM_MDNDOMFEJBA_OFFSET UNITYSDK_OFFSET(0x1A84D620)
#define AOLDKHPPCEM_OCHBJMMGEIC_OFFSET UNITYSDK_OFFSET(0x1A84D220)
#define AOLDKHPPCEM_OEPOJIGCOHI_OFFSET UNITYSDK_OFFSET(0x1A84C3A0)
#define AOLDKHPPCEM_PAMLKFJHNDB_OFFSET UNITYSDK_OFFSET(0x1A84D960)
#define AOLDKHPPCEM_PBKDDPDODAO_OFFSET UNITYSDK_OFFSET(0x1A84D070)
#define AOLDKHPPCEM_PKMGLPMNDGO_OFFSET UNITYSDK_OFFSET(0x1A84BE20)

inline static constexpr unsigned int AOLDKHPPCEM_TypeDefinitionIndex = 71162;

	class AOLDKHPPCEM : public ::System::Object
	{
	public:
		static ::RPG::Client::AssetsPathConfig** StaticGet_DLFFCPFOHLJ()
		{
			return (::RPG::Client::AssetsPathConfig**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59230);
		}

		static ::RPG::Client::NpcBodySizeConfig** StaticGet_LBEDBHGGJPE()
		{
			return (::RPG::Client::NpcBodySizeConfig**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59238);
		}

		static ::AOLDKHPPCEM_MBGHEMOFNIL** StaticGet_JJELLPDJHHI()
		{
			return (::AOLDKHPPCEM_MBGHEMOFNIL**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59240);
		}

		static ::RPG::GameCore::LodConfig** StaticGet_KOAMKJHDDNB()
		{
			return (::RPG::GameCore::LodConfig**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59248);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>** StaticGet_NAKLJJBJOOC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59250);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>** StaticGet_HAHPBGLAFAF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>**)UnitySDK::FromName("", "AOLDKHPPCEM")->GetStaticField(0x59258);
		}

		// static const ::System::String* OOGGOOODNEL; // 0x0
		// static const ::System::String* NEMAAEPEKFF; // 0x0
		// static const ::System::String* NLNGOKFLCDE; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_CCTOR_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void PKMGLPMNDGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_PKMGLPMNDGO_OFFSET))();
		}

		static ::System::Single FHKOPANAKBO(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_FHKOPANAKBO_OFFSET))(a1);
		}

		static ::RPG::Client::AssemNPC* OEPOJIGCOHI(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::AssemNPC*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_OEPOJIGCOHI_OFFSET))(a1, a2);
		}

		static ::RPG::Client::AssemNPC* ELMCNMBOKCG(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_ELMCNMBOKCG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::AssemNPC* GMKNEEFIHJA(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::String*>* a4)
		{
			return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_GMKNEEFIHJA_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::AssemNPC* GMKNEEFIHJA_1(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::String*>* a5)
		{
			return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_GMKNEEFIHJA_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::AssetsPathDict* PBKDDPDODAO(::System::String* a1)
		{
			return ((::RPG::Client::AssetsPathDict*(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_PBKDDPDODAO_OFFSET))(a1);
		}

		static ::System::String* EPGMKHPPACI(::RPG::Client::AssemNPC* a1)
		{
			return ((::System::String*(*)(::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_EPGMKHPPACI_OFFSET))(a1);
		}

		static ::System::String* OCHBJMMGEIC(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_OCHBJMMGEIC_OFFSET))(a1);
		}

		static ::System::String* GDLEGCHEGML(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_GDLEGCHEGML_OFFSET))(a1);
		}

		static ::RPG::Client::NpcBodySizeInfo* EDFCJFECHOM(::System::Int32 a1)
		{
			return ((::RPG::Client::NpcBodySizeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_EDFCJFECHOM_OFFSET))(a1);
		}

		static ::System::Single BIECOAKLHOK(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_BIECOAKLHOK_OFFSET))(a1);
		}

		static ::System::String* MDNDOMFEJBA(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MDNDOMFEJBA_OFFSET))(a1);
		}

		static ::RPG::Client::AssemNPCColliderInfo* BHGKILJBILD(::System::Int32 a1)
		{
			return ((::RPG::Client::AssemNPCColliderInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_BHGKILJBILD_OFFSET))(a1);
		}

		static ::System::Int32 PAMLKFJHNDB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_PAMLKFJHNDB_OFFSET))(a1);
		}

		static ::System::Int32 KEPMMNCIGDK(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_KEPMMNCIGDK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::NpcWalkStyleWeightInfo* GLFAMGKPHBH(::System::Int32 a1)
		{
			return ((::RPG::GameCore::NpcWalkStyleWeightInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_GLFAMGKPHBH_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* GNGFJEKJDCB(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_GNGFJEKJDCB_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>* FKPAEPKGNBM(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_FKPAEPKGNBM_OFFSET))(a1);
		}

		static ::System::String* AJGOLJFFAIC(::RPG::GameCore::NPCBodySize a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::NPCBodySize, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_AJGOLJFFAIC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LodTemplate* KKCOGGOBILN(::RPG::Client::EAssemblyNPC a1)
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_KKCOGGOBILN_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* EOPGJDMCFHM(::RPG::GameCore::WorldType a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_EOPGJDMCFHM_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* FIECKOAHDHJ(::RPG::GameCore::WorldType a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_FIECKOAHDHJ_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* HBPAGDDFBAM(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_HBPAGDDFBAM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::AssemNPC* BJOAFLNLNCB(::System::String* a1)
		{
			return ((::RPG::Client::AssemNPC*(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_BJOAFLNLNCB_OFFSET))(a1);
		}

		static ::System::Void DCBFLDAGMIB(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_DCBFLDAGMIB_OFFSET))(a1);
		}

		static ::System::Void AGCEHEELMKB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_AGCEHEELMKB_OFFSET))();
		}

		static ::System::Void HMNDMNILLFH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLDKHPPCEM_HMNDMNILLFH_OFFSET))();
		}

	};
