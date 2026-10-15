#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
class GEDMHFPPBHN;
class MADHNHEMBOJ;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define EBCNJEFOMCG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE7620)
#define EBCNJEFOMCG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x12CE65E0)
#define EBCNJEFOMCG_FACCLOOBKPP_OFFSET UNITYSDK_OFFSET(0x12CE69A0)
#define EBCNJEFOMCG_JINBNAIKBKK_OFFSET UNITYSDK_OFFSET(0x12CE6900)
#define EBCNJEFOMCG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x12CE6670)
#define EBCNJEFOMCG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x12CE6850)
#define EBCNJEFOMCG_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0x12CE72E0)
#define EBCNJEFOMCG__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CE6130)

inline static constexpr unsigned int EBCNJEFOMCG_TypeDefinitionIndex = 71280;

	class EBCNJEFOMCG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* NNOFBCONNJB; // 0x60
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x68
		::UnityEngine::Transform* ACINICIHNBP; // 0x70
		::UnityEngine::Transform* OCJAAFKJCNL; // 0x78
		::UnityEngine::Animation* JEPJPCFCNED; // 0x80
		::UnityEngine::Transform* LCOCMEGDCJP; // 0x88
		::UnityEngine::Transform* FFGCALGHHEI; // 0x90
		::UnityEngine::Transform* EMIPBGCMPIA; // 0x98
		::UnityEngine::Transform* ADEHCLGMPJN; // 0xA0
		::UnityEngine::Transform* KLGICMFOPMB; // 0xA8
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0xB0
		::UnityEngine::Animation* GDEKNJJAIDF; // 0xB8
		::UnityEngine::UI::Text* PCLBOPLDNDI; // 0xC0
		::UnityEngine::UI::Text* OEDDILBGNBF; // 0xC8
		::UnityEngine::UI::Image* ACGAIFJHJOO; // 0xD0
		::System::Boolean JIEJLKLFJOL; // 0xD8
		::System::Byte _padding0[0x3];
		::UnityEngine::Color ABMKBPJEJDC; // 0xDC
		::System::Single DPLDFNFHAJL; // 0xEC
		::UnityEngine::Color DAOFNJALEOL; // 0xF0
		// static const ::System::String* NFENFKACJNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCNJEFOMCG__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void JINBNAIKBKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_JINBNAIKBKK_OFFSET))(this, a1);
		}

		::System::Void FACCLOOBKPP(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_FACCLOOBKPP_OFFSET))(this, a1);
		}

		::System::Void ODKDBHMADCD(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + EBCNJEFOMCG_ODKDBHMADCD_OFFSET))(this, a1, a2);
		}

	};
