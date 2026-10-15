#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLLHNFLCDGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLLHNFLCDGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8631E0)
#define KLLHNFLCDGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E863400)
#define KLLHNFLCDGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E862E30)
#define KLLHNFLCDGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E862E00)
#define KLLHNFLCDGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E862DF0)
#define KLLHNFLCDGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E862F60)
#define KLLHNFLCDGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E862E90)
#define KLLHNFLCDGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E862E80)
#define KLLHNFLCDGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8630D0)
#define KLLHNFLCDGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E862DB0)
#define KLLHNFLCDGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8632A0)
#define KLLHNFLCDGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E863270)
#define KLLHNFLCDGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E862E70)
#define KLLHNFLCDGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E862DE0)
#define KLLHNFLCDGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E863100)
#define KLLHNFLCDGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E863160)

inline static constexpr unsigned int KLLHNFLCDGF_TypeDefinitionIndex = 29601;

	class KLLHNFLCDGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KLLHNFLCDGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLLHNFLCDGF*>**)UnitySDK::FromName("", "KLLHNFLCDGF")->GetStaticField(0x1E4F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLLHNFLCDGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLLHNFLCDGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLLHNFLCDGF*>*(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLLHNFLCDGF* Clone()
		{
			return ((::KLLHNFLCDGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLLHNFLCDGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLLHNFLCDGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
