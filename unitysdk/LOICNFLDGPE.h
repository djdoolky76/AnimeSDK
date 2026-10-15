#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFGGJMMGIO.h"

#define LOICNFLDGPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FEE20)
#define LOICNFLDGPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7FECC0)
#define LOICNFLDGPE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB7FEAD0)

inline static constexpr unsigned int LOICNFLDGPE_TypeDefinitionIndex = 57250;

	class LOICNFLDGPE : public ::PDFGGJMMGIO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICNFLDGPE_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICNFLDGPE__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICNFLDGPE_DISPOSE_OFFSET))(this);
		}

	};
