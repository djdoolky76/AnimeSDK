#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBEHJJBBLPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBEHJJBBLPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E305B90)
#define FBEHJJBBLPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E305DB0)
#define FBEHJJBBLPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3057E0)
#define FBEHJJBBLPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3057B0)
#define FBEHJJBBLPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3057A0)
#define FBEHJJBBLPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E305910)
#define FBEHJJBBLPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E305840)
#define FBEHJJBBLPL_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E305830)
#define FBEHJJBBLPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E305A80)
#define FBEHJJBBLPL_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E305820)
#define FBEHJJBBLPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E305760)
#define FBEHJJBBLPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E305C50)
#define FBEHJJBBLPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E305C20)
#define FBEHJJBBLPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E305790)
#define FBEHJJBBLPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E305AB0)
#define FBEHJJBBLPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E305B10)

inline static constexpr unsigned int FBEHJJBBLPL_TypeDefinitionIndex = 33611;

	class FBEHJJBBLPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBEHJJBBLPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBEHJJBBLPL*>**)UnitySDK::FromName("", "FBEHJJBBLPL")->GetStaticField(0x4E3D0);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBEHJJBBLPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBEHJJBBLPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBEHJJBBLPL*>*(*)())((::PBYTE)hIl2Cpp + FBEHJJBBLPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBEHJJBBLPL* Clone()
		{
			return ((::FBEHJJBBLPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBEHJJBBLPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBEHJJBBLPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
