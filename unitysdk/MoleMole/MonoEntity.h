#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/NKOFJNNCJHA.h"

#define MOLEMOLE_MONOENTITY_GET_SUBTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x162E0DD0)
#define MOLEMOLE_MONOENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x162E0EF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntity_TypeDefinitionIndex = 72187;

	class MonoEntity : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::NKOFJNNCJHA Type; // 0x38
		::System::Int32 TemplateID; // 0x3C
		::System::Int32 AIID; // 0x40
		::MoleMole::Config::CampType campType; // 0x44
		::System::Int32 MAFHHPKGGLP; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITY_GET_SUBTEMPLATEID_OFFSET))(this);
		}
	};
}
