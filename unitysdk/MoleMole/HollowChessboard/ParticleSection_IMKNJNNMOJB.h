#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ParticleSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130E0090)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130E00A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_WRITE_OFFSET UNITYSDK_OFFSET(0x130E0170)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E0260)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB__CTOR_OFFSET UNITYSDK_OFFSET(0x130E0220)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_IMKNJNNMOJB_TypeDefinitionIndex = 63452;

	class ParticleSection_IMKNJNNMOJB
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSection_IMKNJNNMOJB_TypeDefinitionIndex)->GetStaticField(0x34AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ParticleSection*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ParticleSection*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_IMKNJNNMOJB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
