#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJMPCBPFHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x194C9560)
#define OJMPCBPFHHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194C94C0)

inline static constexpr unsigned int OJMPCBPFHHK_TypeDefinitionIndex = 58565;

	class OJMPCBPFHHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LMENPEICODO; // 0x10
		::RPG::GameCore::GameEntity* BNIJLOABKBB; // 0x18
		::RPG::GameCore::GameEntity* EHANABPPLEC; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* AIBBMKLENFD; // 0x28
		::RPG::GameCore::GameEntity* OINNHCJMJOI; // 0x30
		::System::Boolean CKHGBLNGPBN; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 JDCEFMHKOGC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMPCBPFHHK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMPCBPFHHK_DISPOSE_OFFSET))(this);
		}

	};
