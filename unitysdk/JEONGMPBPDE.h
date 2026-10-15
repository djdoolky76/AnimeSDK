#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
class JHOLLBGPLAE;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define JEONGMPBPDE_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0x1662E560)
#define JEONGMPBPDE_CLEJNNGJGLO_OFFSET UNITYSDK_OFFSET(0x1662E430)
#define JEONGMPBPDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1662E0B0)
#define JEONGMPBPDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1662E0C0)

inline static constexpr unsigned int JEONGMPBPDE_TypeDefinitionIndex = 52681;

	class JEONGMPBPDE : public ::CMMNJAMJJCN
	{
	public:
		::JHOLLBGPLAE* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JHOLLBGPLAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JHOLLBGPLAE*))((::PBYTE)hIl2Cpp + JEONGMPBPDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONGMPBPDE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEONGMPBPDE_BLBGBLLHDAB_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesGameInstance* CLEJNNGJGLO()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONGMPBPDE_CLEJNNGJGLO_OFFSET))(this);
		}

	};
