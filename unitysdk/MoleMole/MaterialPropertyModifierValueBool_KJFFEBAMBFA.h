#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AF25E0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AF25F0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_WRITE_OFFSET UNITYSDK_OFFSET(0x14AF2810)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF2970)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueBool_KJFFEBAMBFA_TypeDefinitionIndex = 89426;

	class MaterialPropertyModifierValueBool_KJFFEBAMBFA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueBool& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueBool& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_KJFFEBAMBFA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
