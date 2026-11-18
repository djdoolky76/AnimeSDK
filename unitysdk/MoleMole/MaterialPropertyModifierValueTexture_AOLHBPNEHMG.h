#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A90D6B0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A90D6C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A90DB40)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90DDC0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueTexture_AOLHBPNEHMG_TypeDefinitionIndex = 88959;

	class MaterialPropertyModifierValueTexture_AOLHBPNEHMG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueTexture& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueTexture& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_AOLHBPNEHMG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
