#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyNoiseLerpModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1654CF30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1654CF40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_WRITE_OFFSET UNITYSDK_OFFSET(0x1654E020)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1654E9F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyNoiseLerpModifier_JHDHIGGALGD_TypeDefinitionIndex = 83571;

	class ConfigMaterialPropertyNoiseLerpModifier_JHDHIGGALGD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_JHDHIGGALGD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
