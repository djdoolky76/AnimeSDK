#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBOIDHOLFGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBOIDHOLFGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4066A0)
#define GBOIDHOLFGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4068C0)
#define GBOIDHOLFGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4062F0)
#define GBOIDHOLFGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4062C0)
#define GBOIDHOLFGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4062B0)
#define GBOIDHOLFGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E406420)
#define GBOIDHOLFGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E406350)
#define GBOIDHOLFGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E406340)
#define GBOIDHOLFGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E406590)
#define GBOIDHOLFGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E406270)
#define GBOIDHOLFGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E406760)
#define GBOIDHOLFGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E406730)
#define GBOIDHOLFGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E406330)
#define GBOIDHOLFGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4062A0)
#define GBOIDHOLFGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4065C0)
#define GBOIDHOLFGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E406620)

inline static constexpr unsigned int GBOIDHOLFGH_TypeDefinitionIndex = 28390;

	class GBOIDHOLFGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBOIDHOLFGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBOIDHOLFGH*>**)UnitySDK::FromName("", "GBOIDHOLFGH")->GetStaticField(0xD090);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBOIDHOLFGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBOIDHOLFGH*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBOIDHOLFGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBOIDHOLFGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBOIDHOLFGH*>*(*)())((::PBYTE)hIl2Cpp + GBOIDHOLFGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBOIDHOLFGH* Clone()
		{
			return ((::GBOIDHOLFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBOIDHOLFGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBOIDHOLFGH*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBOIDHOLFGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBOIDHOLFGH*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBOIDHOLFGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
