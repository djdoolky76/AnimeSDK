#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9214B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9214C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_WRITE_OFFSET UNITYSDK_OFFSET(0x1B921870)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardParticle_ODLPNOIIEEA_TypeDefinitionIndex = 49164;

	class ConfigHollowChessboardParticle_ODLPNOIIEEA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardParticle*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardParticle*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_ODLPNOIIEEA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
