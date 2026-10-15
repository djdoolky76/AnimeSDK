#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMOKODEPHA.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define HBGIMIPDNDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF6520)
#define HBGIMIPDNDF_HOLJIGECJHC_OFFSET UNITYSDK_OFFSET(0x15BF6790)
#define HBGIMIPDNDF_MOCNBEEIPPE_OFFSET UNITYSDK_OFFSET(0x15BF65E0)
#define HBGIMIPDNDF_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x15BF68C0)

inline static constexpr unsigned int HBGIMIPDNDF_TypeDefinitionIndex = 57684;

	class HBGIMIPDNDF : public ::System::Object
	{
	public:
		::Il2CppArray<::FBMOKODEPHA>* KMFILPPLHEJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGIMIPDNDF_CTOR_OFFSET))(this);
		}

		::System::Void MOCNBEEIPPE(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillPropertyModifyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBGIMIPDNDF_MOCNBEEIPPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOLJIGECJHC(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillPropertyModifyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBGIMIPDNDF_HOLJIGECJHC_OFFSET))(this, a1, a2, a3);
		}

		::FBMOKODEPHA PEFLJDOKOIL(::RPG::GameCore::SkillPropertyType a1)
		{
			return ((::FBMOKODEPHA(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + HBGIMIPDNDF_PEFLJDOKOIL_OFFSET))(this, a1);
		}

	};
