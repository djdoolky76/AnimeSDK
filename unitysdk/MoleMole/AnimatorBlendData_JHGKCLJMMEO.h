#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130415D0)
#define MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130415E0)
#define MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_WRITE_OFFSET UNITYSDK_OFFSET(0x13041770)
#define MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13041890)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendData_JHGKCLJMMEO_TypeDefinitionIndex = 54507;

	class AnimatorBlendData_JHGKCLJMMEO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimatorBlendData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimatorBlendData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AnimatorBlendData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimatorBlendData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_JHGKCLJMMEO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
