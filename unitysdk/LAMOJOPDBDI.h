#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABNLDDIMIG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LAMOJOPDBDI_BKCLEICKEHF_OFFSET UNITYSDK_OFFSET(0x1C56D7C0)
#define LAMOJOPDBDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56DF80)

inline static constexpr unsigned int LAMOJOPDBDI_TypeDefinitionIndex = 41897;

	class LAMOJOPDBDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOJOPDBDI_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* BKCLEICKEHF(::FABNLDDIMIG* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::FABNLDDIMIG*))((::PBYTE)hIl2Cpp + LAMOJOPDBDI_BKCLEICKEHF_OFFSET))(a1);
		}

	};
