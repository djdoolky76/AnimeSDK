#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDABDPPPHBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDABDPPPHBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07F460)
#define CDABDPPPHBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07F780)
#define CDABDPPPHBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07EF30)
#define CDABDPPPHBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07EE90)
#define CDABDPPPHBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07EE40)
#define CDABDPPPHBN_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E07EF60)
#define CDABDPPPHBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07F050)
#define CDABDPPPHBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07EFD0)
#define CDABDPPPHBN_FBCBJMJLELP_OFFSET UNITYSDK_OFFSET(0x1E07EFB0)
#define CDABDPPPHBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07F160)
#define CDABDPPPHBN_HCEOIBOEHHD_OFFSET UNITYSDK_OFFSET(0x1E07EF80)
#define CDABDPPPHBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07EE00)
#define CDABDPPPHBN_LGCKILMCLII_OFFSET UNITYSDK_OFFSET(0x1E07EFC0)
#define CDABDPPPHBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07F690)
#define CDABDPPPHBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07F630)
#define CDABDPPPHBN_MKAAKFIDNOL_OFFSET UNITYSDK_OFFSET(0x1E07EF90)
#define CDABDPPPHBN_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E07EF70)
#define CDABDPPPHBN_OGFEDKCMNOH_OFFSET UNITYSDK_OFFSET(0x1E07EFA0)
#define CDABDPPPHBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07EE30)
#define CDABDPPPHBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07F270)
#define CDABDPPPHBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07F2D0)

	class CDABDPPPHBN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNPAHENGGIB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PNOIJALGODN; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		::System::UInt32 KLLMAOCKBKG; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDABDPPPHBN")->GetStaticField(0xEA60);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FKBIJHCHLLA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CDABDPPPHBN")->GetStaticField(0xEA68);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object DGPDKJBLCLK; // 0x0
		// static const ::System::Object PBEDGIABHBG; // 0x0
		// static const ::System::Object IAEHOOHLMBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDABDPPPHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDABDPPPHBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDABDPPPHBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDABDPPPHBN* Clone()
		{
			return ((::CDABDPPPHBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDABDPPPHBN_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 HCEOIBOEHHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_HCEOIBOEHHD_OFFSET))(this);
		}

		::System::Void MKAAKFIDNOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDABDPPPHBN_MKAAKFIDNOL_OFFSET))(this, a1);
		}

		::System::UInt32 OGFEDKCMNOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_OGFEDKCMNOH_OFFSET))(this);
		}

		::System::Void FBCBJMJLELP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDABDPPPHBN_FBCBJMJLELP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGCKILMCLII()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_LGCKILMCLII_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDABDPPPHBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDABDPPPHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDABDPPPHBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
