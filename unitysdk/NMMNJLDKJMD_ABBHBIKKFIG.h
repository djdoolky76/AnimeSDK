#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMMNJLDKJMD_ABBHBIKKFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8F590)

inline static constexpr unsigned int NMMNJLDKJMD_ABBHBIKKFIG_TypeDefinitionIndex = 75470;

	class NMMNJLDKJMD_ABBHBIKKFIG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* EJHODPJIFIN; // 0x10
		::System::String* JDEMDGHJOGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_ABBHBIKKFIG_CTOR_OFFSET))(this);
		}

	};
