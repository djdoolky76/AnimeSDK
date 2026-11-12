#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOLCGIOGIBP;
class GDGEIAHNDAD;
class IODAFIBPAGM;
class JEEHGNIBIFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDGEIAHNDAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F736CA0)
#define GDGEIAHNDAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F737110)
#define GDGEIAHNDAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F736730)
#define GDGEIAHNDAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7365B0)
#define GDGEIAHNDAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7364F0)
#define GDGEIAHNDAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7367D0)
#define GDGEIAHNDAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7367A0)
#define GDGEIAHNDAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F736970)
#define GDGEIAHNDAD_IHAFLEIHINF_OFFSET UNITYSDK_OFFSET(0x1F736790)
#define GDGEIAHNDAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7364B0)
#define GDGEIAHNDAD_KGNFDJHEALE_OFFSET UNITYSDK_OFFSET(0x1F736770)
#define GDGEIAHNDAD_KKGBGJBGBMN_OFFSET UNITYSDK_OFFSET(0x1F736780)
#define GDGEIAHNDAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F736F50)
#define GDGEIAHNDAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F736DE0)
#define GDGEIAHNDAD_NHNPKDAIKLL_OFFSET UNITYSDK_OFFSET(0x1F736760)
#define GDGEIAHNDAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7364E0)
#define GDGEIAHNDAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F736AF0)
#define GDGEIAHNDAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F736B50)

inline static constexpr unsigned int GDGEIAHNDAD_TypeDefinitionIndex = 26733;

	class GDGEIAHNDAD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>* LEBCDBHNIIC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* KCHFJNEFCDE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MCMFMKPMIKC; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* HEOGBMAEFDF; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0x57080);
		}

		static ::Google::Protobuf::FieldCodec_1<::JEEHGNIBIFE*>** StaticGet_IBKDAEHBNDL()
		{
			return (::Google::Protobuf::FieldCodec_1<::JEEHGNIBIFE*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0x57088);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>** StaticGet_CLHOEPIPJKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0x57090);
		}

		static ::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>** StaticGet_AEAPGJLBMBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0x57098);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PAOEGELIOLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0x570A0);
		}

		// static const ::System::Object LALJFALNFPA; // 0x0
		// static const ::System::Object OPHJFCAHAPJ; // 0x0
		// static const ::System::Object NLACKMFOOIC; // 0x0
		// static const ::System::Object PGMIPNLHBJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDGEIAHNDAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGEIAHNDAD*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGEIAHNDAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>*(*)())((::PBYTE)hIl2Cpp + GDGEIAHNDAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDGEIAHNDAD* Clone()
		{
			return ((::GDGEIAHNDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* NHNPKDAIKLL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_NHNPKDAIKLL_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* KGNFDJHEALE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_KGNFDJHEALE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KKGBGJBGBMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_KKGBGJBGBMN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>* IHAFLEIHINF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_IHAFLEIHINF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDGEIAHNDAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDGEIAHNDAD*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDGEIAHNDAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGEIAHNDAD*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
