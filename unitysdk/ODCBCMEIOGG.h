#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class GEKNEEMAHBC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODCBCMEIOGG_EGNMKOAHICA_OFFSET UNITYSDK_OFFSET(0xB30F7E0)
#define ODCBCMEIOGG__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F710)

inline static constexpr unsigned int ODCBCMEIOGG_TypeDefinitionIndex = 69610;

class ODCBCMEIOGG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EHCPNJIGBCJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EPFBPGANNGN; // 0x18
	::GEKNEEMAHBC* LHAOGCPPGJE; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier BHNJABKGCOP; // 0x28
	::System::Int32 BGMOLEPOCBC; // 0x30
	::System::Int32 MKIBAHLCKJN; // 0x34
	::System::UInt32 LICNKPBKEIC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCBCMEIOGG__CTOR_OFFSET))(this);
	}

	::System::Boolean EGNMKOAHICA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCBCMEIOGG_EGNMKOAHICA_OFFSET))(this);
	}
};
