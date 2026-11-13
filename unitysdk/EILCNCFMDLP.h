#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILCNCFMDLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EILCNCFMDLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF94730)
#define EILCNCFMDLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF94A00)
#define EILCNCFMDLP_CIEEPJAFJGN_OFFSET UNITYSDK_OFFSET(0x1FF94400)
#define EILCNCFMDLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF94380)
#define EILCNCFMDLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF94350)
#define EILCNCFMDLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF94340)
#define EILCNCFMDLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF944F0)
#define EILCNCFMDLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF94410)
#define EILCNCFMDLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF945C0)
#define EILCNCFMDLP_IAJKFOOGAIG_OFFSET UNITYSDK_OFFSET(0x1FF943E0)
#define EILCNCFMDLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF94300)
#define EILCNCFMDLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF94880)
#define EILCNCFMDLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF94840)
#define EILCNCFMDLP_MPAPGAGAOGK_OFFSET UNITYSDK_OFFSET(0x1FF943D0)
#define EILCNCFMDLP_NIJLCPMOJGB_OFFSET UNITYSDK_OFFSET(0x1FF943F0)
#define EILCNCFMDLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF94330)
#define EILCNCFMDLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF945F0)
#define EILCNCFMDLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF94650)

inline static constexpr unsigned int EILCNCFMDLP_TypeDefinitionIndex = 34605;

	class EILCNCFMDLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EGFOJLHABKM; // 0x18
		::System::UInt32 CJELDLFFFOM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EILCNCFMDLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EILCNCFMDLP*>**)UnitySDK::FromName("", "EILCNCFMDLP")->GetStaticField(0x3EB00);
		}

		// static const ::System::Object NEJHACHDJLN; // 0x0
		// static const ::System::Object HFHBNCLBBCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EILCNCFMDLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILCNCFMDLP*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILCNCFMDLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EILCNCFMDLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EILCNCFMDLP*>*(*)())((::PBYTE)hIl2Cpp + EILCNCFMDLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EILCNCFMDLP* Clone()
		{
			return ((::EILCNCFMDLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_CLONE_OFFSET))(this);
		}

		::System::UInt32 MPAPGAGAOGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_MPAPGAGAOGK_OFFSET))(this);
		}

		::System::Void IAJKFOOGAIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILCNCFMDLP_IAJKFOOGAIG_OFFSET))(this, a1);
		}

		::System::UInt32 NIJLCPMOJGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_NIJLCPMOJGB_OFFSET))(this);
		}

		::System::Void CIEEPJAFJGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILCNCFMDLP_CIEEPJAFJGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EILCNCFMDLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EILCNCFMDLP*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EILCNCFMDLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILCNCFMDLP*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EILCNCFMDLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
