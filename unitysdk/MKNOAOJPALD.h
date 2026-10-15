#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JIFJCBNMOHA;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKNOAOJPALD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A1320)

inline static constexpr unsigned int MKNOAOJPALD_TypeDefinitionIndex = 62124;

	class MKNOAOJPALD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JIFJCBNMOHA*>* KJCFCOMEBMD; // 0x10
		::RPG::GameCore::LevelGraphValueSource* DGKFAHEENCC; // 0x18
		::System::Nullable* LDDBFJDDNJO; // 0x20
		::System::Byte _padding0[0x8];
		::System::Nullable* KHOPAMJJINE; // 0x30
		::System::Byte _padding1[0xC];
		::System::Nullable* IHGHNPCIJKO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNOAOJPALD_CTOR_OFFSET))(this);
		}

	};
