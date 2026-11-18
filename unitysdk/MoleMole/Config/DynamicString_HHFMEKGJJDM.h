#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92F910)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92F920)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B92FBA0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92FD50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicString_HHFMEKGJJDM_TypeDefinitionIndex = 43100;

	class DynamicString_HHFMEKGJJDM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicString*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicString*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::DynamicString*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicString*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_HHFMEKGJJDM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
