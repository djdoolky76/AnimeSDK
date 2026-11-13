#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAFDLBFIJMB;
class PNCNGIAMLCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAFDLBFIJMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBB2110)
#define MAFDLBFIJMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB24B0)
#define MAFDLBFIJMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBB1BC0)
#define MAFDLBFIJMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB1B50)
#define MAFDLBFIJMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB1B40)
#define MAFDLBFIJMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBB1E00)
#define MAFDLBFIJMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBB1C80)
#define MAFDLBFIJMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBB1F80)
#define MAFDLBFIJMB_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1FBB1C70)
#define MAFDLBFIJMB_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1FBB1C40)
#define MAFDLBFIJMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBB1B00)
#define MAFDLBFIJMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBB22B0)
#define MAFDLBFIJMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBB21E0)
#define MAFDLBFIJMB_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1FBB1C50)
#define MAFDLBFIJMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBB1B30)
#define MAFDLBFIJMB_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1FBB1C60)
#define MAFDLBFIJMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB1FD0)
#define MAFDLBFIJMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBB2030)

inline static constexpr unsigned int MAFDLBFIJMB_TypeDefinitionIndex = 28184;

	class MAFDLBFIJMB : public ::System::Object
	{
	public:
		::PNCNGIAMLCA* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MAFDLBFIJMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MAFDLBFIJMB*>**)UnitySDK::FromName("", "MAFDLBFIJMB")->GetStaticField(0x302D0);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAFDLBFIJMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAFDLBFIJMB*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAFDLBFIJMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MAFDLBFIJMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MAFDLBFIJMB*>*(*)())((::PBYTE)hIl2Cpp + MAFDLBFIJMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAFDLBFIJMB* Clone()
		{
			return ((::MAFDLBFIJMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_CLONE_OFFSET))(this);
		}

		::PNCNGIAMLCA* JIFPIGBJFEH()
		{
			return ((::PNCNGIAMLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PNCNGIAMLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAFDLBFIJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAFDLBFIJMB*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAFDLBFIJMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAFDLBFIJMB*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAFDLBFIJMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
