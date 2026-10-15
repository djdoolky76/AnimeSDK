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

#define GDGEIAHNDAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41B870)
#define GDGEIAHNDAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41BCD0)
#define GDGEIAHNDAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41B2F0)
#define GDGEIAHNDAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41B170)
#define GDGEIAHNDAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41B0B0)
#define GDGEIAHNDAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41B390)
#define GDGEIAHNDAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41B360)
#define GDGEIAHNDAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41B530)
#define GDGEIAHNDAD_IHAFLEIHINF_OFFSET UNITYSDK_OFFSET(0x1E41B330)
#define GDGEIAHNDAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41B070)
#define GDGEIAHNDAD_KGNFDJHEALE_OFFSET UNITYSDK_OFFSET(0x1E41B340)
#define GDGEIAHNDAD_KKGBGJBGBMN_OFFSET UNITYSDK_OFFSET(0x1E41B350)
#define GDGEIAHNDAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41BB20)
#define GDGEIAHNDAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41B9B0)
#define GDGEIAHNDAD_NHNPKDAIKLL_OFFSET UNITYSDK_OFFSET(0x1E41B320)
#define GDGEIAHNDAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41B0A0)
#define GDGEIAHNDAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41B6C0)
#define GDGEIAHNDAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41B720)

inline static constexpr unsigned int GDGEIAHNDAD_TypeDefinitionIndex = 26206;

	class GDGEIAHNDAD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>* LEBCDBHNIIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MCMFMKPMIKC; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* KCHFJNEFCDE; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* HEOGBMAEFDF; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>** StaticGet_AEAPGJLBMBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0xFD20);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PAOEGELIOLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0xFD28);
		}

		static ::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDGEIAHNDAD*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0xFD30);
		}

		static ::Google::Protobuf::FieldCodec_1<::JEEHGNIBIFE*>** StaticGet_IBKDAEHBNDL()
		{
			return (::Google::Protobuf::FieldCodec_1<::JEEHGNIBIFE*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0xFD38);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>** StaticGet_CLHOEPIPJKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>**)UnitySDK::FromName("", "GDGEIAHNDAD")->GetStaticField(0xFD40);
		}

		// static const ::System::Object LALJFALNFPA; // 0x0
		// static const ::System::Object PGMIPNLHBJE; // 0x0
		// static const ::System::Object OPHJFCAHAPJ; // 0x0
		// static const ::System::Object NLACKMFOOIC; // 0x0
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

		::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>* IHAFLEIHINF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JEEHGNIBIFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_IHAFLEIHINF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* KGNFDJHEALE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_KGNFDJHEALE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KKGBGJBGBMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD_KKGBGJBGBMN_OFFSET))(this);
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
