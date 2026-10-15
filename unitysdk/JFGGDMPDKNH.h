#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGGDMPDKNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFGGDMPDKNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72B300)
#define JFGGDMPDKNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72B520)
#define JFGGDMPDKNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72AEF0)
#define JFGGDMPDKNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72AEC0)
#define JFGGDMPDKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72AEB0)
#define JFGGDMPDKNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72B080)
#define JFGGDMPDKNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72AF80)
#define JFGGDMPDKNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72B1F0)
#define JFGGDMPDKNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72AE40)
#define JFGGDMPDKNH_LAEJDHAGDDF_OFFSET UNITYSDK_OFFSET(0x1E72AF60)
#define JFGGDMPDKNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72B3C0)
#define JFGGDMPDKNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72B390)
#define JFGGDMPDKNH_MNLCJDHJIOD_OFFSET UNITYSDK_OFFSET(0x1E72AF70)
#define JFGGDMPDKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72AEA0)
#define JFGGDMPDKNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72B220)
#define JFGGDMPDKNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72B280)

inline static constexpr unsigned int JFGGDMPDKNH_TypeDefinitionIndex = 33342;

	class JFGGDMPDKNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPBIGFIAGBO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFGGDMPDKNH")->GetStaticField(0x5FB40);
		}

		// static const ::System::Object FFLOGFNECIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFGGDMPDKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGGDMPDKNH*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGGDMPDKNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFGGDMPDKNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFGGDMPDKNH* Clone()
		{
			return ((::JFGGDMPDKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_CLONE_OFFSET))(this);
		}

		::System::UInt32 LAEJDHAGDDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_LAEJDHAGDDF_OFFSET))(this);
		}

		::System::Void MNLCJDHJIOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_MNLCJDHJIOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFGGDMPDKNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFGGDMPDKNH*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFGGDMPDKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGGDMPDKNH*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFGGDMPDKNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
