#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUIImageNumberWithKUnity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B83180)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B83190)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_WRITE_OFFSET UNITYSDK_OFFSET(0x12B83330)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B83490)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83450)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_BDCHHCFKGHG_TypeDefinitionIndex = 83615;

	class MonoUIImageNumberWithKUnity_BDCHHCFKGHG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_BDCHHCFKGHG_TypeDefinitionIndex)->GetStaticField(0x4D890);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_BDCHHCFKGHG_TypeDefinitionIndex)->GetStaticField(0x4D898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIImageNumberWithKUnity*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoUIImageNumberWithKUnity*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_BDCHHCFKGHG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
