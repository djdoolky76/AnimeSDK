#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAvatarCameraSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A32F970)
#define MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A32F980)
#define MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_WRITE_OFFSET UNITYSDK_OFFSET(0x1A330780)
#define MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A330FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_DCMLKLEDGAN_TypeDefinitionIndex = 91082;

	class UIAvatarCameraSetting_DCMLKLEDGAN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarCameraSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAvatarCameraSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_DCMLKLEDGAN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
