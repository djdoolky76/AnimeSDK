#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ELKFMEKPEMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F6C20)

inline static constexpr unsigned int ELKFMEKPEMA_TypeDefinitionIndex = 43410;

	class ELKFMEKPEMA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TRFAction ENGGCENAFPM; // 0x10
		::System::Single IEHPFADHJFD; // 0x14
		::System::UInt32 PDKOHKKMKLF; // 0x18
		::System::Boolean CEBOAFDFAHM; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::TRFOperate PODOMHHPEBG; // 0x20
		::UnityEngine::Vector3 NDCILLPHPDN; // 0x24
		::System::UInt32 JMPMDGJLIPF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKFMEKPEMA_CTOR_OFFSET))(this);
		}

	};
