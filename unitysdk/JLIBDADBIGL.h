#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/System/Object.h"
class DNFFEFPKDPC;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define JLIBDADBIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2FE0)

inline static constexpr unsigned int JLIBDADBIGL_TypeDefinitionIndex = 43176;

	class JLIBDADBIGL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DNFFEFPKDPC*>* EGGCADJJJOD; // 0x10
		::UnityEngine::GameObject* CDANMPGNPHN; // 0x18
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType LINLNNHIBAK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIBDADBIGL_CTOR_OFFSET))(this);
		}

	};
