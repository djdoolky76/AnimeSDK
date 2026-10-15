#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBHBJEOCHL;
class KDHABGDIAPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDHABGDIAPJ_AOPEMLLGCJE_OFFSET UNITYSDK_OFFSET(0x1E7FF900)
#define KDHABGDIAPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7FFEE0)
#define KDHABGDIAPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E800130)
#define KDHABGDIAPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7FF8A0)
#define KDHABGDIAPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FF850)
#define KDHABGDIAPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FF840)
#define KDHABGDIAPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7FFA90)
#define KDHABGDIAPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7FF920)
#define KDHABGDIAPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7FFD60)
#define KDHABGDIAPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7FF800)
#define KDHABGDIAPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7FFFB0)
#define KDHABGDIAPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7FFF40)
#define KDHABGDIAPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7FF830)
#define KDHABGDIAPJ_PPEFNLAPPGP_OFFSET UNITYSDK_OFFSET(0x1E7FF910)
#define KDHABGDIAPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7FFDF0)
#define KDHABGDIAPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7FFE50)

inline static constexpr unsigned int KDHABGDIAPJ_TypeDefinitionIndex = 29021;

	class KDHABGDIAPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HCBHBJEOCHL* JPOPLOGLLDP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDHABGDIAPJ")->GetStaticField(0x10E50);
		}

		// static const ::System::Object IIPKAEGBLDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDHABGDIAPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDHABGDIAPJ*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDHABGDIAPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDHABGDIAPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDHABGDIAPJ* Clone()
		{
			return ((::KDHABGDIAPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_CLONE_OFFSET))(this);
		}

		::HCBHBJEOCHL* AOPEMLLGCJE()
		{
			return ((::HCBHBJEOCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_AOPEMLLGCJE_OFFSET))(this);
		}

		::System::Void PPEFNLAPPGP(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_PPEFNLAPPGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDHABGDIAPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDHABGDIAPJ*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDHABGDIAPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDHABGDIAPJ*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDHABGDIAPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
