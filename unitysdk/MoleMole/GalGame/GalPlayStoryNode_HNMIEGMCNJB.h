#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D1EE40)
#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D1EE50)
#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_WRITE_OFFSET UNITYSDK_OFFSET(0x10D1FB80)
#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D20360)
#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D20320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayStoryNode_HNMIEGMCNJB_TypeDefinitionIndex = 44662;

	class GalPlayStoryNode_HNMIEGMCNJB
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayStoryNode_HNMIEGMCNJB_TypeDefinitionIndex)->GetStaticField(0x38910);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE_HNMIEGMCNJB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
