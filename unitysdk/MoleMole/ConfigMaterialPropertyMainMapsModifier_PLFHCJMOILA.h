#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyMainMapsModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19268360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19268370)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_WRITE_OFFSET UNITYSDK_OFFSET(0x1926D260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA__CTOR_OFFSET UNITYSDK_OFFSET(0x19270140)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_PLFHCJMOILA_TypeDefinitionIndex = 40664;

	class ConfigMaterialPropertyMainMapsModifier_PLFHCJMOILA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyMainMapsModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMainMapsModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyMainMapsModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMainMapsModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PLFHCJMOILA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
