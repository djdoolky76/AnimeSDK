#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLIFGIMBMBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLIFGIMBMBD_BKECMDJGDHF_OFFSET UNITYSDK_OFFSET(0x1E74E4B0)
#define JLIFGIMBMBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74E800)
#define JLIFGIMBMBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74EB80)
#define JLIFGIMBMBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E74E410)
#define JLIFGIMBMBD_CPHMFBDCNND_OFFSET UNITYSDK_OFFSET(0x1E74E490)
#define JLIFGIMBMBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E74E3D0)
#define JLIFGIMBMBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74E3C0)
#define JLIFGIMBMBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74E570)
#define JLIFGIMBMBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74E4F0)
#define JLIFGIMBMBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74E640)
#define JLIFGIMBMBD_GMNPNCILIEC_OFFSET UNITYSDK_OFFSET(0x1E74E4E0)
#define JLIFGIMBMBD_IAOGILGLDEB_OFFSET UNITYSDK_OFFSET(0x1E74E4C0)
#define JLIFGIMBMBD_IHIAEPCNAGK_OFFSET UNITYSDK_OFFSET(0x1E74E4A0)
#define JLIFGIMBMBD_JCBGHODKBDC_OFFSET UNITYSDK_OFFSET(0x1E74E4D0)
#define JLIFGIMBMBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E74E350)
#define JLIFGIMBMBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74E9E0)
#define JLIFGIMBMBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74E990)
#define JLIFGIMBMBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E74E3B0)
#define JLIFGIMBMBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74E670)
#define JLIFGIMBMBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74E6D0)

inline static constexpr unsigned int JLIFGIMBMBD_TypeDefinitionIndex = 27035;

	class JLIFGIMBMBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MHAKKABIIPA; // 0x18
		::System::UInt32 OKPIGPJBOID; // 0x1C
		::System::UInt32 FKDHHNFCNHI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JLIFGIMBMBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLIFGIMBMBD*>**)UnitySDK::FromName("", "JLIFGIMBMBD")->GetStaticField(0x64660);
		}

		// static const ::System::Object EJCBKFFFEBP; // 0x0
		// static const ::System::Object FGJLDDLEKJA; // 0x0
		// static const ::System::Object ALCPLNPHCFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLIFGIMBMBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLIFGIMBMBD*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLIFGIMBMBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLIFGIMBMBD*>*(*)())((::PBYTE)hIl2Cpp + JLIFGIMBMBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLIFGIMBMBD* Clone()
		{
			return ((::JLIFGIMBMBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPHMFBDCNND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CPHMFBDCNND_OFFSET))(this);
		}

		::System::Void IHIAEPCNAGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_IHIAEPCNAGK_OFFSET))(this, a1);
		}

		::System::UInt32 BKECMDJGDHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_BKECMDJGDHF_OFFSET))(this);
		}

		::System::Void IAOGILGLDEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_IAOGILGLDEB_OFFSET))(this, a1);
		}

		::System::UInt32 JCBGHODKBDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_JCBGHODKBDC_OFFSET))(this);
		}

		::System::Void GMNPNCILIEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_GMNPNCILIEC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLIFGIMBMBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLIFGIMBMBD*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLIFGIMBMBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLIFGIMBMBD*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLIFGIMBMBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
