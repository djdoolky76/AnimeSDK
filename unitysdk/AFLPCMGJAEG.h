#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AFLPCMGJAEG_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1C50DFA0)
#define AFLPCMGJAEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C50E220)
#define AFLPCMGJAEG_DGFAGAPFFPK_OFFSET UNITYSDK_OFFSET(0x1C50E230)
#define AFLPCMGJAEG_ELBIEIKKLBD_OFFSET UNITYSDK_OFFSET(0x1C50E620)
#define AFLPCMGJAEG_OMKNCCKHIMB_OFFSET UNITYSDK_OFFSET(0x1C50E760)

inline static constexpr unsigned int AFLPCMGJAEG_TypeDefinitionIndex = 41738;

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
