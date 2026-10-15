#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FFGBNHJHIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x157376C0)
#define FFGBNHJHIPI_DGFCANOPEJA_OFFSET UNITYSDK_OFFSET(0x15738D70)
#define FFGBNHJHIPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157376D0)
#define FFGBNHJHIPI_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x157376B0)
#define FFGBNHJHIPI_GLGCKMJMMNF_OFFSET UNITYSDK_OFFSET(0x15738290)
#define FFGBNHJHIPI_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0x15739A60)
#define FFGBNHJHIPI_MDEEENKEBJP_OFFSET UNITYSDK_OFFSET(0x15739500)
#define FFGBNHJHIPI_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15739A00)
#define FFGBNHJHIPI_ONSKIP_OFFSET UNITYSDK_OFFSET(0x157396C0)
#define FFGBNHJHIPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15737710)
#define FFGBNHJHIPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157393E0)
#define FFGBNHJHIPI_PDOOLECJLHI_OFFSET UNITYSDK_OFFSET(0x15738430)
#define FFGBNHJHIPI_TICK_OFFSET UNITYSDK_OFFSET(0x15739430)

	class FFGBNHJHIPI : public ::GELIALJDFBL
	{
	public:
		::System::String* CENMHIGCEDG; // 0x18
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* OFKGLJOAMLD; // 0x20
		::System::String* ALGOGGCGNEJ; // 0x28
		::Cinemachine::CinemachineBrain* NDFNHOJDLPK; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::String* MLHHKCCAOJK; // 0x40
		::System::UInt64 BHOBDDBFMEH; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_TICK_OFFSET))(this, a1);
		}

		::System::Void DGFCANOPEJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_DGFCANOPEJA_OFFSET))(this);
		}

		::System::Void PDOOLECJLHI(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_PDOOLECJLHI_OFFSET))(this, a1);
		}

		::RPG::Client::CameraBlendCurve* MDEEENKEBJP(::System::String* a1)
		{
			return ((::RPG::Client::CameraBlendCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_MDEEENKEBJP_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_JBKBBNFJAKN_OFFSET))(this);
		}

		::UnityEngine::GameObject* GLGCKMJMMNF(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + FFGBNHJHIPI_GLGCKMJMMNF_OFFSET))(this, a1, a2);
		}

	};
