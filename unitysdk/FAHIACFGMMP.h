#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHIACFGMMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAHIACFGMMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3217B0)
#define FAHIACFGMMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E321850)
#define FAHIACFGMMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3214A0)
#define FAHIACFGMMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E321470)
#define FAHIACFGMMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E321460)
#define FAHIACFGMMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3215B0)
#define FAHIACFGMMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3214E0)
#define FAHIACFGMMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E321710)
#define FAHIACFGMMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E321420)
#define FAHIACFGMMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E321800)
#define FAHIACFGMMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3217D0)
#define FAHIACFGMMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E321450)
#define FAHIACFGMMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E321740)
#define FAHIACFGMMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3217A0)

inline static constexpr unsigned int FAHIACFGMMP_TypeDefinitionIndex = 26916;

	class FAHIACFGMMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAHIACFGMMP")->GetStaticField(0x57A50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAHIACFGMMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHIACFGMMP*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHIACFGMMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAHIACFGMMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAHIACFGMMP* Clone()
		{
			return ((::FAHIACFGMMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAHIACFGMMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAHIACFGMMP*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAHIACFGMMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHIACFGMMP*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAHIACFGMMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
