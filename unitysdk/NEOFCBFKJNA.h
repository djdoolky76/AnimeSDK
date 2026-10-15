#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMsgType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define NEOFCBFKJNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FFF20)

inline static constexpr unsigned int NEOFCBFKJNA_TypeDefinitionIndex = 42437;

	class NEOFCBFKJNA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* NNACKOBKFGE; // 0x10
		::RPG::Client::LittleGame::TRFMsgType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFCBFKJNA_CTOR_OFFSET))(this);
		}

	};
