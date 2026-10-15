#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }

#define DMPMGGKKIBH_MJEJFGGAIPL_CTOR_OFFSET UNITYSDK_OFFSET(0x119381A0)

inline static constexpr unsigned int DMPMGGKKIBH_MJEJFGGAIPL_TypeDefinitionIndex = 74222;

	class DMPMGGKKIBH_MJEJFGGAIPL : public ::System::Object
	{
	public:
		::BGCurveExtention* NLIFDJHPHLP; // 0x10
		::Il2CppArray<::System::Single>* FOCMONGCHAB; // 0x18
		::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* FCIAHLPCPFJ; // 0x20
		::System::Single BJOCBPFKJDP; // 0x28
		::System::Int32 GMDBHJKEAEI; // 0x2C
		::UnityEngine::Vector2Int OOFCOHBIAKL; // 0x30
		::System::Single MNIHEIFNDDK; // 0x38
		::System::Single CCNNMJEEHBG; // 0x3C
		::System::Single FOCJKDOFNJO; // 0x40
		::System::Single EEAMPCENMOD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPMGGKKIBH_MJEJFGGAIPL_CTOR_OFFSET))(this);
		}

	};
