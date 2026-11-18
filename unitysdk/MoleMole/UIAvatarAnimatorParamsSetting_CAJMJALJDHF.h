#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x199211A0)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x199211B0)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_WRITE_OFFSET UNITYSDK_OFFSET(0x19921560)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x19921790)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarAnimatorParamsSetting_CAJMJALJDHF_TypeDefinitionIndex = 72140;

	class UIAvatarAnimatorParamsSetting_CAJMJALJDHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarAnimatorParamsSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAvatarAnimatorParamsSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_CAJMJALJDHF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
