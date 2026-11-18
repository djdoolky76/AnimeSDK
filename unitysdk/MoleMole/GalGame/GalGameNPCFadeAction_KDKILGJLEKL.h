#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130D9580)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130D9590)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_WRITE_OFFSET UNITYSDK_OFFSET(0x130D9EF0)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x130DA4B0)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL__CTOR_OFFSET UNITYSDK_OFFSET(0x130DA470)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_KDKILGJLEKL_TypeDefinitionIndex = 44942;

	class GalGameNPCFadeAction_KDKILGJLEKL
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_KDKILGJLEKL_TypeDefinitionIndex)->GetStaticField(0x34A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCFadeAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCFadeAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_KDKILGJLEKL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
