#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAGAFPDHLCK_BFEEDDEBNLH.h"
namespace System { class Object; }

#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ANFGPMPBODF_CLONE_OFFSET UNITYSDK_OFFSET(0xEF66370)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ANFGPMPBODF_CTOR_OFFSET UNITYSDK_OFFSET(0xEF66320)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MeshGeneratorBase_ANFGPMPBODF_TypeDefinitionIndex = 53134;

	class BGCurvePCG_MeshGeneratorBase_ANFGPMPBODF : public ::HAGAFPDHLCK_BFEEDDEBNLH
	{
	public:
		::System::Single OLLPMCIJNPD; // 0x50
		::System::Single EJKGJKBDMMJ; // 0x54
		::System::Single KJJLMBOOIMG; // 0x58
		::System::Single BJOCBPFKJDP; // 0x5C
		::System::Single HLPIIANJHLN; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ANFGPMPBODF_CTOR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ANFGPMPBODF_CLONE_OFFSET))(this);
		}

	};
}
