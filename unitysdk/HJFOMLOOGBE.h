#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJFOMLOOGBE__CTOR_OFFSET UNITYSDK_OFFSET(0x140BB8D0)

inline static constexpr unsigned int HJFOMLOOGBE_TypeDefinitionIndex = 54995;

class HJFOMLOOGBE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x10
	::System::Action* EBAAGGHDBEF; // 0x18
	::System::Boolean GBEJHEECAII; // 0x20
	::System::Boolean JCOLGFPPHHK; // 0x21

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE, ::System::Boolean GBEJHEECAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJFOMLOOGBE__CTOR_OFFSET))(this, GLOIMHAJJIE, GBEJHEECAII);
	}
};
