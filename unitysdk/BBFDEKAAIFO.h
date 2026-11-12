#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBFDEKAAIFO;
class EINKHFKDCCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBFDEKAAIFO_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1FA7CB50)
#define BBFDEKAAIFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA7CFF0)
#define BBFDEKAAIFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7D350)
#define BBFDEKAAIFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA7CAB0)
#define BBFDEKAAIFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA7CA40)
#define BBFDEKAAIFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7CA30)
#define BBFDEKAAIFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA7CCF0)
#define BBFDEKAAIFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA7CB70)
#define BBFDEKAAIFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA7CB40)
#define BBFDEKAAIFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA7CE70)
#define BBFDEKAAIFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA7C9F0)
#define BBFDEKAAIFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA7D170)
#define BBFDEKAAIFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA7D0C0)
#define BBFDEKAAIFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA7CB30)
#define BBFDEKAAIFO_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1FA7CB60)
#define BBFDEKAAIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA7CA20)
#define BBFDEKAAIFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA7CEB0)
#define BBFDEKAAIFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA7CF10)

inline static constexpr unsigned int BBFDEKAAIFO_TypeDefinitionIndex = 35417;

	class BBFDEKAAIFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EINKHFKDCCD* MHNBLPIPJFB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>**)UnitySDK::FromName("", "BBFDEKAAIFO")->GetStaticField(0x40A80);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BDDLABJNOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBFDEKAAIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>*(*)())((::PBYTE)hIl2Cpp + BBFDEKAAIFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBFDEKAAIFO* Clone()
		{
			return ((::BBFDEKAAIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EINKHFKDCCD* AOFAMJMIOCN()
		{
			return ((::EINKHFKDCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_AOFAMJMIOCN_OFFSET))(this);
		}

		::System::Void PAIFLDEKLKL(::EINKHFKDCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_PAIFLDEKLKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBFDEKAAIFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBFDEKAAIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
