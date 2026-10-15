#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOMEMIEAPJO;
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOMEMIEAPJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6ABF20)
#define IOMEMIEAPJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC1A0)
#define IOMEMIEAPJO_CGFNAFJEEKG_OFFSET UNITYSDK_OFFSET(0x1E6AB980)
#define IOMEMIEAPJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AB8E0)
#define IOMEMIEAPJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AB860)
#define IOMEMIEAPJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB850)
#define IOMEMIEAPJO_DKPHFOGFAGI_OFFSET UNITYSDK_OFFSET(0x1E6AB970)
#define IOMEMIEAPJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6ABB00)
#define IOMEMIEAPJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AB990)
#define IOMEMIEAPJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6ABDD0)
#define IOMEMIEAPJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AB810)
#define IOMEMIEAPJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AC020)
#define IOMEMIEAPJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6ABF80)
#define IOMEMIEAPJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB840)
#define IOMEMIEAPJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6ABE30)
#define IOMEMIEAPJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6ABE90)

inline static constexpr unsigned int IOMEMIEAPJO_TypeDefinitionIndex = 32860;

	class IOMEMIEAPJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KOFMGCNIMIN* NLLPBGADLLJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IOMEMIEAPJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOMEMIEAPJO*>**)UnitySDK::FromName("", "IOMEMIEAPJO")->GetStaticField(0x55030);
		}

		// static const ::System::Object CCMJLMIDGGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOMEMIEAPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOMEMIEAPJO*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOMEMIEAPJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOMEMIEAPJO*>*(*)())((::PBYTE)hIl2Cpp + IOMEMIEAPJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOMEMIEAPJO* Clone()
		{
			return ((::IOMEMIEAPJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CLONE_OFFSET))(this);
		}

		::KOFMGCNIMIN* DKPHFOGFAGI()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_DKPHFOGFAGI_OFFSET))(this);
		}

		::System::Void CGFNAFJEEKG(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CGFNAFJEEKG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOMEMIEAPJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOMEMIEAPJO*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOMEMIEAPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOMEMIEAPJO*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOMEMIEAPJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
