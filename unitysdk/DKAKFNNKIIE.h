#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKAKFNNKIIE_BKCDODADBCO_OFFSET UNITYSDK_OFFSET(0x148AEC40)
#define DKAKFNNKIIE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x148AECD0)
#define DKAKFNNKIIE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x148AF750)
#define DKAKFNNKIIE_HECJCACACAH_OFFSET UNITYSDK_OFFSET(0x148AF190)
#define DKAKFNNKIIE_IDPALAIIHHM_OFFSET UNITYSDK_OFFSET(0x148AF4B0)
#define DKAKFNNKIIE_MJHBJDMKNKA_OFFSET UNITYSDK_OFFSET(0x148AF330)
#define DKAKFNNKIIE_OJEGIMNIIJJ_OFFSET UNITYSDK_OFFSET(0x148AF860)
#define DKAKFNNKIIE_PPJKECIEPGP_OFFSET UNITYSDK_OFFSET(0x148AF100)
#define DKAKFNNKIIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x148AEBA0)

inline static constexpr unsigned int DKAKFNNKIIE_TypeDefinitionIndex = 43874;

class DKAKFNNKIIE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>** StaticGet_IIJACFEDLIH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(DKAKFNNKIIE_TypeDefinitionIndex)->GetStaticField(0x3A980);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAKFNNKIIE__CCTOR_OFFSET))();
	}

	static ::System::Collections::IEnumerator* BKCDODADBCO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BKCDODADBCO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Collections::IEnumerator* PPJKECIEPGP(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_PPJKECIEPGP_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
	}

	static ::System::Void HECJCACACAH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAKFNNKIIE_HECJCACACAH_OFFSET))();
	}

	static ::MoleMole::HollowEntityConfig* IDPALAIIHHM(::System::UInt32 APKIKLPPHEA)
	{
		return ((::MoleMole::HollowEntityConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_IDPALAIIHHM_OFFSET))(APKIKLPPHEA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void MJHBJDMKNKA(::System::UInt32 MGMDLMBEDJF, ::System::String* CJBJONJDOLI, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_MJHBJDMKNKA_OFFSET))(MGMDLMBEDJF, CJBJONJDOLI, NNJOMEFILCC);
	}

	static ::System::Void OJEGIMNIIJJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAKFNNKIIE_OJEGIMNIIJJ_OFFSET))();
	}
};
