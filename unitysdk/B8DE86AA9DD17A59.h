#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD4FBD8A8981BF41.h"

class FDB1CB2AE90A6E14;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B8DE86AA9DD17A59__CTOR_OFFSET UNITYSDK_OFFSET(0x19164C0)

inline static constexpr unsigned int B8DE86AA9DD17A59_TypeDefinitionIndex = 1535;

class B8DE86AA9DD17A59 : public ::BD4FBD8A8981BF41
{
public:
	::FDB1CB2AE90A6E14* E503CF3EAE138E9D; // 0x138
	::System::UInt32 EDB42C4C835AAD90; // 0x140
	::System::UInt32 BEF5F9059FD6984C; // 0x144
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E5B30A6D9AFC6A9D; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8DE86AA9DD17A59__CTOR_OFFSET))(this);
	}
};
