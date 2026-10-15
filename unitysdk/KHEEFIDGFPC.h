#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::GameCore { class ActiveVirtualCamera; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KHEEFIDGFPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB402DC0)
#define KHEEFIDGFPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB402DD0)
#define KHEEFIDGFPC_ECDCNFMPDLA_OFFSET UNITYSDK_OFFSET(0xB4066B0)
#define KHEEFIDGFPC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB402DB0)
#define KHEEFIDGFPC_GLGCKMJMMNF_OFFSET UNITYSDK_OFFSET(0xB406730)
#define KHEEFIDGFPC_HICAEMAKHOD_OFFSET UNITYSDK_OFFSET(0xB402E30)
#define KHEEFIDGFPC_HKOEIPCBEGL_OFFSET UNITYSDK_OFFSET(0xB406090)
#define KHEEFIDGFPC_ILLJNFBHGEC_OFFSET UNITYSDK_OFFSET(0xB404B30)
#define KHEEFIDGFPC_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0xB4063E0)
#define KHEEFIDGFPC_KOBKHOADBHN_OFFSET UNITYSDK_OFFSET(0xB406660)
#define KHEEFIDGFPC_OADGHHBFFDB_OFFSET UNITYSDK_OFFSET(0xB4066F0)
#define KHEEFIDGFPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB405FC0)
#define KHEEFIDGFPC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB406150)
#define KHEEFIDGFPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB402F00)
#define KHEEFIDGFPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB405E90)
#define KHEEFIDGFPC_PAGKDPANBFH_OFFSET UNITYSDK_OFFSET(0xB4055F0)
#define KHEEFIDGFPC_PCECDHMCNMP_OFFSET UNITYSDK_OFFSET(0xB405D40)
#define KHEEFIDGFPC_PDOOLECJLHI_OFFSET UNITYSDK_OFFSET(0xB404CB0)
#define KHEEFIDGFPC_TICK_OFFSET UNITYSDK_OFFSET(0xB405EF0)

inline static constexpr unsigned int KHEEFIDGFPC_TypeDefinitionIndex = 57853;

	class KHEEFIDGFPC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::VCameraBlend* OBJFPLFEEBD; // 0x18
		::System::String* CENMHIGCEDG; // 0x20
		::System::String* ALGOGGCGNEJ; // 0x28
		::Cinemachine::CinemachineBrain* NDFNHOJDLPK; // 0x30
		::RPG::GameCore::ActiveVirtualCamera* OFKGLJOAMLD; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::System::String* AAKJCKGCAPF; // 0x48
		::RPG::GameCore::GameEntity* DIHCNFOOEFF; // 0x50
		::System::String* MLHHKCCAOJK; // 0x58
		::RPG::GameCore::GameEntity* NHNJKCPPLBA; // 0x60
		::System::UInt32 LEJCBJNHIEG; // 0x68
		::System::Byte _padding0[0x4];
		::System::UInt64 BHOBDDBFMEH; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveVirtualCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveVirtualCamera*))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ILLJNFBHGEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ILLJNFBHGEC_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void PAGKDPANBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_PAGKDPANBFH_OFFSET))(this);
		}

		::System::Void PDOOLECJLHI(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_PDOOLECJLHI_OFFSET))(this, a1);
		}

		::System::Void HKOEIPCBEGL(::RPG::GameCore::VCameraBlend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_HKOEIPCBEGL_OFFSET))(this, a1);
		}

		::System::Void PCECDHMCNMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_PCECDHMCNMP_OFFSET))(this);
		}

		::System::Void HICAEMAKHOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_HICAEMAKHOD_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ONSKIP_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_JBKBBNFJAKN_OFFSET))(this);
		}

		::System::Void KOBKHOADBHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_KOBKHOADBHN_OFFSET))(this);
		}

		::UnityEngine::GameObject* ECDCNFMPDLA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_ECDCNFMPDLA_OFFSET))(this);
		}

		::UnityEngine::GameObject* OADGHHBFFDB()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_OADGHHBFFDB_OFFSET))(this);
		}

		::UnityEngine::GameObject* GLGCKMJMMNF(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + KHEEFIDGFPC_GLGCKMJMMNF_OFFSET))(this, a1, a2);
		}

	};
