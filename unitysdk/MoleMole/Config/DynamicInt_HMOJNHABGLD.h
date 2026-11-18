#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicInt; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6DFB00)
#define MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6DFB10)
#define MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6DFD90)
#define MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DFF40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicInt_HMOJNHABGLD_TypeDefinitionIndex = 91559;

	class DynamicInt_HMOJNHABGLD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicInt*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicInt*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::DynamicInt*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicInt*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_HMOJNHABGLD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
