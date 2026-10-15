#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelMarkerType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BEPHFOHAGJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A720)

inline static constexpr unsigned int BEPHFOHAGJO_TypeDefinitionIndex = 41953;

	class BEPHFOHAGJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::ChimeraDuelMarkerType>* JNDJAAKBFMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHFOHAGJO_CTOR_OFFSET))(this);
		}

	};
