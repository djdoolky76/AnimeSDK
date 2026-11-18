#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MorphBallPhysicsMiddleware; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131108A0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131108B0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_WRITE_OFFSET UNITYSDK_OFFSET(0x13110B10)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13110C90)

namespace MoleMole
{
	inline static constexpr unsigned int MorphBallPhysicsMiddleware_KKBHCPBFBCM_TypeDefinitionIndex = 61274;

	class MorphBallPhysicsMiddleware_KKBHCPBFBCM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MorphBallPhysicsMiddleware*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MorphBallPhysicsMiddleware*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MorphBallPhysicsMiddleware*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MorphBallPhysicsMiddleware*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_KKBHCPBFBCM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
