#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalWhiteSwitchSceneNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1466A590)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1466A5A0)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_WRITE_OFFSET UNITYSDK_OFFSET(0x1466ABD0)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1466AFD0)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1466AF90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalWhiteSwitchSceneNode_DAILJDADKEK_TypeDefinitionIndex = 73559;

	class GalWhiteSwitchSceneNode_DAILJDADKEK
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_DAILJDADKEK_TypeDefinitionIndex)->GetStaticField(0x4C0F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalWhiteSwitchSceneNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalWhiteSwitchSceneNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalWhiteSwitchSceneNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalWhiteSwitchSceneNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_DAILJDADKEK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
