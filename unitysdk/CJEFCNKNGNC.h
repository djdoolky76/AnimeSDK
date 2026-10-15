#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJEFCNKNGNC;
class IODAFIBPAGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJEFCNKNGNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DCC30)
#define CJEFCNKNGNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DCF30)
#define CJEFCNKNGNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DC760)
#define CJEFCNKNGNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DC6D0)
#define CJEFCNKNGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC690)
#define CJEFCNKNGNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DC900)
#define CJEFCNKNGNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DC7C0)
#define CJEFCNKNGNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DCA20)
#define CJEFCNKNGNC_HIFFPPCLABK_OFFSET UNITYSDK_OFFSET(0x1E0DC7B0)
#define CJEFCNKNGNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DC650)
#define CJEFCNKNGNC_KLGHPGMJMFL_OFFSET UNITYSDK_OFFSET(0x1E0DC7A0)
#define CJEFCNKNGNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DCD70)
#define CJEFCNKNGNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DCCD0)
#define CJEFCNKNGNC_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1E0DC790)
#define CJEFCNKNGNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC680)
#define CJEFCNKNGNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DCA90)
#define CJEFCNKNGNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DCAF0)

inline static constexpr unsigned int CJEFCNKNGNC_TypeDefinitionIndex = 26238;

	class CJEFCNKNGNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NNFMIDOBAGL; // 0x18
		::System::Boolean GDJJEMFEKEH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJEFCNKNGNC")->GetStaticField(0x190D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CJEFCNKNGNC")->GetStaticField(0x190D8);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		// static const ::System::Object OLFAGCHACKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJEFCNKNGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJEFCNKNGNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJEFCNKNGNC* Clone()
		{
			return ((::CJEFCNKNGNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::Boolean KLGHPGMJMFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_KLGHPGMJMFL_OFFSET))(this);
		}

		::System::Void HIFFPPCLABK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_HIFFPPCLABK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJEFCNKNGNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJEFCNKNGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
