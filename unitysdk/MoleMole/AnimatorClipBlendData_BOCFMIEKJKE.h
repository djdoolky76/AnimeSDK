#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorClipBlendData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A5C20)
#define MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5A5C30)
#define MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5A6080)
#define MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A6310)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorClipBlendData_BOCFMIEKJKE_TypeDefinitionIndex = 59902;

	class AnimatorClipBlendData_BOCFMIEKJKE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimatorClipBlendData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimatorClipBlendData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AnimatorClipBlendData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimatorClipBlendData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORCLIPBLENDDATA_BOCFMIEKJKE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
