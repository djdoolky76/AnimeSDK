#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBGFIJPAPG;
class LMKECAPDMAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEBGFIJPAPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E713460)
#define JEBGFIJPAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7137E0)
#define JEBGFIJPAPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E712F50)
#define JEBGFIJPAPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E712E90)
#define JEBGFIJPAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E712E40)
#define JEBGFIJPAPG_EPMDGHIBOPH_OFFSET UNITYSDK_OFFSET(0x1E712FA0)
#define JEBGFIJPAPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E713160)
#define JEBGFIJPAPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E712FD0)
#define JEBGFIJPAPG_GCEPFACDMFH_OFFSET UNITYSDK_OFFSET(0x1E712FC0)
#define JEBGFIJPAPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E713290)
#define JEBGFIJPAPG_ICBEEDOJCGP_OFFSET UNITYSDK_OFFSET(0x1E712FB0)
#define JEBGFIJPAPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E712DD0)
#define JEBGFIJPAPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E713610)
#define JEBGFIJPAPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E713570)
#define JEBGFIJPAPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E712E30)
#define JEBGFIJPAPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E713300)
#define JEBGFIJPAPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E713360)

inline static constexpr unsigned int JEBGFIJPAPG_TypeDefinitionIndex = 34798;

	class JEBGFIJPAPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* ADGIMFLGIKI; // 0x18
		::System::UInt32 IFPABOLNNGN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JEBGFIJPAPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEBGFIJPAPG*>**)UnitySDK::FromName("", "JEBGFIJPAPG")->GetStaticField(0x5E3B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LMKECAPDMAC*>** StaticGet_CONDHANADOB()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMKECAPDMAC*>**)UnitySDK::FromName("", "JEBGFIJPAPG")->GetStaticField(0x5E3B8);
		}

		// static const ::System::Object KDBCNOLIFNM; // 0x0
		// static const ::System::Object ONMNGPKMMAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEBGFIJPAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBGFIJPAPG*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBGFIJPAPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEBGFIJPAPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEBGFIJPAPG*>*(*)())((::PBYTE)hIl2Cpp + JEBGFIJPAPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEBGFIJPAPG* Clone()
		{
			return ((::JEBGFIJPAPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPMDGHIBOPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_EPMDGHIBOPH_OFFSET))(this);
		}

		::System::Void ICBEEDOJCGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_ICBEEDOJCGP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* GCEPFACDMFH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_GCEPFACDMFH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEBGFIJPAPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEBGFIJPAPG*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEBGFIJPAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBGFIJPAPG*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEBGFIJPAPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
