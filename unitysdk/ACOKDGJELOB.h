#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class MKADHMMGGNA;

#define ACOKDGJELOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB12AC60)
#define ACOKDGJELOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB12AB20)
#define ACOKDGJELOB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB12ABA0)

	class ACOKDGJELOB : public ::System::Object
	{
	public:
		::MKADHMMGGNA* MIOJKIMPHLL; // 0x10
		::RPG::Client::Prop::DestroyRootPuzzleBlockType CFGEJHAOKED; // 0x18
		::System::Int32 DDKCJIPLMFO; // 0x1C
		::UnityEngine::Vector2Int ANDBJNJOHDD; // 0x20
		::UnityEngine::Vector2Int BBFOLEOPPPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOKDGJELOB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOKDGJELOB_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOKDGJELOB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
