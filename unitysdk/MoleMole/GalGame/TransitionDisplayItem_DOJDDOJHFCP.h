#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE4E30)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE4E40)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE5150)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EE5390)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE5350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionDisplayItem_DOJDDOJHFCP_TypeDefinitionIndex = 88567;

	class TransitionDisplayItem_DOJDDOJHFCP
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_DOJDDOJHFCP_TypeDefinitionIndex)->GetStaticField(0x4AA30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionDisplayItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionDisplayItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_DOJDDOJHFCP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
