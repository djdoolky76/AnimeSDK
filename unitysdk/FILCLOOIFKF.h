#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/RoomTransitionBlockReason.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/RoomTransitionPhase.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FILCLOOIFKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC322D0)

inline static constexpr unsigned int FILCLOOIFKF_TypeDefinitionIndex = 44186;

	class FILCLOOIFKF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PIFJCAJBHCM; // 0x10
		::System::String* OGFLPOOBLAA; // 0x18
		::System::String* PAINPIBDEBK; // 0x20
		::System::Boolean DJANLDACBOF; // 0x28
		::System::Boolean INBADAFCGPF; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single HLHBKPCPJDD; // 0x2C
		::System::Int32 BMHEKPMMDGE; // 0x30
		::System::Int32 JCNHEKMLLPG; // 0x34
		::System::Boolean HDPJEEMEHBB; // 0x38
		::System::Boolean CGGNMDDDFEC; // 0x39
		::System::Boolean CDPFBPAHAGJ; // 0x3A
		::System::Boolean OFODDPLIAMP; // 0x3B
		::System::Boolean JILFPJINNPM; // 0x3C
		::System::Boolean JMECMFAEMKH; // 0x3D
		::System::Boolean ANLEJKPHIDL; // 0x3E
		::System::Boolean PKFOGEALGII; // 0x3F
		::System::Single BIGBJBOOBDP; // 0x40
		::System::Single EFNPPLNFNDK; // 0x44
		::System::Int32 MOLABKINLGL; // 0x48
		::System::Single OKMIHOFAJJJ; // 0x4C
		::System::Boolean AKKEJGCGELO; // 0x50
		::System::Boolean CBAPEBGMIOK; // 0x51
		::System::Boolean HNENMINLBJC; // 0x52
		::System::Byte _padding1[0x1];
		::System::Single JAMIMBDPKAE; // 0x54
		::System::Int32 PHEIAAEPDOJ; // 0x58
		::System::Single NLAPHKJMIJL; // 0x5C
		::System::Single CJCMLPBPGBO; // 0x60
		::RPG::Client::LittleGame::FourRotateVoxel::RoomTransitionPhase PPOIJHJIMLL; // 0x64
		::System::Int32 MFKNNKNLDEE; // 0x68
		::System::Single CCLFLJEPDLF; // 0x6C
		::System::Single BFMFHGEEAKG; // 0x70
		::System::Single MCBAMHDJBPF; // 0x74
		::System::Single JMJKMMLLKKF; // 0x78
		::RPG::Client::LittleGame::FourRotateVoxel::RoomTransitionBlockReason COAJDDENBIG; // 0x7C
		::System::Single GALHGHOGBBE; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCLOOIFKF_CTOR_OFFSET))(this);
		}

	};
