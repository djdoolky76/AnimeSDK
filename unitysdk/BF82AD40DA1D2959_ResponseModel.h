#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BF82AD40DA1D2959_RESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF82AD40DA1D2959_ResponseModel_TypeDefinitionIndex = 12409;

class BF82AD40DA1D2959_ResponseModel : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x10
	::System::Int32 retcode; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* message; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_RESPONSEMODEL__CTOR_OFFSET))(this);
	}
};
