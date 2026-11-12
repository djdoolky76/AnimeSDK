#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AFLPCMGJAEG_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1D6BDE10)
#define AFLPCMGJAEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE090)
#define AFLPCMGJAEG_DGFAGAPFFPK_OFFSET UNITYSDK_OFFSET(0x1D6BE0A0)
#define AFLPCMGJAEG_ELBIEIKKLBD_OFFSET UNITYSDK_OFFSET(0x1D6BE490)
#define AFLPCMGJAEG_OMKNCCKHIMB_OFFSET UNITYSDK_OFFSET(0x1D6BE5D0)

inline static constexpr unsigned int AFLPCMGJAEG_TypeDefinitionIndex = 42713;

	class AFLPCMGJAEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* ABNDIOFJNDM; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AFLPCMGJAEG_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 ADAHCAJBNOB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLPCMGJAEG_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Int32 DGFAGAPFFPK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLPCMGJAEG_DGFAGAPFFPK_OFFSET))(this, a1);
		}

		::System::Int32 ELBIEIKKLBD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLPCMGJAEG_ELBIEIKKLBD_OFFSET))(this, a1);
		}

		::System::Int32 OMKNCCKHIMB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLPCMGJAEG_OMKNCCKHIMB_OFFSET))(this, a1);
		}

	};
