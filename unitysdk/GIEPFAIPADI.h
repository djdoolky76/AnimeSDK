#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIEPFAIPADI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIEPFAIPADI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E467E30)
#define GIEPFAIPADI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4680F0)
#define GIEPFAIPADI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4679B0)
#define GIEPFAIPADI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E467920)
#define GIEPFAIPADI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4678D0)
#define GIEPFAIPADI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E467B30)
#define GIEPFAIPADI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E467A10)
#define GIEPFAIPADI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E467C20)
#define GIEPFAIPADI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E467860)
#define GIEPFAIPADI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E467F20)
#define GIEPFAIPADI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E467ED0)
#define GIEPFAIPADI_MIDICONAIKA_OFFSET UNITYSDK_OFFSET(0x1E467A00)
#define GIEPFAIPADI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4678C0)
#define GIEPFAIPADI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E467D20)
#define GIEPFAIPADI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E467D80)

inline static constexpr unsigned int GIEPFAIPADI_TypeDefinitionIndex = 27623;

	class GIEPFAIPADI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NINBANKALMP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BPHDIAHJNMG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GIEPFAIPADI")->GetStaticField(0x18550);
		}

		static ::Google::Protobuf::MessageParser_1<::GIEPFAIPADI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIEPFAIPADI*>**)UnitySDK::FromName("", "GIEPFAIPADI")->GetStaticField(0x18558);
		}

		// static const ::System::Object LDFBIBLACJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIEPFAIPADI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIEPFAIPADI*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIEPFAIPADI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIEPFAIPADI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIEPFAIPADI*>*(*)())((::PBYTE)hIl2Cpp + GIEPFAIPADI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIEPFAIPADI* Clone()
		{
			return ((::GIEPFAIPADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MIDICONAIKA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_MIDICONAIKA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIEPFAIPADI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIEPFAIPADI*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIEPFAIPADI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIEPFAIPADI*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIEPFAIPADI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
