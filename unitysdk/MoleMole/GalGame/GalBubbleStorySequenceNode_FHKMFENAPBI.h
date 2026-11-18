#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleStorySequenceNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180E9E10)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180E9E20)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_WRITE_OFFSET UNITYSDK_OFFSET(0x180EA310)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x180EA650)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI__CTOR_OFFSET UNITYSDK_OFFSET(0x180EA610)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_FHKMFENAPBI_TypeDefinitionIndex = 65347;

	class GalBubbleStorySequenceNode_FHKMFENAPBI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_FHKMFENAPBI_TypeDefinitionIndex)->GetStaticField(0x520F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStorySequenceNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStorySequenceNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_FHKMFENAPBI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
