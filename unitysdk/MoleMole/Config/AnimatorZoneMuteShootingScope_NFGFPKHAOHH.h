#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteShootingScope; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174F09C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174F09D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_WRITE_OFFSET UNITYSDK_OFFSET(0x174F0E20)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH__CTOR_OFFSET UNITYSDK_OFFSET(0x174F10B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteShootingScope_NFGFPKHAOHH_TypeDefinitionIndex = 68767;

	class AnimatorZoneMuteShootingScope_NFGFPKHAOHH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteShootingScope*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteShootingScope*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteShootingScope*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteShootingScope*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESHOOTINGSCOPE_NFGFPKHAOHH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
