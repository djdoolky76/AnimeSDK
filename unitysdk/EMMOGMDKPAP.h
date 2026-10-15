#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FFLBMMLNLGC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }

#define EMMOGMDKPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x155535C0)
#define EMMOGMDKPAP_HPEBIALGDKG_OFFSET UNITYSDK_OFFSET(0x155548E0)
#define EMMOGMDKPAP_LJLDFLFOOHP_OFFSET UNITYSDK_OFFSET(0x155549D0)
#define EMMOGMDKPAP_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0x15554970)
#define EMMOGMDKPAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155535F0)

inline static constexpr unsigned int EMMOGMDKPAP_TypeDefinitionIndex = 54165;

	class EMMOGMDKPAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFLBMMLNLGC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFLBMMLNLGC*))((::PBYTE)hIl2Cpp + EMMOGMDKPAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMOGMDKPAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Nullable* HPEBIALGDKG(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + EMMOGMDKPAP_HPEBIALGDKG_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + EMMOGMDKPAP_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable* LJLDFLFOOHP(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMMOGMDKPAP_LJLDFLFOOHP_OFFSET))(this, a1);
		}

	};
