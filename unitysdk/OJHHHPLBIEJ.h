#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIIFDNHLFN;
class LAOKFPFHBHH;
class OJHHHPLBIEJ;
class OKGKPCLMCNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJHHHPLBIEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE58600)
#define OJHHHPLBIEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE58B60)
#define OJHHHPLBIEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE581D0)
#define OJHHHPLBIEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE580C0)
#define OJHHHPLBIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE58040)
#define OJHHHPLBIEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE58260)
#define OJHHHPLBIEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE58230)
#define OJHHHPLBIEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE583D0)
#define OJHHHPLBIEJ_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1DE58220)
#define OJHHHPLBIEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE58000)
#define OJHHHPLBIEJ_JMCEEFDPBME_OFFSET UNITYSDK_OFFSET(0x1DE58210)
#define OJHHHPLBIEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE58860)
#define OJHHHPLBIEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE58710)
#define OJHHHPLBIEJ_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DE58200)
#define OJHHHPLBIEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE58030)
#define OJHHHPLBIEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE58480)
#define OJHHHPLBIEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE584E0)

inline static constexpr unsigned int OJHHHPLBIEJ_TypeDefinitionIndex = 25425;

	class OJHHHPLBIEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LAOKFPFHBHH*>* EMGPLPNHBHF; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::OKGKPCLMCNC*>* CBFGBDBJHID; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::GMIIFDNHLFN*>* JLFDMJMJDND; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LAOKFPFHBHH*>** StaticGet_NFLBMIGIJHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LAOKFPFHBHH*>**)UnitySDK::FromName("", "OJHHHPLBIEJ")->GetStaticField(0x1C570);
		}

		static ::Google::Protobuf::MessageParser_1<::OJHHHPLBIEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJHHHPLBIEJ*>**)UnitySDK::FromName("", "OJHHHPLBIEJ")->GetStaticField(0x1C578);
		}

		static ::Google::Protobuf::FieldCodec_1<::OKGKPCLMCNC*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKGKPCLMCNC*>**)UnitySDK::FromName("", "OJHHHPLBIEJ")->GetStaticField(0x1C580);
		}

		static ::Google::Protobuf::FieldCodec_1<::GMIIFDNHLFN*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::GMIIFDNHLFN*>**)UnitySDK::FromName("", "OJHHHPLBIEJ")->GetStaticField(0x1C588);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object GMFKJGKBPBG; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJHHHPLBIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHHPLBIEJ*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJHHHPLBIEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJHHHPLBIEJ*>*(*)())((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJHHHPLBIEJ* Clone()
		{
			return ((::OJHHHPLBIEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKGKPCLMCNC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKGKPCLMCNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_MJOEMBBMBON_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LAOKFPFHBHH*>* JMCEEFDPBME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LAOKFPFHBHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_JMCEEFDPBME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GMIIFDNHLFN*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GMIIFDNHLFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJHHHPLBIEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJHHHPLBIEJ*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJHHHPLBIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHHPLBIEJ*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
