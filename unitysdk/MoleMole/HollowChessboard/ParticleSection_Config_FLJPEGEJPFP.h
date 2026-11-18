#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ParticleSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EF130)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EF140)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_WRITE_OFFSET UNITYSDK_OFFSET(0x180EF210)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x180EF2C0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_Config_FLJPEGEJPFP_TypeDefinitionIndex = 63451;

	class ParticleSection_Config_FLJPEGEJPFP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ParticleSection_Config*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection_Config*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ParticleSection_Config*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection_Config*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_FLJPEGEJPFP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
