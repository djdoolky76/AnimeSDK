#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMJEJMGBLMM_PropVersion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMJEJMGBLMM_BKLJELICAMI_OFFSET UNITYSDK_OFFSET(0x15D77970)
#define HMJEJMGBLMM_MFAGCFLNEEL_OFFSET UNITYSDK_OFFSET(0x15D77380)
#define HMJEJMGBLMM_NAHMHAAKKBJ_OFFSET UNITYSDK_OFFSET(0x15D77840)
#define HMJEJMGBLMM_PNPFKDGCFDI_1_OFFSET UNITYSDK_OFFSET(0x15D77640)
#define HMJEJMGBLMM_PNPFKDGCFDI_OFFSET UNITYSDK_OFFSET(0x15D77440)

inline static constexpr unsigned int HMJEJMGBLMM_TypeDefinitionIndex = 66015;

	class HMJEJMGBLMM : public ::System::Object
	{
	public:
		static ::RPG::Client::IMatchThreePropData* MFAGCFLNEEL(::HMJEJMGBLMM_PropVersion a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::HMJEJMGBLMM_PropVersion, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HMJEJMGBLMM_MFAGCFLNEEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* PNPFKDGCFDI(::HMJEJMGBLMM_PropVersion a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::HMJEJMGBLMM_PropVersion, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + HMJEJMGBLMM_PNPFKDGCFDI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* PNPFKDGCFDI_1(::HMJEJMGBLMM_PropVersion a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::HMJEJMGBLMM_PropVersion, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HMJEJMGBLMM_PNPFKDGCFDI_1_OFFSET))(a1, a2);
		}

		static ::HMJEJMGBLMM_PropVersion NAHMHAAKKBJ(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::HMJEJMGBLMM_PropVersion(*)(::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + HMJEJMGBLMM_NAHMHAAKKBJ_OFFSET))(a1);
		}

		static ::System::Boolean BKLJELICAMI(::RPG::Client::IMatchThreePropData* a1, ::HMJEJMGBLMM_PropVersion a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IMatchThreePropData*, ::HMJEJMGBLMM_PropVersion))((::PBYTE)hIl2Cpp + HMJEJMGBLMM_BKLJELICAMI_OFFSET))(a1, a2);
		}

	};
