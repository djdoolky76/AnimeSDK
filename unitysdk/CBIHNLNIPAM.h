#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelOptionsCardSelectItemData.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBIHNLNIPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F13BB0)

inline static constexpr unsigned int CBIHNLNIPAM_TypeDefinitionIndex = 62121;

class CBIHNLNIPAM : public ::System::Object
{
public:
	::System::String* CCLINDELKAL; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::InLevelOptionsCardSelectItemData>* AABCFJFPGJM; // 0x18
	::System::Action* DPJIDONFBEM; // 0x20
	::System::Int32 KILKKJBIOCA; // 0x28
	::System::Boolean MCDFEBKGPGO; // 0x2C
	::System::Boolean INANACMKLPO; // 0x2D
	::System::Boolean MJAFHFKEMAK; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIHNLNIPAM__CTOR_OFFSET))(this);
	}
};
