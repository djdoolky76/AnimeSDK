#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHKJLBNBPNI_CTOR_OFFSET UNITYSDK_OFFSET(0x16E22400)

inline static constexpr unsigned int CHKJLBNBPNI_TypeDefinitionIndex = 80112;

	class CHKJLBNBPNI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* CMEEEKLIHBB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJLBNBPNI_CTOR_OFFSET))(this);
		}

	};
