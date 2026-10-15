#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOEBAOEFMDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOEBAOEFMDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9BB6D0)
#define LOEBAOEFMDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB9F0)
#define LOEBAOEFMDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BB280)
#define LOEBAOEFMDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BB240)
#define LOEBAOEFMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB230)
#define LOEBAOEFMDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9BB3F0)
#define LOEBAOEFMDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9BB360)
#define LOEBAOEFMDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9BB4D0)
#define LOEBAOEFMDC_GIHLMAIBCFP_OFFSET UNITYSDK_OFFSET(0x1E9BB340)
#define LOEBAOEFMDC_GPOBHDMPPHN_OFFSET UNITYSDK_OFFSET(0x1E9BB350)
#define LOEBAOEFMDC_HGNKPBGLALL_OFFSET UNITYSDK_OFFSET(0x1E9BB330)
#define LOEBAOEFMDC_ILDMKDGDOIJ_OFFSET UNITYSDK_OFFSET(0x1E9BB300)
#define LOEBAOEFMDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9BB1C0)
#define LOEBAOEFMDC_KEIDPCAGFJC_OFFSET UNITYSDK_OFFSET(0x1E9BB310)
#define LOEBAOEFMDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9BB840)
#define LOEBAOEFMDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BB7F0)
#define LOEBAOEFMDC_OIGDPPKKNOK_OFFSET UNITYSDK_OFFSET(0x1E9BB320)
#define LOEBAOEFMDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB220)
#define LOEBAOEFMDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9BB500)
#define LOEBAOEFMDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9BB560)

inline static constexpr unsigned int LOEBAOEFMDC_TypeDefinitionIndex = 31153;

	class LOEBAOEFMDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JCJNOKBENEM; // 0x18
		::System::Boolean LDCJHFCILFN; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 BFBCDJEFBLH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LOEBAOEFMDC")->GetStaticField(0x514B0);
		}

		// static const ::System::Object NHPPCLEPFIM; // 0x0
		// static const ::System::Object ODNDKKFAKKD; // 0x0
		// static const ::System::Object CGBCGHFIIHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOEBAOEFMDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LOEBAOEFMDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOEBAOEFMDC* Clone()
		{
			return ((::LOEBAOEFMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CLONE_OFFSET))(this);
		}

		::System::Boolean ILDMKDGDOIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_ILDMKDGDOIJ_OFFSET))(this);
		}

		::System::Void KEIDPCAGFJC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_KEIDPCAGFJC_OFFSET))(this, a1);
		}

		::System::UInt32 OIGDPPKKNOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_OIGDPPKKNOK_OFFSET))(this);
		}

		::System::Void HGNKPBGLALL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_HGNKPBGLALL_OFFSET))(this, a1);
		}

		::System::UInt32 GIHLMAIBCFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GIHLMAIBCFP_OFFSET))(this);
		}

		::System::Void GPOBHDMPPHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GPOBHDMPPHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOEBAOEFMDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOEBAOEFMDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
