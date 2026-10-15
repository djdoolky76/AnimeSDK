#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
class EIDIGCLKLOA;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define EBMPLHELOMF_CTOR_OFFSET UNITYSDK_OFFSET(0x12D04560)
#define EBMPLHELOMF_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0x12D04210)
#define EBMPLHELOMF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x12D03FC0)
#define EBMPLHELOMF_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0x12D041B0)
#define EBMPLHELOMF_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0x12D04160)
#define EBMPLHELOMF_GCLFLAILMOJ_OFFSET UNITYSDK_OFFSET(0x12D044F0)
#define EBMPLHELOMF_KFOAFKONDCI_OFFSET UNITYSDK_OFFSET(0x12D043A0)
#define EBMPLHELOMF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x12D040D0)
#define EBMPLHELOMF__ONBIND_OFFSET UNITYSDK_OFFSET(0x12D03DE0)

inline static constexpr unsigned int EBMPLHELOMF_TypeDefinitionIndex = 71703;

	class EBMPLHELOMF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* AAGANDGAMLM; // 0x60
		::RPG::Client::AnimatorButton* JOODINOFCLL; // 0x68
		::UnityEngine::Transform* HLIPPJJGFPG; // 0x70
		::RPG::Client::LocalizedText* IHGCPGHKDOB; // 0x78
		::UnityEngine::Transform* PEMIMCDDCNP; // 0x80
		::EIDIGCLKLOA* IGHAHBNLIJA; // 0x88
		::UnityEngine::Transform* ALJEGMLBPKH; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMPLHELOMF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMPLHELOMF__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMPLHELOMF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::EIDIGCLKLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDIGCLKLOA*))((::PBYTE)hIl2Cpp + EBMPLHELOMF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBMPLHELOMF_EJDAKAECODE_OFFSET))(this, a1);
		}

		::System::Void KFOAFKONDCI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBMPLHELOMF_KFOAFKONDCI_OFFSET))(this, a1);
		}

		::System::Void DEMDIHFEGLH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBMPLHELOMF_DEMDIHFEGLH_OFFSET))(this, a1);
		}

		::System::Void GCLFLAILMOJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBMPLHELOMF_GCLFLAILMOJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::IronTombProgressMode FGOEGLEDNCJ()
		{
			return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMPLHELOMF_FGOEGLEDNCJ_OFFSET))(this);
		}

	};
