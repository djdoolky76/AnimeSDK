#pragma once
#include "unitysdk/unitysdk.h"
class NEPGNCEMJKN;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COGLAPMFNAM_AIOABAGGGAE_OFFSET UNITYSDK_OFFSET(0xDCB07C0)
#define COGLAPMFNAM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB0420)
#define COGLAPMFNAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB0450)
#define COGLAPMFNAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB0640)

inline static constexpr unsigned int COGLAPMFNAM_TypeDefinitionIndex = 53877;

	class COGLAPMFNAM
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* GHEGGAPHHBM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NEPGNCEMJKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NEPGNCEMJKN*))((::PBYTE)hIl2Cpp + COGLAPMFNAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGLAPMFNAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGLAPMFNAM_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphComponent* AIOABAGGGAE(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COGLAPMFNAM_AIOABAGGGAE_OFFSET))(this, a1);
		}

	};
