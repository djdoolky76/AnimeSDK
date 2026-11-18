#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABFGDBBIAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x135D0E00)

inline static constexpr unsigned int ABFGDBBIAHP_TypeDefinitionIndex = 86515;

class ABFGDBBIAHP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* PNKOLEDAHGF; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* BHADJPAHBKO; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* FBOECEIKJKE; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* OIDDKDGBHPC; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* IOILFIMEFFK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFGDBBIAHP__CTOR_OFFSET))(this);
	}
};
