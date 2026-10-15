#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPPPNJJJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEBPPPNJJJM_APHKIPOFOND_OFFSET UNITYSDK_OFFSET(0x1E713B70)
#define JEBPPPNJJJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E713ED0)
#define JEBPPPNJJJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7140F0)
#define JEBPPPNJJJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E713B20)
#define JEBPPPNJJJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E713AF0)
#define JEBPPPNJJJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E713AE0)
#define JEBPPPNJJJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E713C50)
#define JEBPPPNJJJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E713B80)
#define JEBPPPNJJJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E713DC0)
#define JEBPPPNJJJM_IMEAPDLLIGP_OFFSET UNITYSDK_OFFSET(0x1E713B60)
#define JEBPPPNJJJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E713AA0)
#define JEBPPPNJJJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E713F90)
#define JEBPPPNJJJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E713F60)
#define JEBPPPNJJJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E713AD0)
#define JEBPPPNJJJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E713DF0)
#define JEBPPPNJJJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E713E50)

inline static constexpr unsigned int JEBPPPNJJJM_TypeDefinitionIndex = 29678;

	class JEBPPPNJJJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HALHANLIABH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEBPPPNJJJM")->GetStaticField(0x5E3F0);
		}

		// static const ::System::Object DJMFOEBOOBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEBPPPNJJJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBPPPNJJJM*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBPPPNJJJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEBPPPNJJJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEBPPPNJJJM* Clone()
		{
			return ((::JEBPPPNJJJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMEAPDLLIGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_IMEAPDLLIGP_OFFSET))(this);
		}

		::System::Void APHKIPOFOND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_APHKIPOFOND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEBPPPNJJJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEBPPPNJJJM*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEBPPPNJJJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBPPPNJJJM*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEBPPPNJJJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
