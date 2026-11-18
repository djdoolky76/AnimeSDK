#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBNGMAHAFFE.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class FLBAEFPLHOF;
class NBGIHOILEMD;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CFLGDJEMLAF_ABAAKFCDGDE_OFFSET UNITYSDK_OFFSET(0x139C2E10)
#define CFLGDJEMLAF_BOCNCNELIPA_OFFSET UNITYSDK_OFFSET(0x139C2510)
#define CFLGDJEMLAF_CONOPHDNDLC_OFFSET UNITYSDK_OFFSET(0x139C2470)
#define CFLGDJEMLAF_EOFFCOPGOOA_OFFSET UNITYSDK_OFFSET(0x139C2FA0)
#define CFLGDJEMLAF_FDIILCHJPAM_OFFSET UNITYSDK_OFFSET(0x139C2CC0)
#define CFLGDJEMLAF_HHNILJLMFBC_OFFSET UNITYSDK_OFFSET(0x139C23F0)
#define CFLGDJEMLAF_HLIBCLOAMDC_OFFSET UNITYSDK_OFFSET(0x139C2E50)
#define CFLGDJEMLAF_JHPJOFFBGFD_OFFSET UNITYSDK_OFFSET(0x139C2D10)
#define CFLGDJEMLAF_LEOFLOFEBNE_OFFSET UNITYSDK_OFFSET(0x139C2C70)
#define CFLGDJEMLAF_PLDAFGPDNDJ_OFFSET UNITYSDK_OFFSET(0x139C2400)
#define CFLGDJEMLAF__CTOR_OFFSET UNITYSDK_OFFSET(0x139C2350)

inline static constexpr unsigned int CFLGDJEMLAF_TypeDefinitionIndex = 91172;

class CFLGDJEMLAF : public ::System::Object
{
public:
	::System::Action_2<::System::Int32, ::System::Boolean>* NPPMPNBFOON; // 0x10
	::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* LNFJFFBHKAD; // 0x18
	::FLBAEFPLHOF* JABOGFEMPMJ; // 0x20
	::NBGIHOILEMD* FEJGLFNIHAG; // 0x28
	::BBNGMAHAFFE DJIDPMLGJDG; // 0x30
	::System::Int32 OMECGGODFKA; // 0x34
	::System::Boolean AABNBMNDCMB; // 0x38

	::System::Void _ctor(::FLBAEFPLHOF* LOFHKIIHPMC, ::NBGIHOILEMD* CKPBJAEDFEB, ::BBNGMAHAFFE NGCLLGBNOBA, ::System::Boolean MGNAMCBPIEG, ::System::Action_2<::System::Int32, ::System::Boolean>* OAIFLACBOCB)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAEFPLHOF*, ::NBGIHOILEMD*, ::BBNGMAHAFFE, ::System::Boolean, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CFLGDJEMLAF__CTOR_OFFSET))(this, LOFHKIIHPMC, CKPBJAEDFEB, NGCLLGBNOBA, MGNAMCBPIEG, OAIFLACBOCB);
	}

	::System::Boolean HHNILJLMFBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_HHNILJLMFBC_OFFSET))(this);
	}

	::System::Void PLDAFGPDNDJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_PLDAFGPDNDJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CONOPHDNDLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_CONOPHDNDLC_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::String*, ::System::String*> BOCNCNELIPA()
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_BOCNCNELIPA_OFFSET))(this);
	}

	::System::String* LEOFLOFEBNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_LEOFLOFEBNE_OFFSET))(this);
	}

	::System::Boolean FDIILCHJPAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_FDIILCHJPAM_OFFSET))(this);
	}

	::System::String* JHPJOFFBGFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_JHPJOFFBGFD_OFFSET))(this);
	}

	::System::Boolean ABAAKFCDGDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_ABAAKFCDGDE_OFFSET))(this);
	}

	::System::Int32 HLIBCLOAMDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_HLIBCLOAMDC_OFFSET))(this);
	}

	::System::Boolean EOFFCOPGOOA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGDJEMLAF_EOFFCOPGOOA_OFFSET))(this);
	}
};
