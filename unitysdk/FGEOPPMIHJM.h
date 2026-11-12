#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGEOPPMIHJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGEOPPMIHJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6638E0)
#define FGEOPPMIHJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F663B00)
#define FGEOPPMIHJM_CKPDGGDDPLB_OFFSET UNITYSDK_OFFSET(0x1F663550)
#define FGEOPPMIHJM_CLKLHEIJMKB_OFFSET UNITYSDK_OFFSET(0x1F663540)
#define FGEOPPMIHJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6634D0)
#define FGEOPPMIHJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6634A0)
#define FGEOPPMIHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F663490)
#define FGEOPPMIHJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F663660)
#define FGEOPPMIHJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F663560)
#define FGEOPPMIHJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6637D0)
#define FGEOPPMIHJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F663420)
#define FGEOPPMIHJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6639A0)
#define FGEOPPMIHJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F663970)
#define FGEOPPMIHJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F663480)
#define FGEOPPMIHJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F663800)
#define FGEOPPMIHJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F663860)

inline static constexpr unsigned int FGEOPPMIHJM_TypeDefinitionIndex = 30588;

	class FGEOPPMIHJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNAGOBDKKEJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FGEOPPMIHJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGEOPPMIHJM*>**)UnitySDK::FromName("", "FGEOPPMIHJM")->GetStaticField(0x434C0);
		}

		// static const ::System::Object ONCNEMGOHKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGEOPPMIHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGEOPPMIHJM*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGEOPPMIHJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGEOPPMIHJM*>*(*)())((::PBYTE)hIl2Cpp + FGEOPPMIHJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGEOPPMIHJM* Clone()
		{
			return ((::FGEOPPMIHJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CLKLHEIJMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CLKLHEIJMKB_OFFSET))(this);
		}

		::System::Void CKPDGGDDPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CKPDGGDDPLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGEOPPMIHJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGEOPPMIHJM*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGEOPPMIHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGEOPPMIHJM*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGEOPPMIHJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
