#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANFHCOHGBP;
class MKCIKLPNODD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKCIKLPNODD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA538A0)
#define MKCIKLPNODD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA53BA0)
#define MKCIKLPNODD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA53210)
#define MKCIKLPNODD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA53180)
#define MKCIKLPNODD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA53170)
#define MKCIKLPNODD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA53440)
#define MKCIKLPNODD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA532D0)
#define MKCIKLPNODD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA53710)
#define MKCIKLPNODD_GNICFMOENOL_OFFSET UNITYSDK_OFFSET(0x1EA532C0)
#define MKCIKLPNODD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA53130)
#define MKCIKLPNODD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA539D0)
#define MKCIKLPNODD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA53900)
#define MKCIKLPNODD_OPPDKNHKNEN_OFFSET UNITYSDK_OFFSET(0x1EA532B0)
#define MKCIKLPNODD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA53160)
#define MKCIKLPNODD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA537B0)
#define MKCIKLPNODD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA53810)

inline static constexpr unsigned int MKCIKLPNODD_TypeDefinitionIndex = 34688;

	class MKCIKLPNODD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HANFHCOHGBP* LCJFJKEMBEM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKCIKLPNODD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKCIKLPNODD*>**)UnitySDK::FromName("", "MKCIKLPNODD")->GetStaticField(0x56570);
		}

		// static const ::System::Object MNHKGFHHJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKCIKLPNODD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCIKLPNODD*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCIKLPNODD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKCIKLPNODD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKCIKLPNODD*>*(*)())((::PBYTE)hIl2Cpp + MKCIKLPNODD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKCIKLPNODD* Clone()
		{
			return ((::MKCIKLPNODD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_CLONE_OFFSET))(this);
		}

		::HANFHCOHGBP* OPPDKNHKNEN()
		{
			return ((::HANFHCOHGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_OPPDKNHKNEN_OFFSET))(this);
		}

		::System::Void GNICFMOENOL(::HANFHCOHGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_GNICFMOENOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKCIKLPNODD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKCIKLPNODD*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKCIKLPNODD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCIKLPNODD*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKCIKLPNODD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
