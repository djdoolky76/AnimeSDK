#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

class CFFHOEAEAEK;
class OPCLBFFFMOA;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LHPPNKANHMM_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x1E5F6D80)
#define LHPPNKANHMM_HKBDGCLACDF_OFFSET UNITYSDK_OFFSET(0x1E5F6D90)
#define LHPPNKANHMM_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1E5DEA70)
#define LHPPNKANHMM_MBAIFDIKCLM_OFFSET UNITYSDK_OFFSET(0x1E5F7340)
#define LHPPNKANHMM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DE820)
#define LHPPNKANHMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6D70)

inline static constexpr unsigned int LHPPNKANHMM_TypeDefinitionIndex = 34062;

class LHPPNKANHMM : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::CFFHOEAEAEK*>* FGCDLDJDCJH; // 0x10
	::System::Int32 OGFPEPEEHLP; // 0x18
	::System::Int32 CLKBJFDGOLJ; // 0x1C
	::System::Int32 HBPAINCDEIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPPNKANHMM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 AKMJNCCICKF, ::System::Int32 AJOBHAGLNIE, ::System::Collections::Generic::IReadOnlyList_1<::CFFHOEAEAEK*>* MBPAGFGBAFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::CFFHOEAEAEK*>*))((::PBYTE)hIl2Cpp + LHPPNKANHMM__CTOR_1_OFFSET))(this, AKMJNCCICKF, AJOBHAGLNIE, MBPAGFGBAFA);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPPNKANHMM_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Int32 FILIKHJMENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPPNKANHMM_FILIKHJMENK_OFFSET))(this);
	}

	::System::Int32 HKBDGCLACDF(::System::Span_1_9011FAD97750D224<::System::Byte> OAFLGAMBFGO, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA, ::System::Int32 JPOHIDLDKEN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::System::Byte>, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LHPPNKANHMM_HKBDGCLACDF_OFFSET))(this, OAFLGAMBFGO, BOGPAHGJOJK, JHFKDGBCOBA, JPOHIDLDKEN);
	}

	::OPCLBFFFMOA* MBAIFDIKCLM(::System::Int32 GIAEPMKCBIB)
	{
		return ((::OPCLBFFFMOA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHPPNKANHMM_MBAIFDIKCLM_OFFSET))(this, GIAEPMKCBIB);
	}
};
