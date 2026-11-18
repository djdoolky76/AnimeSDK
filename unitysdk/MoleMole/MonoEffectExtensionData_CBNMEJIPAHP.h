#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectExtensionData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180FA7C0)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180FA7D0)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_WRITE_OFFSET UNITYSDK_OFFSET(0x180FAB80)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x180FADB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionData_CBNMEJIPAHP_TypeDefinitionIndex = 43427;

	class MonoEffectExtensionData_CBNMEJIPAHP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectExtensionData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectExtensionData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CBNMEJIPAHP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
