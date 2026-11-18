#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertySceneEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x103DFA80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x103DFA90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_WRITE_OFFSET UNITYSDK_OFFSET(0x103E0B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC__CTOR_OFFSET UNITYSDK_OFFSET(0x103E14B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySceneEmissionModifier_DGBCLGMGCGC_TypeDefinitionIndex = 77520;

	class ConfigMaterialPropertySceneEmissionModifier_DGBCLGMGCGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySceneEmissionModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySceneEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySceneEmissionModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySceneEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DGBCLGMGCGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
