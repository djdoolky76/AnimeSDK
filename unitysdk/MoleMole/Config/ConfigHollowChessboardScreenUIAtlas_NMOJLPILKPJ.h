#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboardScreenUIAtlas; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19241620)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19241630)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_WRITE_OFFSET UNITYSDK_OFFSET(0x192417D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x192418F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardScreenUIAtlas_NMOJLPILKPJ_TypeDefinitionIndex = 87476;

	class ConfigHollowChessboardScreenUIAtlas_NMOJLPILKPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_NMOJLPILKPJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
