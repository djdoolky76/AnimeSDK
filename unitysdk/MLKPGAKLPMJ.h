#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLKPGAKLPMJ_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x11A1E220)
#define MLKPGAKLPMJ_JIFEMEMBNOL_OFFSET UNITYSDK_OFFSET(0x11A1E130)
#define MLKPGAKLPMJ_KELEFEJLEMN_OFFSET UNITYSDK_OFFSET(0x11A1DF70)
#define MLKPGAKLPMJ_LCGCMGHNOAL_OFFSET UNITYSDK_OFFSET(0x11A1DDC0)
#define MLKPGAKLPMJ_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0x11A1E080)
#define MLKPGAKLPMJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11A1DF20)
#define MLKPGAKLPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1DD10)

inline static constexpr unsigned int MLKPGAKLPMJ_TypeDefinitionIndex = 69260;

class MLKPGAKLPMJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* LFNJKLCBNPG; // 0x10
	::System::Boolean LLMIEACMIPM; // 0x18
	::System::Boolean OMHBDCHBGOG; // 0x19
	::System::Boolean GMCKIPHLGLB; // 0x1A

	::System::Void _ctor(::System::Boolean PDFEDOCLDHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ__CTOR_OFFSET))(this, PDFEDOCLDHG);
	}

	::System::Void LCGCMGHNOAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_LCGCMGHNOAL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean KELEFEJLEMN(::System::String* AELLPLBJELA, ::System::Boolean& KNBLKFLINLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_KELEFEJLEMN_OFFSET))(this, AELLPLBJELA, KNBLKFLINLC);
	}

	::System::Boolean MCJGGBMPMKC(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_MCJGGBMPMKC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void JIFEMEMBNOL(::System::String* AELLPLBJELA, ::System::Boolean PLGJEDEJADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_JIFEMEMBNOL_OFFSET))(this, AELLPLBJELA, PLGJEDEJADN);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKPGAKLPMJ_DILABNGJPMN_OFFSET))(this);
	}
};
