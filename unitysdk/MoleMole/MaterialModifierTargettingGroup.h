#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MaterialModifierTargetting; }
namespace MoleMole { class MonoRenderHandler; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_BEHBICFEDOO_OFFSET UNITYSDK_OFFSET(0x139EDCF0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139EDA90)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_GDBDBFPPENB_OFFSET UNITYSDK_OFFSET(0x139EE8D0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_JICDCGLAPLM_OFFSET UNITYSDK_OFFSET(0x139EDF10)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_MHOJEGNDNAG_OFFSET UNITYSDK_OFFSET(0x139EDEC0)
#define MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x139EDC70)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargettingGroup_TypeDefinitionIndex = 64586;

	class MaterialModifierTargettingGroup : public ::System::Object
	{
	public:
		::System::Boolean applyAllRenderers; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::MaterialModifierTargetting*>* targettingList; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _materialList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void BEHBICFEDOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_BEHBICFEDOO_OFFSET))(this);
		}

		::System::Void MHOJEGNDNAG(::MoleMole::MaterialModifierTargetting* CMGGOHFADAH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialModifierTargetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_MHOJEGNDNAG_OFFSET))(this, CMGGOHFADAH);
		}

		::Il2CppArray<::UnityEngine::Material*>* JICDCGLAPLM(::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_JICDCGLAPLM_OFFSET))(this, AOKHOHCJNFJ);
		}

		::System::Void GDBDBFPPENB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTINGGROUP_GDBDBFPPENB_OFFSET))(this);
		}
	};
}
