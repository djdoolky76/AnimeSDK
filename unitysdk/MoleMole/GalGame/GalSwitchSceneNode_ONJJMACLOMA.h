#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchSceneNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1357C180)
#define MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1357C190)
#define MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_WRITE_OFFSET UNITYSDK_OFFSET(0x1357C7C0)
#define MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1357CBC0)
#define MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1357CB80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchSceneNode_ONJJMACLOMA_TypeDefinitionIndex = 49290;

	class GalSwitchSceneNode_ONJJMACLOMA
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneNode_ONJJMACLOMA_TypeDefinitionIndex)->GetStaticField(0x50C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchSceneNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchSceneNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENENODE_ONJJMACLOMA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
