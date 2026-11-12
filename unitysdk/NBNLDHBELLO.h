#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNLDHBELLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBNLDHBELLO_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0x1FE121F0)
#define NBNLDHBELLO_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1FE121D0)
#define NBNLDHBELLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE12550)
#define NBNLDHBELLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE12820)
#define NBNLDHBELLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE12150)
#define NBNLDHBELLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE12120)
#define NBNLDHBELLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE12110)
#define NBNLDHBELLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE12310)
#define NBNLDHBELLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE12200)
#define NBNLDHBELLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE123E0)
#define NBNLDHBELLO_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1FE121C0)
#define NBNLDHBELLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE120A0)
#define NBNLDHBELLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE126A0)
#define NBNLDHBELLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE12660)
#define NBNLDHBELLO_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0x1FE121E0)
#define NBNLDHBELLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE12100)
#define NBNLDHBELLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE12410)
#define NBNLDHBELLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE12470)

inline static constexpr unsigned int NBNLDHBELLO_TypeDefinitionIndex = 30182;

	class NBNLDHBELLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		::System::UInt32 FADHDFLHBKG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NBNLDHBELLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBNLDHBELLO*>**)UnitySDK::FromName("", "NBNLDHBELLO")->GetStaticField(0x1E530);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object MMIFCNAPHKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBNLDHBELLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBNLDHBELLO*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNLDHBELLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBNLDHBELLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBNLDHBELLO*>*(*)())((::PBYTE)hIl2Cpp + NBNLDHBELLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBNLDHBELLO* Clone()
		{
			return ((::NBNLDHBELLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBNLDHBELLO_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 NHONNHCIOOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBNLDHBELLO_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBNLDHBELLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBNLDHBELLO*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBNLDHBELLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBNLDHBELLO*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBNLDHBELLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
