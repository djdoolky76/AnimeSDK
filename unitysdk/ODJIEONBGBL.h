#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHLEKJMMLBA.h"
class BPGBJEDIAFP;
class CAINPBIGHGM;

#define ODJIEONBGBL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBD960C0)
#define ODJIEONBGBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD96070)

inline static constexpr unsigned int ODJIEONBGBL_TypeDefinitionIndex = 62707;

	class ODJIEONBGBL : public ::System::Object
	{
	public:
		::BPGBJEDIAFP* BLLLBFKIGIL; // 0x10
		::System::Void _ctor(::BPGBJEDIAFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGBJEDIAFP*))((::PBYTE)hIl2Cpp + ODJIEONBGBL_CTOR_OFFSET))(this, a1);
		}

		::CAINPBIGHGM* ACMKLFOMPFC(::AHLEKJMMLBA a1)
		{
			return ((::CAINPBIGHGM*(*)(::PVOID, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + ODJIEONBGBL_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
