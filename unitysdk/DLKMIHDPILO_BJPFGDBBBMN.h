#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DLKMIHDPILO_BJPFGDBBBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x18678C50)
#define DLKMIHDPILO_BJPFGDBBBMN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x18677760)

inline static constexpr unsigned int DLKMIHDPILO_BJPFGDBBBMN_TypeDefinitionIndex = 79143;

	class DLKMIHDPILO_BJPFGDBBBMN : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* MEFLGMJLNIJ; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* IHMAFDEHKBH; // 0x18
		::UnityEngine::Transform* BJFJJPKBIJH; // 0x20
		::System::Boolean GAFBLCMLKDN; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion ADOMOMAIGNM; // 0x2C
		::System::Single CNOELHGCKJJ; // 0x3C
		::UnityEngine::Vector3 NKMFGLAOHOF; // 0x40
		::System::Single DJCLLOAGJEE; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_BJPFGDBBBMN_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_BJPFGDBBBMN_HADOHLNHHGB_OFFSET))(this);
		}

	};
