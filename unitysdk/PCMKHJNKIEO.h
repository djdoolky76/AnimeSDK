#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EGDHCBFEGJG;
class GAHPNAEGACM;
class MADHNHEMBOJ_ADIMGCIBHBC;
namespace RPG::Client { class AnimatorButton; }

#define PCMKHJNKIEO_CTOR_OFFSET UNITYSDK_OFFSET(0xC90E530)
#define PCMKHJNKIEO_EMLFFGPEEMD_OFFSET UNITYSDK_OFFSET(0xC90E380)
#define PCMKHJNKIEO_GBAHJNDBPBJ_OFFSET UNITYSDK_OFFSET(0xC90E080)
#define PCMKHJNKIEO_GET_ROOTBTN_OFFSET UNITYSDK_OFFSET(0xC90E4D0)
#define PCMKHJNKIEO_GIMIFKCACKH_OFFSET UNITYSDK_OFFSET(0xC90DFD0)
#define PCMKHJNKIEO_ILIAIPNLMML_OFFSET UNITYSDK_OFFSET(0xC90E2F0)
#define PCMKHJNKIEO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC90E470)
#define PCMKHJNKIEO_NHAPDLEIBBL_OFFSET UNITYSDK_OFFSET(0xC90E280)
#define PCMKHJNKIEO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC90E020)
#define PCMKHJNKIEO_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0xC90E400)
#define PCMKHJNKIEO_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC90E1A0)
#define PCMKHJNKIEO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC90DF70)

inline static constexpr unsigned int PCMKHJNKIEO_TypeDefinitionIndex = 74247;

	class PCMKHJNKIEO : public ::CAOEEDDAPIK
	{
	public:
		::IGKFNIEJGLM LNOIOGDDEEM; // 0xE0
		::EGDHCBFEGJG* FCCHNALOIPI; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PCMKHJNKIEO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void GIMIFKCACKH(::EGDHCBFEGJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGDHCBFEGJG*))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_GIMIFKCACKH_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void NHAPDLEIBBL(::MADHNHEMBOJ_ADIMGCIBHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MADHNHEMBOJ_ADIMGCIBHBC*))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_NHAPDLEIBBL_OFFSET))(this, a1);
		}

		::System::Void ILIAIPNLMML(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_ILIAIPNLMML_OFFSET))(this, a1, a2);
		}

		::System::Boolean EMLFFGPEEMD(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_EMLFFGPEEMD_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void GBAHJNDBPBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_GBAHJNDBPBJ_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_RootBtn()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMKHJNKIEO_GET_ROOTBTN_OFFSET))(this);
		}

	};
