#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorRendererShadowCastingMode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163F9AF0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163F9B00)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_WRITE_OFFSET UNITYSDK_OFFSET(0x163FA090)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163FA3D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorRendererShadowCastingMode_IBDGGJFAHFO_TypeDefinitionIndex = 80100;

	class AnimatorRendererShadowCastingMode_IBDGGJFAHFO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorRendererShadowCastingMode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorRendererShadowCastingMode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorRendererShadowCastingMode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorRendererShadowCastingMode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_IBDGGJFAHFO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
