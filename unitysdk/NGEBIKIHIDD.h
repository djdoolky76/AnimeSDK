#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGEBIKIHIDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGEBIKIHIDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE4F150)
#define NGEBIKIHIDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE4F430)
#define NGEBIKIHIDD_CDIMIOFALEG_OFFSET UNITYSDK_OFFSET(0x1FE4ED10)
#define NGEBIKIHIDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE4ECC0)
#define NGEBIKIHIDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE4EC30)
#define NGEBIKIHIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE4EBE0)
#define NGEBIKIHIDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE4EE20)
#define NGEBIKIHIDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE4ED20)
#define NGEBIKIHIDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE4EF10)
#define NGEBIKIHIDD_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1FE4ED00)
#define NGEBIKIHIDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE4EBA0)
#define NGEBIKIHIDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE4F280)
#define NGEBIKIHIDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE4F230)
#define NGEBIKIHIDD_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1FE4ECF0)
#define NGEBIKIHIDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE4EBD0)
#define NGEBIKIHIDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE4F010)
#define NGEBIKIHIDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE4F070)

inline static constexpr unsigned int NGEBIKIHIDD_TypeDefinitionIndex = 33817;

	class NGEBIKIHIDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPFPOIDPHNK; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FNDJLGADNDI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NGEBIKIHIDD")->GetStaticField(0x6A0B0);
		}

		static ::Google::Protobuf::MessageParser_1<::NGEBIKIHIDD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGEBIKIHIDD*>**)UnitySDK::FromName("", "NGEBIKIHIDD")->GetStaticField(0x6A0B8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object KDFONKLNGBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGEBIKIHIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGEBIKIHIDD*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGEBIKIHIDD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGEBIKIHIDD*>*(*)())((::PBYTE)hIl2Cpp + NGEBIKIHIDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGEBIKIHIDD* Clone()
		{
			return ((::NGEBIKIHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CDIMIOFALEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CDIMIOFALEG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGEBIKIHIDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGEBIKIHIDD*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGEBIKIHIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGEBIKIHIDD*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGEBIKIHIDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
