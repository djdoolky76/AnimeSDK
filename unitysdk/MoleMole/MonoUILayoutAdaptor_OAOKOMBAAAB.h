#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUILayoutAdaptor; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15ACA6A0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15ACA6B0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_WRITE_OFFSET UNITYSDK_OFFSET(0x15ACA780)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACA830)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutAdaptor_OAOKOMBAAAB_TypeDefinitionIndex = 76865;

	class MonoUILayoutAdaptor_OAOKOMBAAAB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUILayoutAdaptor*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoUILayoutAdaptor*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_OAOKOMBAAAB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
