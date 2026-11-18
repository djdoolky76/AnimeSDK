#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OHDCKNOCMFK_GGCMPBKGJMO.h"

class OHDCKNOCMFK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABNAENMHEME_HAPGBNEJCHL_OFFSET UNITYSDK_OFFSET(0x12642150)
#define ABNAENMHEME_IKDBMJEMFPD_OFFSET UNITYSDK_OFFSET(0x12641FC0)

inline static constexpr unsigned int ABNAENMHEME_TypeDefinitionIndex = 53093;

class ABNAENMHEME : public ::System::Object
{
public:
	static ::System::Void IKDBMJEMFPD(::OHDCKNOCMFK* DMJKOHPFCBG, ::System::Collections::Generic::List_1<::System::Object*>* NBDMGCENBAI)
	{
		return ((::System::Void(*)(::OHDCKNOCMFK*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABNAENMHEME_IKDBMJEMFPD_OFFSET))(DMJKOHPFCBG, NBDMGCENBAI);
	}

	static ::System::Void HAPGBNEJCHL(::OHDCKNOCMFK* DMJKOHPFCBG, ::OHDCKNOCMFK_GGCMPBKGJMO BIJNDBBOLIJ)
	{
		return ((::System::Void(*)(::OHDCKNOCMFK*, ::OHDCKNOCMFK_GGCMPBKGJMO))((::PBYTE)hIl2Cpp + ABNAENMHEME_HAPGBNEJCHL_OFFSET))(DMJKOHPFCBG, BIJNDBBOLIJ);
	}
};
