#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchSceneGroupNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10424190)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x104241A0)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_WRITE_OFFSET UNITYSDK_OFFSET(0x10424550)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM__CCTOR_OFFSET UNITYSDK_OFFSET(0x104247E0)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM__CTOR_OFFSET UNITYSDK_OFFSET(0x104247A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchSceneGroupNode_CMBPJAJNADM_TypeDefinitionIndex = 41674;

	class GalSwitchSceneGroupNode_CMBPJAJNADM
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_CMBPJAJNADM_TypeDefinitionIndex)->GetStaticField(0x3BEB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchSceneGroupNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchSceneGroupNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CMBPJAJNADM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
