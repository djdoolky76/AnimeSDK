#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLinearStepStairDamper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B941CA0)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B941CB0)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_WRITE_OFFSET UNITYSDK_OFFSET(0x1B9422F0)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9426A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearStepStairDamper_JHOAMGOJKGC_TypeDefinitionIndex = 75300;

	class ConfigLinearStepStairDamper_JHOAMGOJKGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLinearStepStairDamper*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLinearStepStairDamper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigLinearStepStairDamper*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLinearStepStairDamper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_JHOAMGOJKGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
