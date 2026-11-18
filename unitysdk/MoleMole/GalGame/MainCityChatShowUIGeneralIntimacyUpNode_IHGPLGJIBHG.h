#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F73E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F73F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F7840)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7B30)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7AF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIGeneralIntimacyUpNode_IHGPLGJIBHG_TypeDefinitionIndex = 91750;

	class MainCityChatShowUIGeneralIntimacyUpNode_IHGPLGJIBHG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_IHGPLGJIBHG_TypeDefinitionIndex)->GetStaticField(0x4E930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_IHGPLGJIBHG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
