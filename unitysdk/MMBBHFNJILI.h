#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMBBHFNJILI_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1FDC0610)
#define MMBBHFNJILI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC0AD0)
#define MMBBHFNJILI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC0DD0)
#define MMBBHFNJILI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC0560)
#define MMBBHFNJILI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC04E0)
#define MMBBHFNJILI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC04D0)
#define MMBBHFNJILI_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1FDC0620)
#define MMBBHFNJILI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC07B0)
#define MMBBHFNJILI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC0630)
#define MMBBHFNJILI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC0930)
#define MMBBHFNJILI_GKMAAJNGBMB_OFFSET UNITYSDK_OFFSET(0x1FDC0600)
#define MMBBHFNJILI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC0490)
#define MMBBHFNJILI_KFIBOPNLELF_OFFSET UNITYSDK_OFFSET(0x1FDC05F0)
#define MMBBHFNJILI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC0C40)
#define MMBBHFNJILI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC0BA0)
#define MMBBHFNJILI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC04C0)
#define MMBBHFNJILI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC0990)
#define MMBBHFNJILI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC09F0)

inline static constexpr unsigned int MMBBHFNJILI_TypeDefinitionIndex = 33992;

	class MMBBHFNJILI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OKCCLEEPELM* EKDDDAFOADF; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MMBBHFNJILI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMBBHFNJILI*>**)UnitySDK::FromName("", "MMBBHFNJILI")->GetStaticField(0x14070);
		}

		// static const ::System::Object KANPKHJJCDI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBBHFNJILI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMBBHFNJILI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMBBHFNJILI*>*(*)())((::PBYTE)hIl2Cpp + MMBBHFNJILI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMBBHFNJILI* Clone()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CLONE_OFFSET))(this);
		}

		::OKCCLEEPELM* KFIBOPNLELF()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_KFIBOPNLELF_OFFSET))(this);
		}

		::System::Void GKMAAJNGBMB(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_GKMAAJNGBMB_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMBBHFNJILI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
