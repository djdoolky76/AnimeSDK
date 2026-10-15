#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBECKPIIHH;
class MNKGDKAIELH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMBECKPIIHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49BD20)
#define GMBECKPIIHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49C090)
#define GMBECKPIIHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49B850)
#define GMBECKPIIHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49B750)
#define GMBECKPIIHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49B6D0)
#define GMBECKPIIHH_EBPIAKEFHBA_OFFSET UNITYSDK_OFFSET(0x1E49B8B0)
#define GMBECKPIIHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49B8F0)
#define GMBECKPIIHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49B8C0)
#define GMBECKPIIHH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E49B8A0)
#define GMBECKPIIHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49BA40)
#define GMBECKPIIHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E49B690)
#define GMBECKPIIHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49BF60)
#define GMBECKPIIHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49BEA0)
#define GMBECKPIIHH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E49B890)
#define GMBECKPIIHH_OBBJCJCLBDF_OFFSET UNITYSDK_OFFSET(0x1E49B880)
#define GMBECKPIIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49B6C0)
#define GMBECKPIIHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49BB80)
#define GMBECKPIIHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49BBE0)

inline static constexpr unsigned int GMBECKPIIHH_TypeDefinitionIndex = 34921;

	class GMBECKPIIHH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>* JEDPGLIAEFN; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPKDCDOLFGL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EPBCHHIHPID()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x1D940);
		}

		static ::Google::Protobuf::FieldCodec_1<::MNKGDKAIELH*>** StaticGet_DLLDOHDNIBC()
		{
			return (::Google::Protobuf::FieldCodec_1<::MNKGDKAIELH*>**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x1D948);
		}

		static ::Google::Protobuf::MessageParser_1<::GMBECKPIIHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMBECKPIIHH*>**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x1D950);
		}

		// static const ::System::Object EIPPAOMOJAI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IFKBHGJHEIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMBECKPIIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBECKPIIHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMBECKPIIHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMBECKPIIHH*>*(*)())((::PBYTE)hIl2Cpp + GMBECKPIIHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMBECKPIIHH* Clone()
		{
			return ((::GMBECKPIIHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBBJCJCLBDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_OBBJCJCLBDF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMBECKPIIHH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>* EBPIAKEFHBA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EBPIAKEFHBA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMBECKPIIHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMBECKPIIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
