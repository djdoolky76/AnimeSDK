#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGAMIKNEDGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGAMIKNEDGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E449F20)
#define GGAMIKNEDGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44A140)
#define GGAMIKNEDGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E449B70)
#define GGAMIKNEDGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E449B40)
#define GGAMIKNEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E449B30)
#define GGAMIKNEDGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E449CA0)
#define GGAMIKNEDGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E449BD0)
#define GGAMIKNEDGE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E449BC0)
#define GGAMIKNEDGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E449E10)
#define GGAMIKNEDGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E449AF0)
#define GGAMIKNEDGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E449FE0)
#define GGAMIKNEDGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E449FB0)
#define GGAMIKNEDGE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E449BB0)
#define GGAMIKNEDGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E449B20)
#define GGAMIKNEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E449E40)
#define GGAMIKNEDGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E449EA0)

inline static constexpr unsigned int GGAMIKNEDGE_TypeDefinitionIndex = 29556;

	class GGAMIKNEDGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GGAMIKNEDGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGAMIKNEDGE*>**)UnitySDK::FromName("", "GGAMIKNEDGE")->GetStaticField(0x14FA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGAMIKNEDGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAMIKNEDGE*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGAMIKNEDGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGAMIKNEDGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGAMIKNEDGE*>*(*)())((::PBYTE)hIl2Cpp + GGAMIKNEDGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGAMIKNEDGE* Clone()
		{
			return ((::GGAMIKNEDGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGAMIKNEDGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGAMIKNEDGE*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGAMIKNEDGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAMIKNEDGE*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGAMIKNEDGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
