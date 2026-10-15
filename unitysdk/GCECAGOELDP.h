#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCECAGOELDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCECAGOELDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40DD50)
#define GCECAGOELDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40E070)
#define GCECAGOELDP_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E40D840)
#define GCECAGOELDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40D7E0)
#define GCECAGOELDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40D6F0)
#define GCECAGOELDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40D660)
#define GCECAGOELDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40D8D0)
#define GCECAGOELDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40D870)
#define GCECAGOELDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40D9F0)
#define GCECAGOELDP_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E40D850)
#define GCECAGOELDP_IEOLFBBEDKH_OFFSET UNITYSDK_OFFSET(0x1E40D830)
#define GCECAGOELDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40D5F0)
#define GCECAGOELDP_KBKDIKHBIGF_OFFSET UNITYSDK_OFFSET(0x1E40D860)
#define GCECAGOELDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40DF30)
#define GCECAGOELDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40DEC0)
#define GCECAGOELDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40D650)
#define GCECAGOELDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40DBB0)
#define GCECAGOELDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40DC10)

inline static constexpr unsigned int GCECAGOELDP_TypeDefinitionIndex = 28372;

	class GCECAGOELDP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* POPNFGLOLKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AMJJOFBMPFM; // 0x20
		::System::UInt32 GJJDLFJNHFJ; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HCHKMBHHOLF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GCECAGOELDP")->GetStaticField(0xDFF0);
		}

		static ::Google::Protobuf::MessageParser_1<::GCECAGOELDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCECAGOELDP*>**)UnitySDK::FromName("", "GCECAGOELDP")->GetStaticField(0xDFF8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IEDANNMKBMN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GCECAGOELDP")->GetStaticField(0xE000);
		}

		// static const ::System::Object DKODICHDMKP; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object IGJKBDMDNON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCECAGOELDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + GCECAGOELDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCECAGOELDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCECAGOELDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCECAGOELDP*>*(*)())((::PBYTE)hIl2Cpp + GCECAGOELDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCECAGOELDP* Clone()
		{
			return ((::GCECAGOELDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEOLFBBEDKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_IEOLFBBEDKH_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCECAGOELDP_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KBKDIKHBIGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_KBKDIKHBIGF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCECAGOELDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCECAGOELDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + GCECAGOELDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCECAGOELDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCECAGOELDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCECAGOELDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + GCECAGOELDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCECAGOELDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
