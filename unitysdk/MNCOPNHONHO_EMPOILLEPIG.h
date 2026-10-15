#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNCOPNHONHO_EMPOILLEPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA00AB0)

inline static constexpr unsigned int MNCOPNHONHO_EMPOILLEPIG_TypeDefinitionIndex = 76688;

	class MNCOPNHONHO_EMPOILLEPIG : public ::System::Object
	{
	public:
		::System::Action* BEKGCBCIODA; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* EPGHKAJKMKO; // 0x18
		::System::Int32 FEFFLFPMGOH; // 0x20
		::System::Boolean EJILNHIAEFK; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single IAEMAGAKOIC; // 0x28
		::System::Single KOIHMNKNKHM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO_EMPOILLEPIG_CTOR_OFFSET))(this);
		}

	};
