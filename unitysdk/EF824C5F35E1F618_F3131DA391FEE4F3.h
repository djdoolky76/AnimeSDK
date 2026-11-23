#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EF824C5F35E1F618;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EF824C5F35E1F618_F3131DA391FEE4F3_F941E05E2E168CAC_OFFSET UNITYSDK_OFFSET(0x3A2B340)
#define EF824C5F35E1F618_F3131DA391FEE4F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF824C5F35E1F618_F3131DA391FEE4F3_TypeDefinitionIndex = 12900;

class EF824C5F35E1F618_F3131DA391FEE4F3 : public ::System::Object
{
public:
	::EF824C5F35E1F618* A544919C800E2923; // 0x10
	::System::String* EF11C18C8216A86E; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_F3131DA391FEE4F3__CTOR_OFFSET))(this);
	}

	::System::Void F941E05E2E168CAC(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_F3131DA391FEE4F3_F941E05E2E168CAC_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
