#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class LightOverrideShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B4F4A0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B4F4B0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_WRITE_OFFSET UNITYSDK_OFFSET(0x12B4F640)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4F760)

namespace MoleMole
{
	inline static constexpr unsigned int LightOverrideShowSetting_MPGIGAAPPIL_TypeDefinitionIndex = 70390;

	class LightOverrideShowSetting_MPGIGAAPPIL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::LightOverrideShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::LightOverrideShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_MPGIGAAPPIL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
