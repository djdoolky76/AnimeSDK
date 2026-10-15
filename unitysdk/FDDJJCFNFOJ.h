#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDJJCFNFOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDDJJCFNFOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3259A0)
#define FDDJJCFNFOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E325BC0)
#define FDDJJCFNFOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3255F0)
#define FDDJJCFNFOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3255C0)
#define FDDJJCFNFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3255B0)
#define FDDJJCFNFOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E325720)
#define FDDJJCFNFOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E325650)
#define FDDJJCFNFOJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E325640)
#define FDDJJCFNFOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E325890)
#define FDDJJCFNFOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E325570)
#define FDDJJCFNFOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E325A60)
#define FDDJJCFNFOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E325A30)
#define FDDJJCFNFOJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E325630)
#define FDDJJCFNFOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3255A0)
#define FDDJJCFNFOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3258C0)
#define FDDJJCFNFOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E325920)

inline static constexpr unsigned int FDDJJCFNFOJ_TypeDefinitionIndex = 34867;

	class FDDJJCFNFOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDDJJCFNFOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDDJJCFNFOJ*>**)UnitySDK::FromName("", "FDDJJCFNFOJ")->GetStaticField(0x52130);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDDJJCFNFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDJJCFNFOJ*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDDJJCFNFOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDDJJCFNFOJ*>*(*)())((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDDJJCFNFOJ* Clone()
		{
			return ((::FDDJJCFNFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDDJJCFNFOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDDJJCFNFOJ*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDDJJCFNFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDJJCFNFOJ*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
