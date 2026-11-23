#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAE946DB9D3CB37B;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class LanePreset; }
namespace PampelGames::RoadConstructor { class Road; }
namespace PampelGames::RoadConstructor { class TrafficLaneEditor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define F77C0B948299CD47__CTOR_OFFSET UNITYSDK_OFFSET(0x3DAC170)

inline static constexpr unsigned int F77C0B948299CD47_TypeDefinitionIndex = 18906;

class F77C0B948299CD47 : public ::System::Object
{
public:
	::PampelGames::RoadConstructor::Road* BFB6C894910B2791; // 0x10
	::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF; // 0x18
	::UnityEngine::Material* A2C3E80E1EA9C7B7; // 0x20
	::System::Single F5EF7E29767E03BF; // 0x28
	::System::Int32 F42689B146774BE7; // 0x2C
	::System::Int32 E7D62756804B46C9; // 0x30
	::System::Single B66607F939B2334E; // 0x34
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* A7E4C2E687E18F68; // 0x38
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* E3DD4978FA8706F9; // 0x40
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* F0C5A75239A3ADC1; // 0x48
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* F0E15E3F0F1CF562; // 0x50
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* BA46109AB3C5BCB0; // 0x58
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* EE302B86F594E418; // 0x60
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* E378320593F85140; // 0x68
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* B4EE160C91511C37; // 0x70
	::System::Single BB5D9880B2F9A67C; // 0x78
	::System::Single A9A4F32F3BFC854A; // 0x7C
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* E95805A4DA712D3C; // 0x80
	::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* B2A2E37F04F6E10F; // 0x88
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>* A087C4B223F24A76; // 0x90

	::System::Void _ctor(::PampelGames::RoadConstructor::Road* BFB6C894910B2791, ::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::LanePreset*>* E8537494C174B278)
	{
		return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::Road*, ::PampelGames::RoadConstructor::ComponentSettings*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::LanePreset*>*))((::PBYTE)hIl2Cpp + F77C0B948299CD47__CTOR_OFFSET))(this, BFB6C894910B2791, B657584D50B81BBF, E8537494C174B278);
	}
};
