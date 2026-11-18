#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBMGHNEIBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x16358610)

inline static constexpr unsigned int LBMGHNEIBDP_TypeDefinitionIndex = 45954;

class LBMGHNEIBDP : public ::System::Object
{
public:
	::Foundation::AssetRequestCompleteDel* CBDBDDFEPEK; // 0x10
	::Foundation::AssetRequestHandle BJCIEHICEDA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* DFNJFHCCLOM; // 0x38
	::System::Int32 BELNJJKMMJP; // 0x40
	::System::Int32 GLOJDIODCCJ; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMGHNEIBDP__CTOR_OFFSET))(this);
	}
};
