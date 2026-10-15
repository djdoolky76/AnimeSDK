#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLDOIEGCNLD;
class GLLFJFJBIBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLLFJFJBIBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E496F80)
#define GLLFJFJBIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E497280)
#define GLLFJFJBIBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E496B00)
#define GLLFJFJBIBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E496A50)
#define GLLFJFJBIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E496A00)
#define GLLFJFJBIBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E496CE0)
#define GLLFJFJBIBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E496B60)
#define GLLFJFJBIBC_GCHFPCFEOFD_OFFSET UNITYSDK_OFFSET(0x1E496B50)
#define GLLFJFJBIBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E496E00)
#define GLLFJFJBIBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E496990)
#define GLLFJFJBIBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4970C0)
#define GLLFJFJBIBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E497020)
#define GLLFJFJBIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4969F0)
#define GLLFJFJBIBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E496E70)
#define GLLFJFJBIBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E496ED0)

inline static constexpr unsigned int GLLFJFJBIBC_TypeDefinitionIndex = 25183;

	class GLLFJFJBIBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>* CKADIAMJOMP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GLLFJFJBIBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLLFJFJBIBC*>**)UnitySDK::FromName("", "GLLFJFJBIBC")->GetStaticField(0x1D1B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CLDOIEGCNLD*>** StaticGet_HKJALPMNEFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::CLDOIEGCNLD*>**)UnitySDK::FromName("", "GLLFJFJBIBC")->GetStaticField(0x1D1B8);
		}

		// static const ::System::Object FFBGMBAGEPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLLFJFJBIBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLLFJFJBIBC*>*(*)())((::PBYTE)hIl2Cpp + GLLFJFJBIBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLLFJFJBIBC* Clone()
		{
			return ((::GLLFJFJBIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>* GCHFPCFEOFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CLDOIEGCNLD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_GCHFPCFEOFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLLFJFJBIBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLLFJFJBIBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
