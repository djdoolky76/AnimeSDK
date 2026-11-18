#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneDroneVerticalMove; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E74DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E74DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_WRITE_OFFSET UNITYSDK_OFFSET(0x11E75800)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E75DB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDroneVerticalMove_DCMDHMEMKHA_TypeDefinitionIndex = 70419;

	class AnimatorZoneDroneVerticalMove_DCMDHMEMKHA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDroneVerticalMove*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDroneVerticalMove*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDroneVerticalMove*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDroneVerticalMove*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_DCMDHMEMKHA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
