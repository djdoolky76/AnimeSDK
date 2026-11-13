#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKNCIDNBBDN_CTOR_OFFSET UNITYSDK_OFFSET(0x18CFDEA0)

inline static constexpr unsigned int LKNCIDNBBDN_TypeDefinitionIndex = 74165;

	class LKNCIDNBBDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KPJHIOKBJEI; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCIDNBBDN_CTOR_OFFSET))(this);
		}

	};
