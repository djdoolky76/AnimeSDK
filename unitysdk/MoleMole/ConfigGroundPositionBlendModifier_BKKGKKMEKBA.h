#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8BAAF0)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8BAB00)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8BAF50)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BB1E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGroundPositionBlendModifier_BKKGKKMEKBA_TypeDefinitionIndex = 66761;

	class ConfigGroundPositionBlendModifier_BKKGKKMEKBA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGroundPositionBlendModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigGroundPositionBlendModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_BKKGKKMEKBA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
