#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENJPMEBIGDO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PALILLBOGLN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E3CCF50)
#define PALILLBOGLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3CCCC0)
#define PALILLBOGLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CCED0)

inline static constexpr unsigned int PALILLBOGLN_TypeDefinitionIndex = 94693;

class PALILLBOGLN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ENJPMEBIGDO*>* PJCLAGPHNPG; // 0x10
	::System::Int32 BBHLDFGNLAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALILLBOGLN__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALILLBOGLN_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALILLBOGLN_DPIHOJBBGLA_OFFSET))(this);
	}
};
