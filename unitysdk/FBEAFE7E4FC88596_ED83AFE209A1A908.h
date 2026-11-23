#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class BA1BAAF528E05466;
class F3A019B3697FD5CF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBEAFE7E4FC88596_ED83AFE209A1A908__CTOR_OFFSET UNITYSDK_OFFSET(0x251E680)

inline static constexpr unsigned int FBEAFE7E4FC88596_ED83AFE209A1A908_TypeDefinitionIndex = 5193;

class FBEAFE7E4FC88596_ED83AFE209A1A908 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>* B70DF1529E332BC2; // 0x10
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::BA1BAAF528E05466*, ::System::String*>>* E270EA053F14A9BB; // 0x18
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::BA1BAAF528E05466*, ::System::String*>>* A895C31CEA18BDEA; // 0x20
	::System::Boolean E609F24B565752EE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEAFE7E4FC88596_ED83AFE209A1A908__CTOR_OFFSET))(this);
	}
};
