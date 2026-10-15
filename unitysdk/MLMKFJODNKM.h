#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define MLMKFJODNKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B3F30)
#define MLMKFJODNKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B4620)
#define MLMKFJODNKM_EAFIFAFCEOJ_OFFSET UNITYSDK_OFFSET(0xB9B3F60)
#define MLMKFJODNKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B4290)

inline static constexpr unsigned int MLMKFJODNKM_TypeDefinitionIndex = 58356;

	class MLMKFJODNKM
	{
	public:
		::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x28
		::System::Boolean OMOOBJJFMFH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupUITrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupUITrigger*))((::PBYTE)hIl2Cpp + MLMKFJODNKM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID EAFIFAFCEOJ()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMKFJODNKM_EAFIFAFCEOJ_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMKFJODNKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMKFJODNKM_DISPOSE_OFFSET))(this);
		}

	};
