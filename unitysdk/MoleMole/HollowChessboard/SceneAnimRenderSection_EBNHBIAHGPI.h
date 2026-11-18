#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139EB710)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139EB720)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_WRITE_OFFSET UNITYSDK_OFFSET(0x139EB8B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x139EBA40)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI__CTOR_OFFSET UNITYSDK_OFFSET(0x139EBA00)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_EBNHBIAHGPI_TypeDefinitionIndex = 58152;

	class SceneAnimRenderSection_EBNHBIAHGPI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_EBNHBIAHGPI_TypeDefinitionIndex)->GetStaticField(0x44C20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::SceneAnimRenderSection*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::SceneAnimRenderSection*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_EBNHBIAHGPI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
