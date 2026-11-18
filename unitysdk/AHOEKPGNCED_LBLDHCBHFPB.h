#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHOEKPGNCED_LBLDHCBHFPB__CTOR_OFFSET UNITYSDK_OFFSET(0x144DE950)

inline static constexpr unsigned int AHOEKPGNCED_LBLDHCBHFPB_TypeDefinitionIndex = 53470;

class AHOEKPGNCED_LBLDHCBHFPB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BDHOILPIGKB; // 0x10
	::System::Int32 CGELPKBKHOJ; // 0x18
	::System::Int32 OBMKCCOIOPI; // 0x1C
	::System::Int32 FIGHIOHECCG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_LBLDHCBHFPB__CTOR_OFFSET))(this);
	}
};
