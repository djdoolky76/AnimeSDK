#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFFKIHMPGJK_PGPENLLCLDF;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFFKIHMPGJK_KJGGCLFAHJE_CBBMDFHPLOK_OFFSET UNITYSDK_OFFSET(0x16572190)
#define IFFKIHMPGJK_KJGGCLFAHJE_FMNKKCCKNMA_OFFSET UNITYSDK_OFFSET(0x16572070)
#define IFFKIHMPGJK_KJGGCLFAHJE__CTOR_OFFSET UNITYSDK_OFFSET(0x16572060)

inline static constexpr unsigned int IFFKIHMPGJK_KJGGCLFAHJE_TypeDefinitionIndex = 66903;

class IFFKIHMPGJK_KJGGCLFAHJE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_KJGGCLFAHJE__CTOR_OFFSET))(this);
	}

	static ::System::Boolean FMNKKCCKNMA(::IFFKIHMPGJK_PGPENLLCLDF* OMHMHAFNCKC, ::System::Int32 JDPEKICOBOE, ::System::String* ONHHKAAMAEC, ::System::Collections::Generic::List_1<::System::String*>* MLLFIPNEEIL)
	{
		return ((::System::Boolean(*)(::IFFKIHMPGJK_PGPENLLCLDF*, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_KJGGCLFAHJE_FMNKKCCKNMA_OFFSET))(OMHMHAFNCKC, JDPEKICOBOE, ONHHKAAMAEC, MLLFIPNEEIL);
	}

	static ::System::Collections::IEnumerator* CBBMDFHPLOK(::IFFKIHMPGJK_PGPENLLCLDF* AFEHJEGPJIJ, ::System::Int32 PAEEEHKILOC, ::System::String* JGIKDDCPKCA)
	{
		return ((::System::Collections::IEnumerator*(*)(::IFFKIHMPGJK_PGPENLLCLDF*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_KJGGCLFAHJE_CBBMDFHPLOK_OFFSET))(AFEHJEGPJIJ, PAEEEHKILOC, JGIKDDCPKCA);
	}
};
