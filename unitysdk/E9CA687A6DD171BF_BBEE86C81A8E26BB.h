#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class F1C8A76FE26E681F;
class F8E676CB4FE10BB9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E9CA687A6DD171BF_BBEE86C81A8E26BB__CTOR_OFFSET UNITYSDK_OFFSET(0x2616370)

inline static constexpr unsigned int E9CA687A6DD171BF_BBEE86C81A8E26BB_TypeDefinitionIndex = 5954;

class E9CA687A6DD171BF_BBEE86C81A8E26BB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>* B70DF1529E332BC2; // 0x10
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::F8E676CB4FE10BB9*, ::System::String*>>* E270EA053F14A9BB; // 0x18
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::F8E676CB4FE10BB9*, ::System::String*>>* A895C31CEA18BDEA; // 0x20
	::System::Boolean E609F24B565752EE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9CA687A6DD171BF_BBEE86C81A8E26BB__CTOR_OFFSET))(this);
	}
};
