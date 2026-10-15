#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashBlurChannel.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashFOVChannel.h"
#include "unitysdk/RPG/Client/RoadRash/ERoadRashImpactShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BAHEINMHOAC;
class GHMGGIHEHJE;
class HGJBPNJAADD;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define KBFKLMMIPLI_AACKBIMJKDA_OFFSET UNITYSDK_OFFSET(0xB2F08E0)
#define KBFKLMMIPLI_AKBAMACMEMC_OFFSET UNITYSDK_OFFSET(0xB2F05D0)
#define KBFKLMMIPLI_CKBJKMJOPJB_OFFSET UNITYSDK_OFFSET(0xB2F0800)
#define KBFKLMMIPLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2EFE50)
#define KBFKLMMIPLI_DCMJMOCELAP_OFFSET UNITYSDK_OFFSET(0xB2F1E20)
#define KBFKLMMIPLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2EFF00)
#define KBFKLMMIPLI_DOLAEAKNCNE_OFFSET UNITYSDK_OFFSET(0xB2F10F0)
#define KBFKLMMIPLI_DPEGIPGGMIB_OFFSET UNITYSDK_OFFSET(0xB2F12C0)
#define KBFKLMMIPLI_EGEDCOBNHFK_OFFSET UNITYSDK_OFFSET(0xB2F18E0)
#define KBFKLMMIPLI_ELCFENJCCEH_OFFSET UNITYSDK_OFFSET(0xB2F1A70)
#define KBFKLMMIPLI_FEIDPNEAHDG_OFFSET UNITYSDK_OFFSET(0xB2F01B0)
#define KBFKLMMIPLI_FEMLEPEIEII_OFFSET UNITYSDK_OFFSET(0xB2F07A0)
#define KBFKLMMIPLI_GLEKCBLNPCO_OFFSET UNITYSDK_OFFSET(0xB2F1CD0)
#define KBFKLMMIPLI_HOGENJFBEAC_OFFSET UNITYSDK_OFFSET(0xB2F04D0)
#define KBFKLMMIPLI_IPLBHNNEFDJ_OFFSET UNITYSDK_OFFSET(0xB2F1D50)
#define KBFKLMMIPLI_JBCJJCFGFFK_OFFSET UNITYSDK_OFFSET(0xB2F0010)
#define KBFKLMMIPLI_JBNHADDJMHK_OFFSET UNITYSDK_OFFSET(0xB2F2120)
#define KBFKLMMIPLI_JENFOBGJNMG_OFFSET UNITYSDK_OFFSET(0xB2F0330)
#define KBFKLMMIPLI_KELOIOKBGLG_OFFSET UNITYSDK_OFFSET(0xB2F1570)
#define KBFKLMMIPLI_LAOEMCOIOKK_OFFSET UNITYSDK_OFFSET(0xB2F0970)
#define KBFKLMMIPLI_MICBLLKHPEM_OFFSET UNITYSDK_OFFSET(0xB2F0E40)
#define KBFKLMMIPLI_MPCHFHCHHEG_OFFSET UNITYSDK_OFFSET(0xB2F06C0)
#define KBFKLMMIPLI_NLGNOELNBJM_OFFSET UNITYSDK_OFFSET(0xB2EFFB0)
#define KBFKLMMIPLI_OCCDCPEJPIA_OFFSET UNITYSDK_OFFSET(0xB2F0870)
#define KBFKLMMIPLI_PFJCHJABNNN_OFFSET UNITYSDK_OFFSET(0xB2F0240)

inline static constexpr unsigned int KBFKLMMIPLI_TypeDefinitionIndex = 75923;

	class KBFKLMMIPLI : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* FKINCGODJEP; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RoadRash::ERoadRashImpactShakeType, ::System::Single>* EECHAOBGDOJ; // 0x18
		::KPDKCEAFBHI* ADJNOFMEIKM; // 0x20
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_DISPOSE_OFFSET))(this);
		}

		::System::Void NLGNOELNBJM(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_NLGNOELNBJM_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* JBCJJCFGFFK(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_JBCJJCFGFFK_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* FEIDPNEAHDG(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_FEIDPNEAHDG_OFFSET))(this, a1);
		}

		::System::Boolean PFJCHJABNNN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_PFJCHJABNNN_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* JENFOBGJNMG()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_JENFOBGJNMG_OFFSET))(this);
		}

		::System::Void HOGENJFBEAC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_HOGENJFBEAC_OFFSET))(this, a1);
		}

		::System::Void MPCHFHCHHEG(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_MPCHFHCHHEG_OFFSET))(this, a1, a2);
		}

		::System::Void CKBJKMJOPJB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_CKBJKMJOPJB_OFFSET))(this, a1);
		}

		::System::Void OCCDCPEJPIA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_OCCDCPEJPIA_OFFSET))(this, a1);
		}

		::System::Void AACKBIMJKDA(::GHMGGIHEHJE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_AACKBIMJKDA_OFFSET))(this, a1, a2);
		}

		::System::Void LAOEMCOIOKK(::UnityEngine::Vector2 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_LAOEMCOIOKK_OFFSET))(this, a1, a2);
		}

		::System::Void MICBLLKHPEM(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_MICBLLKHPEM_OFFSET))(this, a1, a2);
		}

		::System::Void DOLAEAKNCNE(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_DOLAEAKNCNE_OFFSET))(this, a1, a2);
		}

		::System::Void KELOIOKBGLG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_KELOIOKBGLG_OFFSET))(this, a1);
		}

		::System::Boolean EGEDCOBNHFK(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Single a7, ::System::Single a8, ::System::Int32 a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_EGEDCOBNHFK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void GLEKCBLNPCO(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Int32))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_GLEKCBLNPCO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ELCFENJCCEH(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_ELCFENJCCEH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IPLBHNNEFDJ(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_IPLBHNNEFDJ_OFFSET))(this, a1, a2);
		}

		::HGJBPNJAADD* DPEGIPGGMIB(::GHMGGIHEHJE* a1)
		{
			return ((::HGJBPNJAADD*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_DPEGIPGGMIB_OFFSET))(this, a1);
		}

		static ::System::Void FEMLEPEIEII(::BAHEINMHOAC* a1)
		{
			return ((::System::Void(*)(::BAHEINMHOAC*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_FEMLEPEIEII_OFFSET))(a1);
		}

		::System::Boolean AKBAMACMEMC(::GHMGGIHEHJE* a1, ::BAHEINMHOAC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BAHEINMHOAC*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_AKBAMACMEMC_OFFSET))(this, a1, a2);
		}

		::System::Void DCMJMOCELAP(::RPG::Client::RoadRash::ERoadRashImpactShakeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::ERoadRashImpactShakeType))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_DCMJMOCELAP_OFFSET))(this, a1);
		}

		::System::Void JBNHADDJMHK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KBFKLMMIPLI_JBNHADDJMHK_OFFSET))(this, a1);
		}

	};
