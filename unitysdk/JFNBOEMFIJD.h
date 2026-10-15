#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFNBOEMFIJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFNBOEMFIJD_BJOCKPBCGAG_OFFSET UNITYSDK_OFFSET(0x1E7041E0)
#define JFNBOEMFIJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E704570)
#define JFNBOEMFIJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E704790)
#define JFNBOEMFIJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E704160)
#define JFNBOEMFIJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E704130)
#define JFNBOEMFIJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E704120)
#define JFNBOEMFIJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7042F0)
#define JFNBOEMFIJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7041F0)
#define JFNBOEMFIJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E704460)
#define JFNBOEMFIJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7040B0)
#define JFNBOEMFIJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E704630)
#define JFNBOEMFIJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E704600)
#define JFNBOEMFIJD_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1E7041D0)
#define JFNBOEMFIJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E704110)
#define JFNBOEMFIJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E704490)
#define JFNBOEMFIJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7044F0)

inline static constexpr unsigned int JFNBOEMFIJD_TypeDefinitionIndex = 25793;

	class JFNBOEMFIJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKNBMNHONNG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JFNBOEMFIJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFNBOEMFIJD*>**)UnitySDK::FromName("", "JFNBOEMFIJD")->GetStaticField(0x5D930);
		}

		// static const ::System::Object BOIOBAEGIAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFNBOEMFIJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFNBOEMFIJD*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFNBOEMFIJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFNBOEMFIJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFNBOEMFIJD*>*(*)())((::PBYTE)hIl2Cpp + JFNBOEMFIJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFNBOEMFIJD* Clone()
		{
			return ((::JFNBOEMFIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPGLAKFNMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::Void BJOCKPBCGAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_BJOCKPBCGAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFNBOEMFIJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFNBOEMFIJD*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFNBOEMFIJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFNBOEMFIJD*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFNBOEMFIJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
