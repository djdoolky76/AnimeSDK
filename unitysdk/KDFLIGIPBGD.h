#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDFLIGIPBGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BF810)

inline static constexpr unsigned int KDFLIGIPBGD_TypeDefinitionIndex = 50082;

class KDFLIGIPBGD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* AGJONHAPJFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFLIGIPBGD__CTOR_OFFSET))(this);
	}
};
