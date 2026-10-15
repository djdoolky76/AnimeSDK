#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLDKOELBPGA;
class NJEBDKOJNGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJEBDKOJNGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB3CAA0)
#define NJEBDKOJNGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3CE20)
#define NJEBDKOJNGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB3C590)
#define NJEBDKOJNGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB3C4D0)
#define NJEBDKOJNGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3C480)
#define NJEBDKOJNGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB3C7A0)
#define NJEBDKOJNGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB3C610)
#define NJEBDKOJNGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB3C8D0)
#define NJEBDKOJNGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB3C410)
#define NJEBDKOJNGA_LKFFJNLJLIF_OFFSET UNITYSDK_OFFSET(0x1EB3C600)
#define NJEBDKOJNGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB3CC50)
#define NJEBDKOJNGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB3CBB0)
#define NJEBDKOJNGA_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1EB3C5F0)
#define NJEBDKOJNGA_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1EB3C5E0)
#define NJEBDKOJNGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB3C470)
#define NJEBDKOJNGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3C940)
#define NJEBDKOJNGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB3C9A0)

inline static constexpr unsigned int NJEBDKOJNGA_TypeDefinitionIndex = 27896;

	class NJEBDKOJNGA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FLDKOELBPGA*>* BANDBEEFHOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JENHMINODOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NJEBDKOJNGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJEBDKOJNGA*>**)UnitySDK::FromName("", "NJEBDKOJNGA")->GetStaticField(0x49490);
		}

		static ::Google::Protobuf::FieldCodec_1<::FLDKOELBPGA*>** StaticGet_LFMDNKDFGPF()
		{
			return (::Google::Protobuf::FieldCodec_1<::FLDKOELBPGA*>**)UnitySDK::FromName("", "NJEBDKOJNGA")->GetStaticField(0x49498);
		}

		// static const ::System::Object PMFNLNMINAP; // 0x0
		// static const ::System::Object IGNAPNDPBKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJEBDKOJNGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJEBDKOJNGA*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEBDKOJNGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJEBDKOJNGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJEBDKOJNGA*>*(*)())((::PBYTE)hIl2Cpp + NJEBDKOJNGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJEBDKOJNGA* Clone()
		{
			return ((::NJEBDKOJNGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FLDKOELBPGA*>* LKFFJNLJLIF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FLDKOELBPGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_LKFFJNLJLIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJEBDKOJNGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJEBDKOJNGA*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJEBDKOJNGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJEBDKOJNGA*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJEBDKOJNGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
