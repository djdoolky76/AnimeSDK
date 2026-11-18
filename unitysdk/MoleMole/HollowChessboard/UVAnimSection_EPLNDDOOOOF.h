#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130E0AB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130E0AC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_WRITE_OFFSET UNITYSDK_OFFSET(0x130E0C50)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E0DE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF__CTOR_OFFSET UNITYSDK_OFFSET(0x130E0DA0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_EPLNDDOOOOF_TypeDefinitionIndex = 44045;

	class UVAnimSection_EPLNDDOOOOF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_EPLNDDOOOOF_TypeDefinitionIndex)->GetStaticField(0x34AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::UVAnimSection*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::UVAnimSection*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_EPLNDDOOOOF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
