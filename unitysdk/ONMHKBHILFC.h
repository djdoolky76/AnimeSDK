#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBPJIBCAKEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONMHKBHILFC_ADPIDIMHGHP_OFFSET UNITYSDK_OFFSET(0xBF5DCE0)
#define ONMHKBHILFC_GACICCPJPFM_OFFSET UNITYSDK_OFFSET(0xBF5DE00)
#define ONMHKBHILFC_HMJCMDNBGAA_OFFSET UNITYSDK_OFFSET(0xBF5DBC0)
#define ONMHKBHILFC_JHPHHILCHEC_OFFSET UNITYSDK_OFFSET(0xBF5E9B0)
#define ONMHKBHILFC_KHMECMPAEAN_OFFSET UNITYSDK_OFFSET(0xBF5E4D0)
#define ONMHKBHILFC_MNJNJJMGFHM_OFFSET UNITYSDK_OFFSET(0xBF5E6A0)

	class ONMHKBHILFC : public ::System::Object
	{
	public:
		static ::System::Boolean HMJCMDNBGAA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ONMHKBHILFC_HMJCMDNBGAA_OFFSET))(a1);
		}

		static ::System::Boolean ADPIDIMHGHP(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + ONMHKBHILFC_ADPIDIMHGHP_OFFSET))(a1, a2);
		}

		static ::System::Int64 GACICCPJPFM(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + ONMHKBHILFC_GACICCPJPFM_OFFSET))(a1);
		}

		static ::System::Boolean KHMECMPAEAN(::OBPJIBCAKEK* a1)
		{
			return ((::System::Boolean(*)(::OBPJIBCAKEK*))((::PBYTE)hIl2Cpp + ONMHKBHILFC_KHMECMPAEAN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* MNJNJJMGFHM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + ONMHKBHILFC_MNJNJJMGFHM_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* JHPHHILCHEC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + ONMHKBHILFC_JHPHHILCHEC_OFFSET))();
		}

	};
