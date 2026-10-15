#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDGJDOHPMPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDGJDOHPMPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F8AC0)
#define LDGJDOHPMPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8D20)
#define LDGJDOHPMPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F86D0)
#define LDGJDOHPMPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F8690)
#define LDGJDOHPMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8680)
#define LDGJDOHPMPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F8840)
#define LDGJDOHPMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F8760)
#define LDGJDOHPMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F8920)
#define LDGJDOHPMPL_GKNHLEFOOGF_OFFSET UNITYSDK_OFFSET(0x1E8F8730)
#define LDGJDOHPMPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F8640)
#define LDGJDOHPMPL_JODBIKCOKPA_OFFSET UNITYSDK_OFFSET(0x1E8F8740)
#define LDGJDOHPMPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F8BA0)
#define LDGJDOHPMPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F8B60)
#define LDGJDOHPMPL_MGHDAHFEGHK_OFFSET UNITYSDK_OFFSET(0x1E8F8750)
#define LDGJDOHPMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8670)
#define LDGJDOHPMPL_PENECCCFLCH_OFFSET UNITYSDK_OFFSET(0x1E8F8720)
#define LDGJDOHPMPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F8950)
#define LDGJDOHPMPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F89B0)

inline static constexpr unsigned int LDGJDOHPMPL_TypeDefinitionIndex = 30232;

	class LDGJDOHPMPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean PLPLJGPDNHC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LAPDJOMDENI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDGJDOHPMPL")->GetStaticField(0x346F0);
		}

		// static const ::System::Object FKILLIKDDFD; // 0x0
		// static const ::System::Object ILFADHBKBCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDGJDOHPMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDGJDOHPMPL*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGJDOHPMPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDGJDOHPMPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDGJDOHPMPL* Clone()
		{
			return ((::LDGJDOHPMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_CLONE_OFFSET))(this);
		}

		::System::Boolean PENECCCFLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_PENECCCFLCH_OFFSET))(this);
		}

		::System::Void GKNHLEFOOGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_GKNHLEFOOGF_OFFSET))(this, a1);
		}

		::System::UInt32 JODBIKCOKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_JODBIKCOKPA_OFFSET))(this);
		}

		::System::Void MGHDAHFEGHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_MGHDAHFEGHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDGJDOHPMPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDGJDOHPMPL*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDGJDOHPMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDGJDOHPMPL*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDGJDOHPMPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
