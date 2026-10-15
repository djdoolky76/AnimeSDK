#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGCJNDECBLC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJMLKBLCLGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16461830)

inline static constexpr unsigned int IJMLKBLCLGH_TypeDefinitionIndex = 48932;

	class IJMLKBLCLGH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ConnectedEndpoints; // 0x10
		::System::String* Id; // 0x18
		::System::Collections::Generic::List_1<::GGCJNDECBLC*>* Nodes; // 0x20
		::System::String* Description; // 0x28
		::System::String* Name; // 0x30
		::System::Single Width; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMLKBLCLGH_CTOR_OFFSET))(this);
		}

	};
