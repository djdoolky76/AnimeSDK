#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOHHCCEIICN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOHHCCEIICN_BMEENJGEHKP_OFFSET UNITYSDK_OFFSET(0x202E3FD0)
#define FOHHCCEIICN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202E4340)
#define FOHHCCEIICN_CCTOR_OFFSET UNITYSDK_OFFSET(0x202E45A0)
#define FOHHCCEIICN_CGFNEDCOOMD_OFFSET UNITYSDK_OFFSET(0x202E3FC0)
#define FOHHCCEIICN_CLONE_OFFSET UNITYSDK_OFFSET(0x202E3F50)
#define FOHHCCEIICN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202E3F10)
#define FOHHCCEIICN_CTOR_OFFSET UNITYSDK_OFFSET(0x202E3F00)
#define FOHHCCEIICN_EBJHNOFJBCH_OFFSET UNITYSDK_OFFSET(0x202E3FA0)
#define FOHHCCEIICN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202E40C0)
#define FOHHCCEIICN_EQUALS_OFFSET UNITYSDK_OFFSET(0x202E3FE0)
#define FOHHCCEIICN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202E41A0)
#define FOHHCCEIICN_IPONDLGEAMG_OFFSET UNITYSDK_OFFSET(0x202E3FB0)
#define FOHHCCEIICN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202E3EC0)
#define FOHHCCEIICN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202E4420)
#define FOHHCCEIICN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202E43E0)
#define FOHHCCEIICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202E3EF0)
#define FOHHCCEIICN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202E41D0)
#define FOHHCCEIICN_WRITETO_OFFSET UNITYSDK_OFFSET(0x202E4230)

inline static constexpr unsigned int FOHHCCEIICN_TypeDefinitionIndex = 27546;

	class FOHHCCEIICN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NLNIOMNACDB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KJHFIADNIFI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FOHHCCEIICN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOHHCCEIICN*>**)UnitySDK::FromName("", "FOHHCCEIICN")->GetStaticField(0x50FD0);
		}

		// static const ::System::Object JKJHNGACNOA; // 0x0
		// static const ::System::Object IGFDBNNGBBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOHHCCEIICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOHHCCEIICN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOHHCCEIICN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOHHCCEIICN*>*(*)())((::PBYTE)hIl2Cpp + FOHHCCEIICN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOHHCCEIICN* Clone()
		{
			return ((::FOHHCCEIICN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EBJHNOFJBCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EBJHNOFJBCH_OFFSET))(this);
		}

		::System::Void IPONDLGEAMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHHCCEIICN_IPONDLGEAMG_OFFSET))(this, a1);
		}

		::System::Boolean CGFNEDCOOMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CGFNEDCOOMD_OFFSET))(this);
		}

		::System::Void BMEENJGEHKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOHHCCEIICN_BMEENJGEHKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOHHCCEIICN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOHHCCEIICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
