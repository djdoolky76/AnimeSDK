#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAKKNFLEPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIAKKNFLEPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E852BB0)
#define KIAKKNFLEPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E852F40)
#define KIAKKNFLEPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8527A0)
#define KIAKKNFLEPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E852760)
#define KIAKKNFLEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E852750)
#define KIAKKNFLEPN_EHNBACBEAAN_OFFSET UNITYSDK_OFFSET(0x1E852820)
#define KIAKKNFLEPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E852900)
#define KIAKKNFLEPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E852880)
#define KIAKKNFLEPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8529D0)
#define KIAKKNFLEPN_GLIAJIPBEAH_OFFSET UNITYSDK_OFFSET(0x1E852830)
#define KIAKKNFLEPN_HPAAKAOLKNI_OFFSET UNITYSDK_OFFSET(0x1E852870)
#define KIAKKNFLEPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8526E0)
#define KIAKKNFLEPN_KAOCKMKFCBM_OFFSET UNITYSDK_OFFSET(0x1E852850)
#define KIAKKNFLEPN_KJJCDKGDDJN_OFFSET UNITYSDK_OFFSET(0x1E852860)
#define KIAKKNFLEPN_KLOJOKIJKAL_OFFSET UNITYSDK_OFFSET(0x1E852840)
#define KIAKKNFLEPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E852DA0)
#define KIAKKNFLEPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E852D50)
#define KIAKKNFLEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E852740)
#define KIAKKNFLEPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E852A00)
#define KIAKKNFLEPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E852A60)

inline static constexpr unsigned int KIAKKNFLEPN_TypeDefinitionIndex = 28574;

	class KIAKKNFLEPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 BMLNILMJODG; // 0x18
		::System::UInt32 PAPCBJDKOKN; // 0x1C
		::System::UInt32 INGFNLCPFOG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIAKKNFLEPN")->GetStaticField(0x189F0);
		}

		// static const ::System::Object JONAACNDFNP; // 0x0
		// static const ::System::Object NMANIHAEPLF; // 0x0
		// static const ::System::Object NLMDMOPCGOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIAKKNFLEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAKKNFLEPN*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAKKNFLEPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIAKKNFLEPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIAKKNFLEPN* Clone()
		{
			return ((::KIAKKNFLEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHNBACBEAAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_EHNBACBEAAN_OFFSET))(this);
		}

		::System::Void GLIAJIPBEAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_GLIAJIPBEAH_OFFSET))(this, a1);
		}

		::System::Int32 KLOJOKIJKAL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_KLOJOKIJKAL_OFFSET))(this);
		}

		::System::Void KAOCKMKFCBM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_KAOCKMKFCBM_OFFSET))(this, a1);
		}

		::System::UInt32 KJJCDKGDDJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_KJJCDKGDDJN_OFFSET))(this);
		}

		::System::Void HPAAKAOLKNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_HPAAKAOLKNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIAKKNFLEPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIAKKNFLEPN*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIAKKNFLEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAKKNFLEPN*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIAKKNFLEPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
