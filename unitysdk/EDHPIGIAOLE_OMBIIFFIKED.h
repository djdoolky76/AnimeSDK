#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDHPIGIAOLE_OMBIIFFIKED_CTOR_OFFSET UNITYSDK_OFFSET(0x13319420)

inline static constexpr unsigned int EDHPIGIAOLE_OMBIIFFIKED_TypeDefinitionIndex = 57407;

	class EDHPIGIAOLE_OMBIIFFIKED : public ::System::Object
	{
	public:
		::System::String* BAHLDFMIJFG; // 0x10
		::System::String* IFCEOHEAIGI; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MLNPMBIDPIF; // 0x20
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0x28
		::System::Boolean OHLOEABKKME; // 0x34
		::System::Boolean GMFPEGFIKAE; // 0x35
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion POHDKIIOAJB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_OMBIIFFIKED_CTOR_OFFSET))(this);
		}

	};
