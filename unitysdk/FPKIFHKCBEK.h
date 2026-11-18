#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPKIFHKCBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x11D930B0)

inline static constexpr unsigned int FPKIFHKCBEK_TypeDefinitionIndex = 89348;

class FPKIFHKCBEK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PPGHECKJILM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKIFHKCBEK__CTOR_OFFSET))(this);
	}
};
