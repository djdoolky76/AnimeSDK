#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
class KMAPEPBHBFB;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define FFBPACEFGJB_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0x130D6A60)
#define FFBPACEFGJB_CLEJNNGJGLO_OFFSET UNITYSDK_OFFSET(0x130D6930)
#define FFBPACEFGJB_CTOR_OFFSET UNITYSDK_OFFSET(0x130D65A0)
#define FFBPACEFGJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130D65B0)

inline static constexpr unsigned int FFBPACEFGJB_TypeDefinitionIndex = 53787;

	class FFBPACEFGJB : public ::CMMNJAMJJCN
	{
	public:
		::KMAPEPBHBFB* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KMAPEPBHBFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KMAPEPBHBFB*))((::PBYTE)hIl2Cpp + FFBPACEFGJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPACEFGJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFBPACEFGJB_BLBGBLLHDAB_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesGameInstance* CLEJNNGJGLO()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPACEFGJB_CLEJNNGJGLO_OFFSET))(this);
		}

	};
