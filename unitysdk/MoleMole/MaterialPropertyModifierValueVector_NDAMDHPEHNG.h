#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B50EE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B50EF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_WRITE_OFFSET UNITYSDK_OFFSET(0x12B511C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B51370)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVector_NDAMDHPEHNG_TypeDefinitionIndex = 57724;

	class MaterialPropertyModifierValueVector_NDAMDHPEHNG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueVector& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueVector& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_NDAMDHPEHNG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
