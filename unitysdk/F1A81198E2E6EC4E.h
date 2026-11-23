#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6365CBDAB8191A8.h"

class E3ED5C48F30DE3B1;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F1A81198E2E6EC4E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F1A81198E2E6EC4E_TypeDefinitionIndex = 15497;

class F1A81198E2E6EC4E : public ::B6365CBDAB8191A8
{
public:
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* BE94ACEEF3B48D1B; // 0x48
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* FF1CA667FF8A11B3; // 0x50
	::System::Collections::Generic::List_1<::E3ED5C48F30DE3B1*>* FAF6C86A6CE5014C; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1A81198E2E6EC4E__CTOR_OFFSET))(this);
	}
};
