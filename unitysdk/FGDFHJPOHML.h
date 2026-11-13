#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGDFHJPOHML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGDFHJPOHML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8BF080)
#define FGDFHJPOHML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8BF2A0)
#define FGDFHJPOHML_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8BECD0)
#define FGDFHJPOHML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8BECA0)
#define FGDFHJPOHML_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BEC90)
#define FGDFHJPOHML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8BEE00)
#define FGDFHJPOHML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8BED30)
#define FGDFHJPOHML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8BEF70)
#define FGDFHJPOHML_GIHLMAIBCFP_OFFSET UNITYSDK_OFFSET(0x1F8BED10)
#define FGDFHJPOHML_GPOBHDMPPHN_OFFSET UNITYSDK_OFFSET(0x1F8BED20)
#define FGDFHJPOHML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8BEC50)
#define FGDFHJPOHML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8BF140)
#define FGDFHJPOHML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8BF110)
#define FGDFHJPOHML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8BEC80)
#define FGDFHJPOHML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8BEFA0)
#define FGDFHJPOHML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8BF000)

inline static constexpr unsigned int FGDFHJPOHML_TypeDefinitionIndex = 32068;

	class FGDFHJPOHML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFBCDJEFBLH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FGDFHJPOHML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGDFHJPOHML*>**)UnitySDK::FromName("", "FGDFHJPOHML")->GetStaticField(0x4F730);
		}

		// static const ::System::Object CGBCGHFIIHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGDFHJPOHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGDFHJPOHML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGDFHJPOHML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGDFHJPOHML*>*(*)())((::PBYTE)hIl2Cpp + FGDFHJPOHML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGDFHJPOHML* Clone()
		{
			return ((::FGDFHJPOHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CLONE_OFFSET))(this);
		}

		::System::UInt32 GIHLMAIBCFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GIHLMAIBCFP_OFFSET))(this);
		}

		::System::Void GPOBHDMPPHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GPOBHDMPPHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGDFHJPOHML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGDFHJPOHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
