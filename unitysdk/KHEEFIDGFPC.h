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

#define KHEEFIDGFPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FC290)
#define KHEEFIDGFPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FC2A0)
#define KHEEFIDGFPC_ECDCNFMPDLA_OFFSET UNITYSDK_OFFSET(0xB3FFBA0)
#define KHEEFIDGFPC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB3FC280)
#define KHEEFIDGFPC_GLGCKMJMMNF_OFFSET UNITYSDK_OFFSET(0xB3FFC20)
#define KHEEFIDGFPC_HICAEMAKHOD_OFFSET UNITYSDK_OFFSET(0xB3FC300)
#define KHEEFIDGFPC_HKOEIPCBEGL_OFFSET UNITYSDK_OFFSET(0xB3FF580)
#define KHEEFIDGFPC_ILLJNFBHGEC_OFFSET UNITYSDK_OFFSET(0xB3FE010)
#define KHEEFIDGFPC_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0xB3FF8D0)
#define KHEEFIDGFPC_KOBKHOADBHN_OFFSET UNITYSDK_OFFSET(0xB3FFB50)
#define KHEEFIDGFPC_OADGHHBFFDB_OFFSET UNITYSDK_OFFSET(0xB3FFBE0)
#define KHEEFIDGFPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB3FF4B0)
#define KHEEFIDGFPC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB3FF640)
#define KHEEFIDGFPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3FC3E0)
#define KHEEFIDGFPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3FF380)
#define KHEEFIDGFPC_PAGKDPANBFH_OFFSET UNITYSDK_OFFSET(0xB3FEAD0)
#define KHEEFIDGFPC_PCECDHMCNMP_OFFSET UNITYSDK_OFFSET(0xB3FF220)
#define KHEEFIDGFPC_PDOOLECJLHI_OFFSET UNITYSDK_OFFSET(0xB3FE190)
#define KHEEFIDGFPC_TICK_OFFSET UNITYSDK_OFFSET(0xB3FF3E0)

inline static constexpr unsigned int KHEEFIDGFPC_TypeDefinitionIndex = 57853;

	class KHEEFIDGFPC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::VCameraBlend* OBJFPLFEEBD; // 0x18
		::System::String* CENMHIGCEDG; // 0x20
		::RPG::GameCore::ActiveVirtualCamera* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::GameEntity* DIHCNFOOEFF; // 0x30
		::System::String* MLHHKCCAOJK; // 0x38
		::Cinemachine::CinemachineBrain* NDFNHOJDLPK; // 0x40
		::System::String* AAKJCKGCAPF; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::System::String* ALGOGGCGNEJ; // 0x58
		::RPG::GameCore::GameEntity* NHNJKCPPLBA; // 0x60
		::System::UInt64 BHOBDDBFMEH; // 0x68
		::System::UInt32 LEJCBJNHIEG; // 0x70
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
