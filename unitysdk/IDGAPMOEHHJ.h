#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageMonsterWave; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDGAPMOEHHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC8B70)

inline static constexpr unsigned int IDGAPMOEHHJ_TypeDefinitionIndex = 62883;

	class IDGAPMOEHHJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LMCEMONKPIH; // 0x10
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* PAJGJEBAMCO; // 0x18
		::System::UInt32 ALOPEGJPAKK; // 0x20
		::System::UInt32 DOBKKDIECDO; // 0x24
		::JJMFOABLOCE KCCMPMDHHEI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGAPMOEHHJ_CTOR_OFFSET))(this);
		}

	};
