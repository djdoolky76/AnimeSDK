#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
class OPCAMPLOOAO;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGEHIAFOLIE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D84740)

inline static constexpr unsigned int MGEHIAFOLIE_TypeDefinitionIndex = 82975;

class MGEHIAFOLIE : public ::System::Object
{
public:
	::MoleMole::EntityHandle KOLFOINKALI; // 0x10
	::OPCAMPLOOAO* DIOOHGLLMJC; // 0x20
	::System::Action_1<::DPFMDEBJEMG*>* BDGAKDEBMPI; // 0x28
	::System::Action* CLNOKPBIMBK; // 0x30
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* NEJAFDPFEPN; // 0x38
	::System::Action_1<::DPFMDEBJEMG*>* FCEDMNJFFLA; // 0x40
	::System::String* GEDELEKIOAH; // 0x48
	::System::Int32 NMCECIEDGGK; // 0x50
	::System::Int32 POBMKNPJPEL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEHIAFOLIE__CTOR_OFFSET))(this);
	}
};
