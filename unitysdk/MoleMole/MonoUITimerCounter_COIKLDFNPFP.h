#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUITimerCounter; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x135C1DD0)
#define MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x135C1DE0)
#define MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_WRITE_OFFSET UNITYSDK_OFFSET(0x135C20F0)
#define MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x135C2310)
#define MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x135C22D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_COIKLDFNPFP_TypeDefinitionIndex = 60709;

	class MonoUITimerCounter_COIKLDFNPFP
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UI::Image*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UI::Image*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_COIKLDFNPFP_TypeDefinitionIndex)->GetStaticField(0x50C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_COIKLDFNPFP_TypeDefinitionIndex)->GetStaticField(0x50C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_COIKLDFNPFP_TypeDefinitionIndex)->GetStaticField(0x50C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUITimerCounter*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoUITimerCounter*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_COIKLDFNPFP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
