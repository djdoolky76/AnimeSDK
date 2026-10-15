#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLDICEFCIL;
class PKPFDGEKLOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKPFDGEKLOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF69E40)
#define PKPFDGEKLOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A1C0)
#define PKPFDGEKLOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF69960)
#define PKPFDGEKLOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF69830)
#define PKPFDGEKLOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF697A0)
#define PKPFDGEKLOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF69A00)
#define PKPFDGEKLOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF699D0)
#define PKPFDGEKLOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF69B50)
#define PKPFDGEKLOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF69760)
#define PKPFDGEKLOO_KGJFEHFNPBK_OFFSET UNITYSDK_OFFSET(0x1DF69990)
#define PKPFDGEKLOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6A070)
#define PKPFDGEKLOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF69FB0)
#define PKPFDGEKLOO_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1DF699B0)
#define PKPFDGEKLOO_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DF699C0)
#define PKPFDGEKLOO_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1DF699A0)
#define PKPFDGEKLOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF69790)
#define PKPFDGEKLOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF69CA0)
#define PKPFDGEKLOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF69D00)

inline static constexpr unsigned int PKPFDGEKLOO_TypeDefinitionIndex = 26699;

	class PKPFDGEKLOO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>* MLJLKLEGOJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CBFGBDBJHID; // 0x20
		::System::UInt32 ABPDPMHFFNN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PKPFDGEKLOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKPFDGEKLOO*>**)UnitySDK::FromName("", "PKPFDGEKLOO")->GetStaticField(0x3AE60);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PKPFDGEKLOO")->GetStaticField(0x3AE68);
		}

		static ::Google::Protobuf::FieldCodec_1<::AKLDICEFCIL*>** StaticGet_BKNKGIECAFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::AKLDICEFCIL*>**)UnitySDK::FromName("", "PKPFDGEKLOO")->GetStaticField(0x3AE70);
		}

		// static const ::System::Object LDJIFNOGOFD; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKPFDGEKLOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPFDGEKLOO*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPFDGEKLOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKPFDGEKLOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKPFDGEKLOO*>*(*)())((::PBYTE)hIl2Cpp + PKPFDGEKLOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKPFDGEKLOO* Clone()
		{
			return ((::PKPFDGEKLOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>* KGJFEHFNPBK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_KGJFEHFNPBK_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKPFDGEKLOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKPFDGEKLOO*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKPFDGEKLOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPFDGEKLOO*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKPFDGEKLOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
