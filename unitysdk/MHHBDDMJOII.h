#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RVO/AsyncAgentParam.h"
class HNOKHGOPLKH;
class ICOHAPENNHF;
class MNIADKMONBH;
class PEELDCHBLJK;
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class AsyncNavMeshAgent; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define MHHBDDMJOII_BCFACFLKMGP_OFFSET UNITYSDK_OFFSET(0xB937400)
#define MHHBDDMJOII_CHDEOHBFPOL_OFFSET UNITYSDK_OFFSET(0xB937330)
#define MHHBDDMJOII_CTOR_OFFSET UNITYSDK_OFFSET(0xB935530)
#define MHHBDDMJOII_DIBIFIAJELC_OFFSET UNITYSDK_OFFSET(0xB937340)
#define MHHBDDMJOII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB936C00)
#define MHHBDDMJOII_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xB9373E0)
#define MHHBDDMJOII_EPFHCACIAJG_1_OFFSET UNITYSDK_OFFSET(0xB937000)
#define MHHBDDMJOII_EPFHCACIAJG_2_OFFSET UNITYSDK_OFFSET(0xB937120)
#define MHHBDDMJOII_EPFHCACIAJG_OFFSET UNITYSDK_OFFSET(0xB936FB0)
#define MHHBDDMJOII_FCANEPBGGJG_OFFSET UNITYSDK_OFFSET(0xB937390)
#define MHHBDDMJOII_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB9373F0)
#define MHHBDDMJOII_HEMOFBOHDIH_OFFSET UNITYSDK_OFFSET(0xB936E30)
#define MHHBDDMJOII_IHIANGHNPPH_OFFSET UNITYSDK_OFFSET(0xB9374A0)
#define MHHBDDMJOII_JJEPPNHOPIA_OFFSET UNITYSDK_OFFSET(0xB935DD0)
#define MHHBDDMJOII_JJFEBPBGGNI_OFFSET UNITYSDK_OFFSET(0xB9371F0)
#define MHHBDDMJOII_KDMEHEGDFKG_OFFSET UNITYSDK_OFFSET(0xB9376F0)
#define MHHBDDMJOII_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xB937260)
#define MHHBDDMJOII_MDKELNAEOGF_OFFSET UNITYSDK_OFFSET(0xB937180)
#define MHHBDDMJOII_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0xB937810)

inline static constexpr unsigned int MHHBDDMJOII_TypeDefinitionIndex = 69333;

	class MHHBDDMJOII : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadMapInfo* IGHAHBNLIJA; // 0x10
		::PEELDCHBLJK* FLMODBLFAGD; // 0x18
		::System::Random* OLEEIPHBJKB; // 0x20
		::System::Action* ADIOMDIEKNM; // 0x28
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x30
		::Il2CppArray<::System::Object*>* EEHEAPIPDMF; // 0x38
		::System::Collections::Generic::List_1<::HNOKHGOPLKH*>* JDOMJDMFPGG; // 0x40
		::Il2CppArray<::ICOHAPENNHF*>* IBMMBGIMACO; // 0x48
		::Il2CppArray<::MNIADKMONBH*>* JABKEGEILAO; // 0x50
		::System::Int32 AHFLDAEIFKH; // 0x58
		::System::Int32 IKIFIEKPMIG; // 0x5C
		// static const ::System::Object ODCCFPPEEAG; // 0x0
		::System::Void _ctor(::PEELDCHBLJK* a1, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo* a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::UnityEngine::Transform* a7)
		{
			return ((::System::Void(*)(::PVOID, ::PEELDCHBLJK*, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MHHBDDMJOII_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EPFHCACIAJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_EPFHCACIAJG_OFFSET))(this);
		}

		::System::Single EPFHCACIAJG_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MHHBDDMJOII_EPFHCACIAJG_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 EPFHCACIAJG_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MHHBDDMJOII_EPFHCACIAJG_2_OFFSET))(this, a1, a2);
		}

		::MNIADKMONBH* MDKELNAEOGF(::System::Int32 a1)
		{
			return ((::MNIADKMONBH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHHBDDMJOII_MDKELNAEOGF_OFFSET))(this, a1);
		}

		::ICOHAPENNHF* JJFEBPBGGNI(::System::Int32 a1)
		{
			return ((::ICOHAPENNHF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHHBDDMJOII_JJFEBPBGGNI_OFFSET))(this, a1);
		}

		::System::Void LKINOKFJPCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_LKINOKFJPCL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HNOKHGOPLKH*>* CHDEOHBFPOL()
		{
			return ((::System::Collections::Generic::List_1<::HNOKHGOPLKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_CHDEOHBFPOL_OFFSET))(this);
		}

		::System::Int32 DIBIFIAJELC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_DIBIFIAJELC_OFFSET))(this);
		}

		::System::Int32 FCANEPBGGJG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_FCANEPBGGJG_OFFSET))(this);
		}

		::UnityEngine::GameObject* EBHNJMPEILL()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_EBHNJMPEILL_OFFSET))(this);
		}

		::PEELDCHBLJK* GGBLHEHJBDO()
		{
			return ((::PEELDCHBLJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_GGBLHEHJBDO_OFFSET))(this);
		}

		::UnityEngine::AI::AsyncNavMeshSimulator* BCFACFLKMGP()
		{
			return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_BCFACFLKMGP_OFFSET))(this);
		}

		::UnityEngine::AI::AsyncNavMeshAgent* IHIANGHNPPH(::RVO::AsyncAgentParam a1)
		{
			return ((::UnityEngine::AI::AsyncNavMeshAgent*(*)(::PVOID, ::RVO::AsyncAgentParam))((::PBYTE)hIl2Cpp + MHHBDDMJOII_IHIANGHNPPH_OFFSET))(this, a1);
		}

		::System::Void KDMEHEGDFKG(::UnityEngine::AI::AsyncNavMeshAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshAgent*))((::PBYTE)hIl2Cpp + MHHBDDMJOII_KDMEHEGDFKG_OFFSET))(this, a1);
		}

		::System::Void HEMOFBOHDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_HEMOFBOHDIH_OFFSET))(this);
		}

		::System::Void JJEPPNHOPIA(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MHHBDDMJOII_JJEPPNHOPIA_OFFSET))(this, a1, a2);
		}

		::System::Void OGGCBJKOJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHBDDMJOII_OGGCBJKOJIK_OFFSET))(this);
		}

	};
