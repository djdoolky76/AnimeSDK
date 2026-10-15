#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNHEHKIMI;
class FMKMEFMOJGJ;
class IPMLDNLACFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPMLDNLACFO_BBFJGPCGIKC_OFFSET UNITYSDK_OFFSET(0x1E6B9D60)
#define IPMLDNLACFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BA3A0)
#define IPMLDNLACFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA6E0)
#define IPMLDNLACFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B9C30)
#define IPMLDNLACFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B9B80)
#define IPMLDNLACFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9B70)
#define IPMLDNLACFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B9FC0)
#define IPMLDNLACFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B9D70)
#define IPMLDNLACFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BA1F0)
#define IPMLDNLACFO_JAPLABMNFBN_OFFSET UNITYSDK_OFFSET(0x1E6B9D50)
#define IPMLDNLACFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B9B00)
#define IPMLDNLACFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BA530)
#define IPMLDNLACFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BA430)
#define IPMLDNLACFO_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x1E6B9D40)
#define IPMLDNLACFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9B60)
#define IPMLDNLACFO_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1E6B9D30)
#define IPMLDNLACFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BA260)
#define IPMLDNLACFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BA2C0)

inline static constexpr unsigned int IPMLDNLACFO_TypeDefinitionIndex = 31816;

	class IPMLDNLACFO : public ::System::Object
	{
	public:
		::AIMNHEHKIMI* AEJOAFAPDFJ; // 0x10
		::FMKMEFMOJGJ* DEFOHPCHOMF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IPMLDNLACFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPMLDNLACFO*>**)UnitySDK::FromName("", "IPMLDNLACFO")->GetStaticField(0x56C60);
		}

		// static const ::System::Object PKKKIBGBNAD; // 0x0
		// static const ::System::Object LOBOEGHDMIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPMLDNLACFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPMLDNLACFO*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMLDNLACFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPMLDNLACFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPMLDNLACFO*>*(*)())((::PBYTE)hIl2Cpp + IPMLDNLACFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPMLDNLACFO* Clone()
		{
			return ((::IPMLDNLACFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_CLONE_OFFSET))(this);
		}

		::FMKMEFMOJGJ* PEFLJDOKOIL()
		{
			return ((::FMKMEFMOJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_PEFLJDOKOIL_OFFSET))(this);
		}

		::System::Void NDFCJNAMFJG(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_NDFCJNAMFJG_OFFSET))(this, a1);
		}

		::AIMNHEHKIMI* JAPLABMNFBN()
		{
			return ((::AIMNHEHKIMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_JAPLABMNFBN_OFFSET))(this);
		}

		::System::Void BBFJGPCGIKC(::AIMNHEHKIMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMNHEHKIMI*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_BBFJGPCGIKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPMLDNLACFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPMLDNLACFO*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPMLDNLACFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPMLDNLACFO*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPMLDNLACFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
