#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFHDCGCHEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1854F560)

inline static constexpr unsigned int BFHDCGCHEHP_TypeDefinitionIndex = 49352;

class BFHDCGCHEHP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* BBOFALNPMDJ; // 0x10
	::System::String* PNHFJAHLBHK; // 0x18
	::System::Single JELOLECBHPC; // 0x20
	::System::UInt32 DEDOHCODKHN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHDCGCHEHP__CTOR_OFFSET))(this);
	}
};
