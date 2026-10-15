#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JIFJCBNMOHA;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKNOAOJPALD_CTOR_OFFSET UNITYSDK_OFFSET(0xB99B4D0)

inline static constexpr unsigned int MKNOAOJPALD_TypeDefinitionIndex = 62124;

	class MKNOAOJPALD : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphValueSource* DGKFAHEENCC; // 0x10
		::System::Collections::Generic::List_1<::JIFJCBNMOHA*>* KJCFCOMEBMD; // 0x18
		::System::Nullable_1<::UnityEngine::Vector3> LDDBFJDDNJO; // 0x20
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::UnityEngine::Quaternion> KHOPAMJJINE; // 0x30
		::System::Byte _padding1[0xC];
		::System::Nullable_1<::RPG::GameCore::PropState> IHGHNPCIJKO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNOAOJPALD_CTOR_OFFSET))(this);
		}

	};
