#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIIDDKDCOCL_CTOR_OFFSET UNITYSDK_OFFSET(0x154BFF30)

inline static constexpr unsigned int EIIDDKDCOCL_TypeDefinitionIndex = 75393;

	class EIIDDKDCOCL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* FLFEMHDPNEO; // 0x10
		::RPG::Client::TextID ONBFILEPHPC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIDDKDCOCL_CTOR_OFFSET))(this);
		}

	};
