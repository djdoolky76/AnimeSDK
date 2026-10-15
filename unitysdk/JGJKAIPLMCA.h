#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGJKAIPLMCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGJKAIPLMCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70DBC0)
#define JGJKAIPLMCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70DEB0)
#define JGJKAIPLMCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70D6C0)
#define JGJKAIPLMCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70D630)
#define JGJKAIPLMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70D5E0)
#define JGJKAIPLMCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70D800)
#define JGJKAIPLMCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70D760)
#define JGJKAIPLMCA_FJKFKPGODLI_OFFSET UNITYSDK_OFFSET(0x1E70D750)
#define JGJKAIPLMCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70D900)
#define JGJKAIPLMCA_IDGILEEBPGL_OFFSET UNITYSDK_OFFSET(0x1E70D740)
#define JGJKAIPLMCA_JDBAOACFNBN_OFFSET UNITYSDK_OFFSET(0x1E70D730)
#define JGJKAIPLMCA_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E70D710)
#define JGJKAIPLMCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70D570)
#define JGJKAIPLMCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70DDC0)
#define JGJKAIPLMCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70DD60)
#define JGJKAIPLMCA_MOODLCCFDCB_OFFSET UNITYSDK_OFFSET(0x1E70D720)
#define JGJKAIPLMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70D5D0)
#define JGJKAIPLMCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70DA00)
#define JGJKAIPLMCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70DA60)

inline static constexpr unsigned int JGJKAIPLMCA_TypeDefinitionIndex = 32473;

	class JGJKAIPLMCA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IHNLHBPMGJN; // 0x20
		::System::UInt32 DEMHGLHJPHG; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JGJKAIPLMCA")->GetStaticField(0x1E480);
		}

		static ::Google::Protobuf::MessageParser_1<::JGJKAIPLMCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGJKAIPLMCA*>**)UnitySDK::FromName("", "JGJKAIPLMCA")->GetStaticField(0x1E488);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object BJDMEANIMJP; // 0x0
		// static const ::System::Object OELHLDNMNPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGJKAIPLMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGJKAIPLMCA*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGJKAIPLMCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGJKAIPLMCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGJKAIPLMCA*>*(*)())((::PBYTE)hIl2Cpp + JGJKAIPLMCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGJKAIPLMCA* Clone()
		{
			return ((::JGJKAIPLMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_JINLEONNCEN_OFFSET))(this);
		}

		::System::UInt32 MOODLCCFDCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_MOODLCCFDCB_OFFSET))(this);
		}

		::System::Void JDBAOACFNBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_JDBAOACFNBN_OFFSET))(this, a1);
		}

		::System::UInt32 IDGILEEBPGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_IDGILEEBPGL_OFFSET))(this);
		}

		::System::Void FJKFKPGODLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_FJKFKPGODLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGJKAIPLMCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGJKAIPLMCA*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGJKAIPLMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGJKAIPLMCA*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGJKAIPLMCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
