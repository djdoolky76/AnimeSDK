#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamFixed; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16246AF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16246B00)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_WRITE_OFFSET UNITYSDK_OFFSET(0x16246D80)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16246F30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamFixed_LGJFLPFHKGN_TypeDefinitionIndex = 63915;

	class MainCityChatCameraParamFixed_LGJFLPFHKGN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamFixed*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamFixed*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_LGJFLPFHKGN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
