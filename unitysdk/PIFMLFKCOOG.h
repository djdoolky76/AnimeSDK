#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIFMLFKCOOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIFMLFKCOOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF178C0)
#define PIFMLFKCOOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF17AE0)
#define PIFMLFKCOOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF174B0)
#define PIFMLFKCOOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF17480)
#define PIFMLFKCOOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF17470)
#define PIFMLFKCOOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF17640)
#define PIFMLFKCOOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF17540)
#define PIFMLFKCOOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF177B0)
#define PIFMLFKCOOG_HBIIAFIBINB_OFFSET UNITYSDK_OFFSET(0x1DF17530)
#define PIFMLFKCOOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF17400)
#define PIFMLFKCOOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF17980)
#define PIFMLFKCOOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF17950)
#define PIFMLFKCOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF17460)
#define PIFMLFKCOOG_PMBIFIHANOI_OFFSET UNITYSDK_OFFSET(0x1DF17520)
#define PIFMLFKCOOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF177E0)
#define PIFMLFKCOOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF17840)

inline static constexpr unsigned int PIFMLFKCOOG_TypeDefinitionIndex = 29332;

	class PIFMLFKCOOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNBAANFEAGG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIFMLFKCOOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIFMLFKCOOG*>**)UnitySDK::FromName("", "PIFMLFKCOOG")->GetStaticField(0x34990);
		}

		// static const ::System::Object MJGCDMOFALP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIFMLFKCOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIFMLFKCOOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIFMLFKCOOG*>*(*)())((::PBYTE)hIl2Cpp + PIFMLFKCOOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIFMLFKCOOG* Clone()
		{
			return ((::PIFMLFKCOOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBIFIHANOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_PMBIFIHANOI_OFFSET))(this);
		}

		::System::Void HBIIAFIBINB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_HBIIAFIBINB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIFMLFKCOOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIFMLFKCOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
