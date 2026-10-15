#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
class LCCMNACCAMH;
class MHHBDDMJOII;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrosswalkInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BBNNDJLGGLC_ADNOEBJLADE_OFFSET UNITYSDK_OFFSET(0x15E99E30)
#define BBNNDJLGGLC_BBEDGHEFFJH_OFFSET UNITYSDK_OFFSET(0x15E99F00)
#define BBNNDJLGGLC_CGAFOMMPCDO_OFFSET UNITYSDK_OFFSET(0x15E9A330)
#define BBNNDJLGGLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E997C0)
#define BBNNDJLGGLC_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0x15E997B0)
#define BBNNDJLGGLC_HMGIICLLIPF_OFFSET UNITYSDK_OFFSET(0x15E9A670)
#define BBNNDJLGGLC_LHAOLEAPHPD_OFFSET UNITYSDK_OFFSET(0x15E9A0A0)
#define BBNNDJLGGLC_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15E99C00)
#define BBNNDJLGGLC_NHFCCEECMGG_OFFSET UNITYSDK_OFFSET(0x15E99D50)
#define BBNNDJLGGLC_OCGDHGJLMEB_OFFSET UNITYSDK_OFFSET(0x15E99FC0)
#define BBNNDJLGGLC_PIHLANMDHHK_OFFSET UNITYSDK_OFFSET(0x15E9A140)

inline static constexpr unsigned int BBNNDJLGGLC_TypeDefinitionIndex = 69315;

	class BBNNDJLGGLC : public ::ICOHAPENNHF
	{
	public:
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::LCCMNACCAMH*>* DGGPKCGDNOA; // 0x80
		::Il2CppArray<::LCCMNACCAMH*>* IHLBAMHPGFG; // 0x88
		::RPG::Client::TwoKeyDictionary_3<::JOGBIBJLPJB, ::JOGBIBJLPJB, ::LCCMNACCAMH*>* CBJLIJPOBLP; // 0x90
		::System::String* OHBCIGADKLL; // 0x98
		::System::Int32 DAGHBKPOEMM; // 0xA0
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Boolean NHFCCEECMGG(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_NHFCCEECMGG_OFFSET))(this, a1, a2);
		}

		::System::Void ADNOEBJLADE(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_ADNOEBJLADE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BBEDGHEFFJH(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_BBEDGHEFFJH_OFFSET))(this, a1);
		}

		::System::Void OCGDHGJLMEB(::LAJCPEFEOPN* a1, ::JOGBIBJLPJB a2, ::JOGBIBJLPJB a3)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_OCGDHGJLMEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LHAOLEAPHPD(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_LHAOLEAPHPD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PIHLANMDHHK(::LAJCPEFEOPN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_PIHLANMDHHK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CGAFOMMPCDO(::LAJCPEFEOPN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_CGAFOMMPCDO_OFFSET))(this, a1);
		}

		::System::Void HMGIICLLIPF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBNNDJLGGLC_HMGIICLLIPF_OFFSET))(this, a1);
		}

	};
