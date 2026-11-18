#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIControllerExtension; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17059FC0)
#define MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17059FD0)
#define MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_WRITE_OFFSET UNITYSDK_OFFSET(0x1705A4D0)
#define MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1705A7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerExtension_APBHDGODMJN_TypeDefinitionIndex = 86007;

	class UIControllerExtension_APBHDGODMJN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIControllerExtension*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerExtension*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIControllerExtension*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerExtension*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_APBHDGODMJN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
