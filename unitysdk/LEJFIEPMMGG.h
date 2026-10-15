#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDMGEGELFM;
class LEJFIEPMMGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEJFIEPMMGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E933D10)
#define LEJFIEPMMGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9340B0)
#define LEJFIEPMMGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E933790)
#define LEJFIEPMMGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9336F0)
#define LEJFIEPMMGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9336B0)
#define LEJFIEPMMGG_DOHCKDBLACH_OFFSET UNITYSDK_OFFSET(0x1E9337D0)
#define LEJFIEPMMGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E933970)
#define LEJFIEPMMGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E933810)
#define LEJFIEPMMGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E933AB0)
#define LEJFIEPMMGG_GLNJAHGFMHB_OFFSET UNITYSDK_OFFSET(0x1E9337C0)
#define LEJFIEPMMGG_IAHPMMCNAHF_OFFSET UNITYSDK_OFFSET(0x1E9337E0)
#define LEJFIEPMMGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E933670)
#define LEJFIEPMMGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E933ED0)
#define LEJFIEPMMGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E933E20)
#define LEJFIEPMMGG_MHJDGCPBPHE_OFFSET UNITYSDK_OFFSET(0x1E933800)
#define LEJFIEPMMGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9336A0)
#define LEJFIEPMMGG_PNOBGLEHPPO_OFFSET UNITYSDK_OFFSET(0x1E9337F0)
#define LEJFIEPMMGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E933B20)
#define LEJFIEPMMGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E933B80)

	class LEJFIEPMMGG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CBDMGEGELFM*>* JCNIGDJFLIP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKMLFMFKHGM; // 0x20
		::System::Boolean NHJPJDMJOMB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LEJFIEPMMGG")->GetStaticField(0x38F70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IOBHIOACFJI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LEJFIEPMMGG")->GetStaticField(0x38F78);
		}

		// static const ::System::Object JENKADHJFPF; // 0x0
		// static const ::System::Object PMMGMKNIEKP; // 0x0
		// static const ::System::Object FGNPLBAEDHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJFIEPMMGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LEJFIEPMMGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEJFIEPMMGG* Clone()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_CLONE_OFFSET))(this);
		}

		::System::Boolean GLNJAHGFMHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_GLNJAHGFMHB_OFFSET))(this);
		}

		::System::Void DOHCKDBLACH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_DOHCKDBLACH_OFFSET))(this, a1);
		}

		::System::UInt32 IAHPMMCNAHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_IAHPMMCNAHF_OFFSET))(this);
		}

		::System::Void PNOBGLEHPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_PNOBGLEHPPO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBDMGEGELFM*>* MHJDGCPBPHE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBDMGEGELFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_MHJDGCPBPHE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEJFIEPMMGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEJFIEPMMGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
