#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DPDHMOALAFG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PMCMFJMFOCH_CTOR_OFFSET UNITYSDK_OFFSET(0xC30F2F0)
#define PMCMFJMFOCH_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0xC30F290)
#define PMCMFJMFOCH_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xC30F220)

inline static constexpr unsigned int PMCMFJMFOCH_TypeDefinitionIndex = 79659;

	class PMCMFJMFOCH : public ::System::Object
	{
	public:
		::DPDHMOALAFG* EKIJFPIPCKF; // 0x10
		::System::Void _ctor(::DPDHMOALAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPDHMOALAFG*))((::PBYTE)hIl2Cpp + PMCMFJMFOCH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCMFJMFOCH_PNLLINHJDJF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* HONGLJECAAC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCMFJMFOCH_HONGLJECAAC_OFFSET))(this);
		}

	};
