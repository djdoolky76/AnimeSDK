#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIControlReference; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16EBC1D0)
#define MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16EBC1E0)
#define MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_WRITE_OFFSET UNITYSDK_OFFSET(0x16EBC2B0)
#define MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBC360)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_HILMJJOHHHE_TypeDefinitionIndex = 80230;

	class UIControlReference_HILMJJOHHHE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIControlReference*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlReference*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIControlReference*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_HILMJJOHHHE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
