#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOBIMJMLIF;
class GEFEDOAOKNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEFEDOAOKNO_BLNPMEIPMDI_OFFSET UNITYSDK_OFFSET(0x1E4290D0)
#define GEFEDOAOKNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E429500)
#define GEFEDOAOKNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E429800)
#define GEFEDOAOKNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E429080)
#define GEFEDOAOKNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E428FD0)
#define GEFEDOAOKNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E428F80)
#define GEFEDOAOKNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E429260)
#define GEFEDOAOKNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4290E0)
#define GEFEDOAOKNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E429380)
#define GEFEDOAOKNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E428F10)
#define GEFEDOAOKNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E429640)
#define GEFEDOAOKNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4295A0)
#define GEFEDOAOKNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E428F70)
#define GEFEDOAOKNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4293F0)
#define GEFEDOAOKNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E429450)

inline static constexpr unsigned int GEFEDOAOKNO_TypeDefinitionIndex = 29827;

	class GEFEDOAOKNO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FCOBIMJMLIF*>* HNMGHBBPNBB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::FCOBIMJMLIF*>** StaticGet_LEOCNKDMEFI()
		{
			return (::Google::Protobuf::FieldCodec_1<::FCOBIMJMLIF*>**)UnitySDK::FromName("", "GEFEDOAOKNO")->GetStaticField(0x11550);
		}

		static ::Google::Protobuf::MessageParser_1<::GEFEDOAOKNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEFEDOAOKNO*>**)UnitySDK::FromName("", "GEFEDOAOKNO")->GetStaticField(0x11558);
		}

		// static const ::System::Object DDDAHEMCJBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEFEDOAOKNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEFEDOAOKNO*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFEDOAOKNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEFEDOAOKNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEFEDOAOKNO*>*(*)())((::PBYTE)hIl2Cpp + GEFEDOAOKNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEFEDOAOKNO* Clone()
		{
			return ((::GEFEDOAOKNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FCOBIMJMLIF*>* BLNPMEIPMDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FCOBIMJMLIF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_BLNPMEIPMDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEFEDOAOKNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEFEDOAOKNO*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEFEDOAOKNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEFEDOAOKNO*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEFEDOAOKNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
