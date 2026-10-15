#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGNLOCLNOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNGNLOCLNOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA99600)
#define MNGNLOCLNOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA996A0)
#define MNGNLOCLNOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA992A0)
#define MNGNLOCLNOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA99270)
#define MNGNLOCLNOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA99260)
#define MNGNLOCLNOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA99400)
#define MNGNLOCLNOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA99310)
#define MNGNLOCLNOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA99560)
#define MNGNLOCLNOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA991F0)
#define MNGNLOCLNOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA99650)
#define MNGNLOCLNOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA99620)
#define MNGNLOCLNOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA99250)
#define MNGNLOCLNOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA99590)
#define MNGNLOCLNOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA995F0)

	class MNGNLOCLNOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MNGNLOCLNOF")->GetStaticField(0x59F70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNGNLOCLNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNGNLOCLNOF*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGNLOCLNOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MNGNLOCLNOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNGNLOCLNOF* Clone()
		{
			return ((::MNGNLOCLNOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNGNLOCLNOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNGNLOCLNOF*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNGNLOCLNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNGNLOCLNOF*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNGNLOCLNOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
