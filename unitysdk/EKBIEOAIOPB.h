#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGOEPFMLFLB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKBIEOAIOPB__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAE6B0)

inline static constexpr unsigned int EKBIEOAIOPB_TypeDefinitionIndex = 68883;

class EKBIEOAIOPB : public ::System::Object
{
public:
	::System::String* AMEEMEPHGEL; // 0x10
	::System::Collections::Generic::List_1<::FGOEPFMLFLB*>* FPHFOAICPOD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBIEOAIOPB__CTOR_OFFSET))(this);
	}
};
