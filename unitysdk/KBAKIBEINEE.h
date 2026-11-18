#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BODKHFKIMFE;
class MJHDNMKGLBJ;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define KBAKIBEINEE_ABDFDJEDLOD_OFFSET UNITYSDK_OFFSET(0x18A2E000)
#define KBAKIBEINEE_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x18A2D0F0)
#define KBAKIBEINEE_ACJGAPNEACL_OFFSET UNITYSDK_OFFSET(0x18A2D340)
#define KBAKIBEINEE_ACKNMFIABFA_OFFSET UNITYSDK_OFFSET(0x18A2DAC0)
#define KBAKIBEINEE_APLDNMPFDMA_OFFSET UNITYSDK_OFFSET(0x18A2D080)
#define KBAKIBEINEE_CJIIMGLFMFA_OFFSET UNITYSDK_OFFSET(0x18A2F010)
#define KBAKIBEINEE_CLDKGDMDELD_1_OFFSET UNITYSDK_OFFSET(0x18A2E310)
#define KBAKIBEINEE_CLDKGDMDELD_OFFSET UNITYSDK_OFFSET(0x18A2D420)
#define KBAKIBEINEE_DEEMDJDJGCP_OFFSET UNITYSDK_OFFSET(0x18A2D950)
#define KBAKIBEINEE_DKGLIEIDFIA_OFFSET UNITYSDK_OFFSET(0x18A2CF20)
#define KBAKIBEINEE_DKMNAHKLEEJ_OFFSET UNITYSDK_OFFSET(0x18A2FBF0)
#define KBAKIBEINEE_EAEOPKANLFJ_OFFSET UNITYSDK_OFFSET(0x18A2F520)
#define KBAKIBEINEE_EIFDNNOKJMN_1_OFFSET UNITYSDK_OFFSET(0x18A2F890)
#define KBAKIBEINEE_EIFDNNOKJMN_OFFSET UNITYSDK_OFFSET(0x18A2F830)
#define KBAKIBEINEE_EJHBEMBLMNA_OFFSET UNITYSDK_OFFSET(0x18A2D690)
#define KBAKIBEINEE_FHGNHPEFALF_OFFSET UNITYSDK_OFFSET(0x18A2DD80)
#define KBAKIBEINEE_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x18A2E7A0)
#define KBAKIBEINEE_FMMDNCECLJF_1_OFFSET UNITYSDK_OFFSET(0x18A2EB70)
#define KBAKIBEINEE_FMMDNCECLJF_OFFSET UNITYSDK_OFFSET(0x18A2EB10)
#define KBAKIBEINEE_FOPCGCOCEEA_OFFSET UNITYSDK_OFFSET(0x18A2F9E0)
#define KBAKIBEINEE_GADFANBCBAK_OFFSET UNITYSDK_OFFSET(0x18A2CFB0)
#define KBAKIBEINEE_GLLDLPCDOLJ_1_OFFSET UNITYSDK_OFFSET(0x18A2FD90)
#define KBAKIBEINEE_GLLDLPCDOLJ_OFFSET UNITYSDK_OFFSET(0x18A2D700)
#define KBAKIBEINEE_HAMBBAMANGB_OFFSET UNITYSDK_OFFSET(0x18A2E230)
#define KBAKIBEINEE_IGOHLGPONNA_OFFSET UNITYSDK_OFFSET(0x18A2F930)
#define KBAKIBEINEE_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x18A2D4B0)
#define KBAKIBEINEE_KBPLDHAENAM_1_OFFSET UNITYSDK_OFFSET(0x18A2FE90)
#define KBAKIBEINEE_KBPLDHAENAM_OFFSET UNITYSDK_OFFSET(0x18A2F080)
#define KBAKIBEINEE_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x18A2F280)
#define KBAKIBEINEE_LDHPAFFKHEH_OFFSET UNITYSDK_OFFSET(0x18A2DA20)
#define KBAKIBEINEE_LLOKIHIFILJ_OFFSET UNITYSDK_OFFSET(0x18A2D820)
#define KBAKIBEINEE_LMPHLKAAEPJ_OFFSET UNITYSDK_OFFSET(0x18A2DB50)
#define KBAKIBEINEE_MGHEMHEHPBE_1_OFFSET UNITYSDK_OFFSET(0x18A2FD00)
#define KBAKIBEINEE_MGHEMHEHPBE_OFFSET UNITYSDK_OFFSET(0x18A2E710)
#define KBAKIBEINEE_MOFOLNMINFM_OFFSET UNITYSDK_OFFSET(0x18A2E3A0)
#define KBAKIBEINEE_OFDAAMOBIKG_OFFSET UNITYSDK_OFFSET(0x18A2FC80)
#define KBAKIBEINEE_OHHILIFKGFH_OFFSET UNITYSDK_OFFSET(0x18A2FE20)
#define KBAKIBEINEE_OICHKEAPMKF_OFFSET UNITYSDK_OFFSET(0x18A30000)
#define KBAKIBEINEE_OIOELPFOCKK_OFFSET UNITYSDK_OFFSET(0x18A2E430)
#define KBAKIBEINEE_PCOMAJPJJGK_OFFSET UNITYSDK_OFFSET(0x18A2F480)
#define KBAKIBEINEE_PENMANAPMIG_OFFSET UNITYSDK_OFFSET(0x18A2F1E0)
#define KBAKIBEINEE_PGKIMOBENKC_OFFSET UNITYSDK_OFFSET(0x18A2D8B0)
#define KBAKIBEINEE_PIENLAIPIGJ_OFFSET UNITYSDK_OFFSET(0x18A2D2D0)
#define KBAKIBEINEE_PIFLKENBFMJ_OFFSET UNITYSDK_OFFSET(0x18A2E690)

