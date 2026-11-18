#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A90D2B0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A90D2C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_WRITE_OFFSET UNITYSDK_OFFSET(0x1A90D4F0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90D650)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueColor_NOPJACCFHAO_TypeDefinitionIndex = 46017;

	class MaterialPropertyModifierValueColor_NOPJACCFHAO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueColor& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueColor& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_NOPJACCFHAO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
