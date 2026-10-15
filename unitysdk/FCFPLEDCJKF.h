#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class FCFPLEDCJKF_ANJIEBKBMKG;
class FCFPLEDCJKF_EPFBBLBNNKD;
class LAJCPEFEOPN;
class MHHBDDMJOII;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FCFPLEDCJKF_AAFCBDKOBKJ_OFFSET UNITYSDK_OFFSET(0x156BA910)
#define FCFPLEDCJKF_AFDOPBOHGJL_OFFSET UNITYSDK_OFFSET(0x156BAA60)
#define FCFPLEDCJKF_CTOR_OFFSET UNITYSDK_OFFSET(0x156B9BC0)
#define FCFPLEDCJKF_DCDNCGFKKNE_OFFSET UNITYSDK_OFFSET(0x156BAB30)
#define FCFPLEDCJKF_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0x156B9BB0)
#define FCFPLEDCJKF_FLCNIHINHCK_OFFSET UNITYSDK_OFFSET(0x156BA360)
#define FCFPLEDCJKF_GET_INTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x156B9B70)
#define FCFPLEDCJKF_GET_INTERACTIONRADIUS_OFFSET UNITYSDK_OFFSET(0x156B9B90)
#define FCFPLEDCJKF_HFJONIGFLKL_OFFSET UNITYSDK_OFFSET(0x156BA2C0)
#define FCFPLEDCJKF_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x156B9F80)
#define FCFPLEDCJKF_OELCGEJKKLC_OFFSET UNITYSDK_OFFSET(0x156B9BA0)

inline static constexpr unsigned int FCFPLEDCJKF_TypeDefinitionIndex = 69306;

	class FCFPLEDCJKF : public ::ICOHAPENNHF
	{
	public:
		::FCFPLEDCJKF_EPFBBLBNNKD* AEPKGAALNLN; // 0x80
		::FCFPLEDCJKF_ANJIEBKBMKG* MFHNOKFDJBE; // 0x88
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* FHPFKPGCCBA; // 0x90
		::UnityEngine::Vector3 _InteractionPoint_k__BackingField; // 0x98
		::System::Single _InteractionRadius_k__BackingField; // 0xA4
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 get_InteractionPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_GET_INTERACTIONPOINT_OFFSET))(this);
		}

		::System::Single get_InteractionRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_GET_INTERACTIONRADIUS_OFFSET))(this);
		}

		::System::Boolean OELCGEJKKLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_OELCGEJKKLC_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Boolean HFJONIGFLKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_HFJONIGFLKL_OFFSET))(this);
		}

		::LAJCPEFEOPN* FLCNIHINHCK(::System::Single a1)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FLCNIHINHCK_OFFSET))(this, a1);
		}

		::System::Void AAFCBDKOBKJ(::LAJCPEFEOPN* a1, ::BMDDCGIDIBB_DIMAABDMJBL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_AAFCBDKOBKJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean AFDOPBOHGJL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_AFDOPBOHGJL_OFFSET))(this, a1);
		}

		::System::Void DCDNCGFKKNE(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_DCDNCGFKKNE_OFFSET))(this, a1);
		}

	};
