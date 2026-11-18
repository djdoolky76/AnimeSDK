#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneHideUI; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B87480)
#define MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B87490)
#define MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_WRITE_OFFSET UNITYSDK_OFFSET(0x18B87B60)
#define MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B87F50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHideUI_ECMKDPGJCCL_TypeDefinitionIndex = 81714;

	class AnimatorZoneHideUI_ECMKDPGJCCL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneHideUI*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHideUI*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneHideUI*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHideUI*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHIDEUI_ECMKDPGJCCL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
