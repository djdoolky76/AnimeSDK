#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicFloat; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B22890)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B228A0)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_WRITE_OFFSET UNITYSDK_OFFSET(0x19B22B20)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19B22CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicFloat_LBIGEKMBLLJ_TypeDefinitionIndex = 88448;

	class DynamicFloat_LBIGEKMBLLJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicFloat*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicFloat*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::DynamicFloat*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicFloat*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_LBIGEKMBLLJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
