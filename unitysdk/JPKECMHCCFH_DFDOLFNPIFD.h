#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMNJFFMIFK.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JPKECMHCCFH_DFDOLFNPIFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5011A0)
#define JPKECMHCCFH_DFDOLFNPIFD_DGPLJLNMIDO_OFFSET UNITYSDK_OFFSET(0x1B5011C0)
#define JPKECMHCCFH_DFDOLFNPIFD_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x1B501CC0)
#define JPKECMHCCFH_DFDOLFNPIFD_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x1B501C70)
#define JPKECMHCCFH_DFDOLFNPIFD_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x1B501C20)

inline static constexpr unsigned int JPKECMHCCFH_DFDOLFNPIFD_TypeDefinitionIndex = 74175;

	class JPKECMHCCFH_DFDOLFNPIFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DFDOLFNPIFD_CTOR_OFFSET))(this);
		}

		::DKMNJFFMIFK DGPLJLNMIDO()
		{
			return ((::DKMNJFFMIFK(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DFDOLFNPIFD_DGPLJLNMIDO_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DFDOLFNPIFD_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DFDOLFNPIFD_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DFDOLFNPIFD_HOBKJMHIJHC_OFFSET))(this);
		}

	};
