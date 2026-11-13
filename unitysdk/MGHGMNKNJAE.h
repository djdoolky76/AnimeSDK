#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHGMNKNJAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGHGMNKNJAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA4DCB0)
#define MGHGMNKNJAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4DED0)
#define MGHGMNKNJAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA4D8A0)
#define MGHGMNKNJAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA4D870)
#define MGHGMNKNJAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D860)
#define MGHGMNKNJAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA4DA30)
#define MGHGMNKNJAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA4D930)
#define MGHGMNKNJAE_FFPLHIKMOKC_OFFSET UNITYSDK_OFFSET(0x1FA4D920)
#define MGHGMNKNJAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA4DBA0)
#define MGHGMNKNJAE_JBLCFIHLBIE_OFFSET UNITYSDK_OFFSET(0x1FA4D910)
#define MGHGMNKNJAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA4D7F0)
#define MGHGMNKNJAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA4DD70)
#define MGHGMNKNJAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA4DD40)
#define MGHGMNKNJAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D850)
#define MGHGMNKNJAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA4DBD0)
#define MGHGMNKNJAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA4DC30)

inline static constexpr unsigned int MGHGMNKNJAE_TypeDefinitionIndex = 30311;

	class MGHGMNKNJAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJAHEGPHBEI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MGHGMNKNJAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGHGMNKNJAE*>**)UnitySDK::FromName("", "MGHGMNKNJAE")->GetStaticField(0x46EA0);
		}

		// static const ::System::Object ACDLIEANFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGHGMNKNJAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHGMNKNJAE*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHGMNKNJAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGHGMNKNJAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGHGMNKNJAE*>*(*)())((::PBYTE)hIl2Cpp + MGHGMNKNJAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGHGMNKNJAE* Clone()
		{
			return ((::MGHGMNKNJAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBLCFIHLBIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_JBLCFIHLBIE_OFFSET))(this);
		}

		::System::Void FFPLHIKMOKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_FFPLHIKMOKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGHGMNKNJAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHGMNKNJAE*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGHGMNKNJAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHGMNKNJAE*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGHGMNKNJAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
