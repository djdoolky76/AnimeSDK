#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHCEEAPHHGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHCEEAPHHGK_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1FA52B30)
#define JHCEEAPHHGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA52F20)
#define JHCEEAPHHGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA531B0)
#define JHCEEAPHHGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA52A40)
#define JHCEEAPHHGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA52A00)
#define JHCEEAPHHGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA529F0)
#define JHCEEAPHHGK_EIDFBNFCKBM_OFFSET UNITYSDK_OFFSET(0x1FA52AE0)
#define JHCEEAPHHGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA52BD0)
#define JHCEEAPHHGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA52B40)
#define JHCEEAPHHGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA52CC0)
#define JHCEEAPHHGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA52980)
#define JHCEEAPHHGK_MDOGANFKFID_OFFSET UNITYSDK_OFFSET(0x1FA52B10)
#define JHCEEAPHHGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA53110)
#define JHCEEAPHHGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA530C0)
#define JHCEEAPHHGK_MGICJJAIJCM_OFFSET UNITYSDK_OFFSET(0x1FA52AC0)
#define JHCEEAPHHGK_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1FA52B20)
#define JHCEEAPHHGK_MKOOGAGNPJI_OFFSET UNITYSDK_OFFSET(0x1FA52AD0)
#define JHCEEAPHHGK_MNKCIONELPL_OFFSET UNITYSDK_OFFSET(0x1FA52AF0)
#define JHCEEAPHHGK_OHFAFGMOMEI_OFFSET UNITYSDK_OFFSET(0x1FA52B00)
#define JHCEEAPHHGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA529E0)
#define JHCEEAPHHGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA52CF0)
#define JHCEEAPHHGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA52D50)

inline static constexpr unsigned int JHCEEAPHHGK_TypeDefinitionIndex = 29776;

	class JHCEEAPHHGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean EEFPMEKJLEB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LAEDOHJKAJN; // 0x1C
		::System::UInt32 DPEGNEGBBKI; // 0x20
		::System::UInt32 KLINKNMHOCI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JHCEEAPHHGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHCEEAPHHGK*>**)UnitySDK::FromName("", "JHCEEAPHHGK")->GetStaticField(0x29000);
		}

		// static const ::System::Object ENFKLMMLPEC; // 0x0
		// static const ::System::Object LKEIOOECNMC; // 0x0
		// static const ::System::Object OBPJACJDNLJ; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHCEEAPHHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHCEEAPHHGK*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHCEEAPHHGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHCEEAPHHGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHCEEAPHHGK*>*(*)())((::PBYTE)hIl2Cpp + JHCEEAPHHGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHCEEAPHHGK* Clone()
		{
			return ((::JHCEEAPHHGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_CLONE_OFFSET))(this);
		}

		::System::UInt32 MGICJJAIJCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MGICJJAIJCM_OFFSET))(this);
		}

		::System::Void MKOOGAGNPJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MKOOGAGNPJI_OFFSET))(this, a1);
		}

		::System::UInt32 EIDFBNFCKBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_EIDFBNFCKBM_OFFSET))(this);
		}

		::System::Void MNKCIONELPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MNKCIONELPL_OFFSET))(this, a1);
		}

		::System::Boolean OHFAFGMOMEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_OHFAFGMOMEI_OFFSET))(this);
		}

		::System::Void MDOGANFKFID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MDOGANFKFID_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHCEEAPHHGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHCEEAPHHGK*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHCEEAPHHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHCEEAPHHGK*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHCEEAPHHGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
