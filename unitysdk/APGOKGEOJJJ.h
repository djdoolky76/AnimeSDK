#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define APGOKGEOJJJ_AGMADLINOKE_OFFSET UNITYSDK_OFFSET(0x136019B0)
#define APGOKGEOJJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13601A00)

inline static constexpr unsigned int APGOKGEOJJJ_TypeDefinitionIndex = 92988;

class APGOKGEOJJJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOKGEOJJJ__CTOR_OFFSET))(this);
	}

	::System::Int32 AGMADLINOKE(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + APGOKGEOJJJ_AGMADLINOKE_OFFSET))(this, HGKANJHHLMF);
	}
};
