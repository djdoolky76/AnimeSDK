#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace System { class Object; }

#define DEFIOMELEOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7140)

inline static constexpr unsigned int DEFIOMELEOC_TypeDefinitionIndex = 43786;

	class DEFIOMELEOC : public ::System::Object
	{
	public:
		::System::Object* AKEHPNKLMEK; // 0x10
		::RPG::MVector3 LJDHGFECMHJ; // 0x18
		::System::Int32 AHGIENEMKFI; // 0x24
		::UnityEngine::Vector3Int GOOAMHHLHPJ; // 0x28
		::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFIOMELEOC_CTOR_OFFSET))(this);
		}

	};
