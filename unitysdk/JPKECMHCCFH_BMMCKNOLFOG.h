#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMNJFFMIFK.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JPKECMHCCFH_BMMCKNOLFOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5011B0)
#define JPKECMHCCFH_BMMCKNOLFOG_DGPLJLNMIDO_OFFSET UNITYSDK_OFFSET(0x1B501200)
#define JPKECMHCCFH_BMMCKNOLFOG_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x1B501BD0)
#define JPKECMHCCFH_BMMCKNOLFOG_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x1B501B60)
#define JPKECMHCCFH_BMMCKNOLFOG_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x1B501AF0)

inline static constexpr unsigned int JPKECMHCCFH_BMMCKNOLFOG_TypeDefinitionIndex = 74176;

	class JPKECMHCCFH_BMMCKNOLFOG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_BMMCKNOLFOG_CTOR_OFFSET))(this);
		}

		::DKMNJFFMIFK DGPLJLNMIDO()
		{
			return ((::DKMNJFFMIFK(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_BMMCKNOLFOG_DGPLJLNMIDO_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_BMMCKNOLFOG_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_BMMCKNOLFOG_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_BMMCKNOLFOG_HOBKJMHIJHC_OFFSET))(this);
		}

	};
