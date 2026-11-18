#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FPGHAPKHDLL_GFBBFDKNNIA_OLGCGBBKGLC_OFFSET UNITYSDK_OFFSET(0x11C7E9F0)
#define FPGHAPKHDLL_GFBBFDKNNIA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C7E9E0)

inline static constexpr unsigned int FPGHAPKHDLL_GFBBFDKNNIA_TypeDefinitionIndex = 89958;

class FPGHAPKHDLL_GFBBFDKNNIA : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* HMPKKCKNFIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_GFBBFDKNNIA__CTOR_OFFSET))(this);
	}

	::System::Boolean OLGCGBBKGLC(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_GFBBFDKNNIA_OLGCGBBKGLC_OFFSET))(this, JNDDJMAHNAI);
	}
};
