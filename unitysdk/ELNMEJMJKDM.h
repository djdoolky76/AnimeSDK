#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJAABNBJMEH.h"
namespace System { class String; }

#define ELNMEJMJKDM_BNOKJNMMLCB_OFFSET UNITYSDK_OFFSET(0x1CDA4A10)
#define ELNMEJMJKDM_CAHDODOJAHO_OFFSET UNITYSDK_OFFSET(0x1CDA4A00)
#define ELNMEJMJKDM_FHHJLPONEGI_OFFSET UNITYSDK_OFFSET(0x1CDA4A60)
#define ELNMEJMJKDM_PKHKMPPPMLH_OFFSET UNITYSDK_OFFSET(0x1CDA49F0)

	class ELNMEJMJKDM : public ::System::Object
	{
	public:
		static ::System::Void PKHKMPPPMLH(::JJAABNBJMEH a1)
		{
			return ((::System::Void(*)(::JJAABNBJMEH))((::PBYTE)hIl2Cpp + ELNMEJMJKDM_PKHKMPPPMLH_OFFSET))(a1);
		}

		static ::System::Int32 CAHDODOJAHO(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ELNMEJMJKDM_CAHDODOJAHO_OFFSET))(a1, a2);
		}

		static ::System::Int32 BNOKJNMMLCB(::System::String* a1, ::JJAABNBJMEH a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::JJAABNBJMEH, ::System::Int32))((::PBYTE)hIl2Cpp + ELNMEJMJKDM_BNOKJNMMLCB_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FHHJLPONEGI(::System::String* a1, ::JJAABNBJMEH a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::JJAABNBJMEH, ::System::Int32))((::PBYTE)hIl2Cpp + ELNMEJMJKDM_FHHJLPONEGI_OFFSET))(a1, a2, a3);
		}

	};
