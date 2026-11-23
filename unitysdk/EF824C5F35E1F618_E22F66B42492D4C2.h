#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EF824C5F35E1F618;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EF824C5F35E1F618_E22F66B42492D4C2_A64DE8F800EEA7EB_OFFSET UNITYSDK_OFFSET(0x3A2B890)
#define EF824C5F35E1F618_E22F66B42492D4C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF824C5F35E1F618_E22F66B42492D4C2_TypeDefinitionIndex = 12902;

class EF824C5F35E1F618_E22F66B42492D4C2 : public ::System::Object
{
public:
	::EF824C5F35E1F618* A544919C800E2923; // 0x10
	::System::String* B26FB45137C102C9; // 0x18
	::System::String* EF11C18C8216A86E; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_E22F66B42492D4C2__CTOR_OFFSET))(this);
	}

	::System::Void A64DE8F800EEA7EB(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_E22F66B42492D4C2_A64DE8F800EEA7EB_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
