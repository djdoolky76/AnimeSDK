#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPAFBJBGBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEPAFBJBGBH_ABKABICLHFB_OFFSET UNITYSDK_OFFSET(0x1E45E4F0)
#define GEPAFBJBGBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45E880)
#define GEPAFBJBGBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45EB50)
#define GEPAFBJBGBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45E480)
#define GEPAFBJBGBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45E450)
#define GEPAFBJBGBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45E440)
#define GEPAFBJBGBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45E640)
#define GEPAFBJBGBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45E530)
#define GEPAFBJBGBH_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E45E510)
#define GEPAFBJBGBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45E710)
#define GEPAFBJBGBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45E3D0)
#define GEPAFBJBGBH_KAFJFPMMCDJ_OFFSET UNITYSDK_OFFSET(0x1E45E500)
#define GEPAFBJBGBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45E9D0)
#define GEPAFBJBGBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45E990)
#define GEPAFBJBGBH_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E45E520)
#define GEPAFBJBGBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45E430)
#define GEPAFBJBGBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45E740)
#define GEPAFBJBGBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45E7A0)

inline static constexpr unsigned int GEPAFBJBGBH_TypeDefinitionIndex = 29127;

	class GEPAFBJBGBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FCECPDKBJBB; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GEPAFBJBGBH")->GetStaticField(0x12B80);
		}

		// static const ::System::Object KOKLHNLCMGP; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEPAFBJBGBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPAFBJBGBH*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEPAFBJBGBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GEPAFBJBGBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEPAFBJBGBH* Clone()
		{
			return ((::GEPAFBJBGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 ABKABICLHFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_ABKABICLHFB_OFFSET))(this);
		}

		::System::Void KAFJFPMMCDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_KAFJFPMMCDJ_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEPAFBJBGBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEPAFBJBGBH*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEPAFBJBGBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPAFBJBGBH*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEPAFBJBGBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
