#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define BBBEMIEOGAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E82750)
#define BBBEMIEOGAG_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x15E82710)
#define BBBEMIEOGAG_GET__ROW_OFFSET UNITYSDK_OFFSET(0x15E82700)

inline static constexpr unsigned int BBBEMIEOGAG_TypeDefinitionIndex = 63355;

	class BBBEMIEOGAG : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelChimeraPresetRow* __Row_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*))((::PBYTE)hIl2Cpp + BBBEMIEOGAG_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelChimeraPresetRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBEMIEOGAG_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelChimeraPresetRow* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBEMIEOGAG_FMHKLHAKMKO_OFFSET))(this);
		}

	};
