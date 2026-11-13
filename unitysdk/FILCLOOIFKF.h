#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/RoomTransitionBlockReason.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/RoomTransitionPhase.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FILCLOOIFKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20AC80)

inline static constexpr unsigned int FILCLOOIFKF_TypeDefinitionIndex = 44186;

	class FILCLOOIFKF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PIFJCAJBHCM; // 0x10
		::System::String* OGFLPOOBLAA; // 0x18
		::System::String* PAINPIBDEBK; // 0x20
		::System::Int32 JCNHEKMLLPG; // 0x28
		::System::Boolean PKFOGEALGII; // 0x2C
		::System::Boolean OFODDPLIAMP; // 0x2D
		::System::Boolean AKKEJGCGELO; // 0x2E
		::System::Boolean CBAPEBGMIOK; // 0x2F
		::System::Boolean CGGNMDDDFEC; // 0x30
		::System::Boolean HNENMINLBJC; // 0x31
		::System::Boolean JMECMFAEMKH; // 0x32
		::System::Byte _padding0[0x1];
		::System::Int32 MOLABKINLGL; // 0x34
		::System::Single JAMIMBDPKAE; // 0x38
		::RPG::Client::LittleGame::FourRotateVoxel::RoomTransitionBlockReason COAJDDENBIG; // 0x3C
		::System::Single EFNPPLNFNDK; // 0x40
		::System::Int32 PHEIAAEPDOJ; // 0x44
		::System::Boolean CDPFBPAHAGJ; // 0x48
		::System::Boolean DJANLDACBOF; // 0x49
		::System::Boolean INBADAFCGPF; // 0x4A
		::System::Boolean HDPJEEMEHBB; // 0x4B
		::System::Single BIGBJBOOBDP; // 0x4C
		::System::Single CCLFLJEPDLF; // 0x50
		::System::Single BFMFHGEEAKG; // 0x54
		::System::Single CJCMLPBPGBO; // 0x58
		::System::Boolean ANLEJKPHIDL; // 0x5C
		::System::Boolean JILFPJINNPM; // 0x5D
		::System::Byte _padding1[0x2];
		::System::Single MCBAMHDJBPF; // 0x60
		::System::Int32 MFKNNKNLDEE; // 0x64
		::System::Int32 BMHEKPMMDGE; // 0x68
		::RPG::Client::LittleGame::FourRotateVoxel::RoomTransitionPhase PPOIJHJIMLL; // 0x6C
		::System::Single JMJKMMLLKKF; // 0x70
		::System::Single GALHGHOGBBE; // 0x74
		::System::Single OKMIHOFAJJJ; // 0x78
		::System::Single NLAPHKJMIJL; // 0x7C
		::System::Single HLHBKPCPJDD; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCLOOIFKF_CTOR_OFFSET))(this);
		}

	};
