#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180FB460)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180FB470)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_WRITE_OFFSET UNITYSDK_OFFSET(0x180FB600)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL__CTOR_OFFSET UNITYSDK_OFFSET(0x180FB720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallScratch_HEIHKOAAFEL_TypeDefinitionIndex = 51889;

	class MonoEffectPluginHitWallScratch_HEIHKOAAFEL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginHitWallScratch*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginHitWallScratch*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_HEIHKOAAFEL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
