#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamPassThrough; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE1930)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE1940)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE1A10)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1AC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamPassThrough_DLDILOHIPEG_TypeDefinitionIndex = 78479;

	class MainCityChatCameraParamPassThrough_DLDILOHIPEG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_DLDILOHIPEG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
