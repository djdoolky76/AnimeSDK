#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJAGFPLDCAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJAGFPLDCAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA85580)
#define JJAGFPLDCAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA857A0)
#define JJAGFPLDCAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA851D0)
#define JJAGFPLDCAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA851A0)
#define JJAGFPLDCAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA85190)
#define JJAGFPLDCAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA85300)
#define JJAGFPLDCAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA85230)
#define JJAGFPLDCAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA85220)
#define JJAGFPLDCAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA85470)
#define JJAGFPLDCAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA85150)
#define JJAGFPLDCAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA85640)
#define JJAGFPLDCAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA85610)
#define JJAGFPLDCAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA85210)
#define JJAGFPLDCAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA85180)
#define JJAGFPLDCAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA854A0)
#define JJAGFPLDCAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA85500)

inline static constexpr unsigned int JJAGFPLDCAF_TypeDefinitionIndex = 32177;

	class JJAGFPLDCAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>**)UnitySDK::FromName("", "JJAGFPLDCAF")->GetStaticField(0x4D610);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJAGFPLDCAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>*(*)())((::PBYTE)hIl2Cpp + JJAGFPLDCAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJAGFPLDCAF* Clone()
		{
			return ((::JJAGFPLDCAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJAGFPLDCAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJAGFPLDCAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
