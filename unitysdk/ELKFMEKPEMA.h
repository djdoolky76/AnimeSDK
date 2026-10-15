#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ELKFMEKPEMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61520)

	class ELKFMEKPEMA : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NDCILLPHPDN; // 0x10
		::RPG::Client::LittleGame::TRFAction ENGGCENAFPM; // 0x1C
		::System::Boolean CEBOAFDFAHM; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 JMPMDGJLIPF; // 0x24
		::RPG::Client::LittleGame::TRFOperate PODOMHHPEBG; // 0x28
		::System::Single IEHPFADHJFD; // 0x2C
		::System::UInt32 PDKOHKKMKLF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKFMEKPEMA_CTOR_OFFSET))(this);
		}

	};
