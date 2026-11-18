#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15AD5F30)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15AD5F40)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_WRITE_OFFSET UNITYSDK_OFFSET(0x15AD6190)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD6310)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int MonoSceneMarkRoot_ODFENNJLPGK_TypeDefinitionIndex = 79633;

	class MonoSceneMarkRoot_ODFENNJLPGK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SceneMark::MonoSceneMarkRoot*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SceneMark::MonoSceneMarkRoot*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ODFENNJLPGK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
