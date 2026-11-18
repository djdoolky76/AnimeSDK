#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigTextureSheet; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180CA200)
#define MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180CA210)
#define MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_WRITE_OFFSET UNITYSDK_OFFSET(0x180CA520)
#define MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x180CA6F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTextureSheet_EJNJMFIFMHI_TypeDefinitionIndex = 46719;

	class ConfigTextureSheet_EJNJMFIFMHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTextureSheet*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigTextureSheet*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_EJNJMFIFMHI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