inline static constexpr unsigned int KBAKIBEINEE_TypeDefinitionIndex = 68899;

class KBAKIBEINEE : public ::System::Object
{
public:
	static ::System::UInt32 DKGLIEIDFIA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_DKGLIEIDFIA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean GADFANBCBAK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_GADFANBCBAK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::UInt32 APLDNMPFDMA(::BODKHFKIMFE* MECOFDHMKEB)
	{
		return ((::System::UInt32(*)(::BODKHFKIMFE*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_APLDNMPFDMA_OFFSET))(MECOFDHMKEB);
	}

	static ::System::Boolean ACALKPGHILE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBAKIBEINEE_ACALKPGHILE_OFFSET))(KECKGDFIALJ, OHOGDOMNHNK);
	}

	static ::System::String* PIENLAIPIGJ(::System::Object* EIFONLCJOPG, ::System::Int32 AHCMJBMOBGA)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + KBAKIBEINEE_PIENLAIPIGJ_OFFSET))(EIFONLCJOPG, AHCMJBMOBGA);
	}

	static ::System::Boolean ACJGAPNEACL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_ACJGAPNEACL_OFFSET))(KECKGDFIALJ);
	}

	static ::System::UInt32 CLDKGDMDELD(::MJHDNMKGLBJ* HBNBIBADGNH)
	{
		return ((::System::UInt32(*)(::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_CLDKGDMDELD_OFFSET))(HBNBIBADGNH);
	}

	static ::UnityEngine::Quaternion INMGLPLEEIK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_INMGLPLEEIK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::UInt32 EJHBEMBLMNA(::BODKHFKIMFE* MECOFDHMKEB)
	{
		return ((::System::UInt32(*)(::BODKHFKIMFE*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_EJHBEMBLMNA_OFFSET))(MECOFDHMKEB);
	}

	static ::MoleMole::Config::CharacterAliveState GLLDLPCDOLJ(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + KBAKIBEINEE_GLLDLPCDOLJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean LLOKIHIFILJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_LLOKIHIFILJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PGKIMOBENKC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_PGKIMOBENKC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean DEEMDJDJGCP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EBEFDMPPJDC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_DEEMDJDJGCP_OFFSET))(KECKGDFIALJ, EBEFDMPPJDC);
	}

	static ::System::Boolean LMPHLKAAEPJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Quaternion& BFBELMDIAHI)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + KBAKIBEINEE_LMPHLKAAEPJ_OFFSET))(KECKGDFIALJ, OHOGDOMNHNK, BFBELMDIAHI);
	}

	static ::System::Boolean FHGNHPEFALF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3& OHOGDOMNHNK, ::System::Single& PGFOFMIGAPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + KBAKIBEINEE_FHGNHPEFALF_OFFSET))(KECKGDFIALJ, OHOGDOMNHNK, PGFOFMIGAPE);
	}

	static ::System::Single ABDFDJEDLOD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_ABDFDJEDLOD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean HAMBBAMANGB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EBEFDMPPJDC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_HAMBBAMANGB_OFFSET))(KECKGDFIALJ, EBEFDMPPJDC);
	}

	static ::System::UInt32 CLDKGDMDELD_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_CLDKGDMDELD_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::UInt32 MOFOLNMINFM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_MOFOLNMINFM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean OIOELPFOCKK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single PGFOFMIGAPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KBAKIBEINEE_OIOELPFOCKK_OFFSET))(KECKGDFIALJ, OHOGDOMNHNK, PGFOFMIGAPE);
	}

	static ::System::Boolean PIFLKENBFMJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_PIFLKENBFMJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean MGHEMHEHPBE(::MJHDNMKGLBJ* HBNBIBADGNH)
	{
		return ((::System::Boolean(*)(::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_MGHEMHEHPBE_OFFSET))(HBNBIBADGNH);
	}

	static ::System::Boolean FKMOKFNLFOA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 CCIJHMDAAKP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBAKIBEINEE_FKMOKFNLFOA_OFFSET))(KECKGDFIALJ, CCIJHMDAAKP);
	}

	static ::System::String* FMMDNCECLJF(::MJHDNMKGLBJ* HBNBIBADGNH)
	{
		return ((::System::String*(*)(::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_FMMDNCECLJF_OFFSET))(HBNBIBADGNH);
	}

	static ::System::Boolean CJIIMGLFMFA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EBEFDMPPJDC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_CJIIMGLFMFA_OFFSET))(KECKGDFIALJ, EBEFDMPPJDC);
	}

	static ::System::Boolean LDHPAFFKHEH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EBEFDMPPJDC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_LDHPAFFKHEH_OFFSET))(KECKGDFIALJ, EBEFDMPPJDC);
	}

	static ::System::Boolean KBPLDHAENAM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_KBPLDHAENAM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PENMANAPMIG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean BGGBFOHLGOK, ::System::Boolean EJDOGMDAJKG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_PENMANAPMIG_OFFSET))(KECKGDFIALJ, BGGBFOHLGOK, EJDOGMDAJKG);
	}

	static ::System::Boolean ACKNMFIABFA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_ACKNMFIABFA_OFFSET))(KECKGDFIALJ);
	}

	static ::UnityEngine::Vector3 LBCBPEJEHNB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_LBCBPEJEHNB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PCOMAJPJJGK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_PCOMAJPJJGK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EAEOPKANLFJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean KPDFKFDPEDJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_EAEOPKANLFJ_OFFSET))(KECKGDFIALJ, KPDFKFDPEDJ);
	}

	static ::System::UInt32 EIFDNNOKJMN(::MJHDNMKGLBJ* HBNBIBADGNH, ::System::Boolean JAFJPEBBDPE)
	{
		return ((::System::UInt32(*)(::MJHDNMKGLBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_EIFDNNOKJMN_OFFSET))(HBNBIBADGNH, JAFJPEBBDPE);
	}

	static ::System::Boolean IGOHLGPONNA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_IGOHLGPONNA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::String* FMMDNCECLJF_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_FMMDNCECLJF_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean FOPCGCOCEEA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single PGFOFMIGAPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + KBAKIBEINEE_FOPCGCOCEEA_OFFSET))(KECKGDFIALJ, PGFOFMIGAPE);
	}

	static ::System::Boolean DKMNAHKLEEJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_DKMNAHKLEEJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Nullable_1<::System::Int32> OFDAAMOBIKG(::BODKHFKIMFE* MECOFDHMKEB)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::BODKHFKIMFE*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_OFDAAMOBIKG_OFFSET))(MECOFDHMKEB);
	}

	static ::System::UInt32 EIFDNNOKJMN_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean JAFJPEBBDPE)
	{
		return ((::System::UInt32(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_EIFDNNOKJMN_1_OFFSET))(KECKGDFIALJ, JAFJPEBBDPE);
	}

	static ::System::Boolean MGHEMHEHPBE_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_MGHEMHEHPBE_1_OFFSET))(KECKGDFIALJ);
	}

	static ::MoleMole::Config::CharacterAliveState GLLDLPCDOLJ_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_GLLDLPCDOLJ_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean OHHILIFKGFH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean EBEFDMPPJDC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKIBEINEE_OHHILIFKGFH_OFFSET))(KECKGDFIALJ, EBEFDMPPJDC);
	}

	static ::System::Boolean KBPLDHAENAM_1(::MJHDNMKGLBJ* HBNBIBADGNH)
	{
		return ((::System::Boolean(*)(::MJHDNMKGLBJ*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_KBPLDHAENAM_1_OFFSET))(HBNBIBADGNH);
	}

	static ::System::Nullable_1<::System::Int32> OICHKEAPMKF(::BODKHFKIMFE* MECOFDHMKEB)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::BODKHFKIMFE*))((::PBYTE)hIl2Cpp + KBAKIBEINEE_OICHKEAPMKF_OFFSET))(MECOFDHMKEB);
	}
};
