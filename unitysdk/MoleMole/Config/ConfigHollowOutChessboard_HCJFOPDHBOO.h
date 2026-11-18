#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowOutChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x164119D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x164119E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_WRITE_OFFSET UNITYSDK_OFFSET(0x16411B80)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16411CE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x16411CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOutChessboard_HCJFOPDHBOO_TypeDefinitionIndex = 76447;

	class ConfigHollowOutChessboard_HCJFOPDHBOO
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowOutChessboard_HCJFOPDHBOO_TypeDefinitionIndex)->GetStaticField(0x44A90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowOutChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowOutChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_HCJFOPDHBOO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
