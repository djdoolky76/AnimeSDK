#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DLKMIHDPILO_BJPFGDBBBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1061A010)
#define DLKMIHDPILO_BJPFGDBBBMN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x10618B30)

inline static constexpr unsigned int DLKMIHDPILO_BJPFGDBBBMN_TypeDefinitionIndex = 79144;

	class DLKMIHDPILO_BJPFGDBBBMN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* BJFJJPKBIJH; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* MEFLGMJLNIJ; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* IHMAFDEHKBH; // 0x20
		::UnityEngine::Quaternion ADOMOMAIGNM; // 0x28
		::System::Single DJCLLOAGJEE; // 0x38
		::System::Single CNOELHGCKJJ; // 0x3C
		::System::Boolean GAFBLCMLKDN; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 NKMFGLAOHOF; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_BJPFGDBBBMN_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_BJPFGDBBBMN_HADOHLNHHGB_OFFSET))(this);
		}

	};
