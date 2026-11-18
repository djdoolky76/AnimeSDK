#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SceneSoundData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDE6A80)
#define MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BDE6A90)
#define MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_WRITE_OFFSET UNITYSDK_OFFSET(0x1BDE6CF0)
#define MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CE9900)
#define MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE6E90)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundData_CLCEKAIHAIC_TypeDefinitionIndex = 71271;

	class SceneSoundData_CLCEKAIHAIC
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneSoundData_CLCEKAIHAIC_TypeDefinitionIndex)->GetStaticField(0x50C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SceneSoundData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SceneSoundData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLCEKAIHAIC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
