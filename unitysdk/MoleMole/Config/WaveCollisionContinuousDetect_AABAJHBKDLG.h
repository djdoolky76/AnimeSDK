#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class WaveCollisionContinuousDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFEDA30)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFEDB60)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_READ_OFFSET UNITYSDK_OFFSET(0xFFEDA40)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_WRITE_OFFSET UNITYSDK_OFFSET(0xFFEFA80)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFF0D40)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF0D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WaveCollisionContinuousDetect_AABAJHBKDLG_TypeDefinitionIndex = 39577;

	class WaveCollisionContinuousDetect_AABAJHBKDLG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_AABAJHBKDLG_TypeDefinitionIndex)->GetStaticField(0x4E8E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_AABAJHBKDLG_TypeDefinitionIndex)->GetStaticField(0x4E8E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_AABAJHBKDLG_TypeDefinitionIndex)->GetStaticField(0x4E8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_AABAJHBKDLG_TypeDefinitionIndex)->GetStaticField(0x4E8F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::WaveCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_READ_OFFSET))(this, EGEGIMGMJHN, FAJNJHEJMEA);
		}

		::System::Boolean ReadMember(::MoleMole::Config::WaveCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::WaveCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_AABAJHBKDLG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
