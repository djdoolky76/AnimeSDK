#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKCPJLBOGE;
class FHCEIOHLADG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHKCPJLBOGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C9620)
#define CHKCPJLBOGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9A70)
#define CHKCPJLBOGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C9190)
#define CHKCPJLBOGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C9090)
#define CHKCPJLBOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9020)
#define CHKCPJLBOGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C9280)
#define CHKCPJLBOGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C9220)
#define CHKCPJLBOGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C93D0)
#define CHKCPJLBOGE_GICDDALMJDO_OFFSET UNITYSDK_OFFSET(0x1E0C91F0)
#define CHKCPJLBOGE_HBLCGJJFBIJ_OFFSET UNITYSDK_OFFSET(0x1E0C9200)
#define CHKCPJLBOGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C8FB0)
#define CHKCPJLBOGE_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1E0C91E0)
#define CHKCPJLBOGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C9840)
#define CHKCPJLBOGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C9780)
#define CHKCPJLBOGE_NNLOILOCMPE_OFFSET UNITYSDK_OFFSET(0x1E0C9210)
#define CHKCPJLBOGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9010)
#define CHKCPJLBOGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C9450)
#define CHKCPJLBOGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C94B0)

inline static constexpr unsigned int CHKCPJLBOGE_TypeDefinitionIndex = 29145;

	class CHKCPJLBOGE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FHCEIOHLADG*>* IHIMDHMDDGC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFFEGIMOJGB; // 0x20
		::System::UInt32 MOBKMIPGCKA; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CHKCPJLBOGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHKCPJLBOGE*>**)UnitySDK::FromName("", "CHKCPJLBOGE")->GetStaticField(0x16AD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::FHCEIOHLADG*>** StaticGet_LPJJCPOJOOD()
		{
			return (::Google::Protobuf::FieldCodec_1<::FHCEIOHLADG*>**)UnitySDK::FromName("", "CHKCPJLBOGE")->GetStaticField(0x16AD8);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "CHKCPJLBOGE")->GetStaticField(0x16AE0);
		}

		// static const ::System::Object JEALEDAFMPN; // 0x0
		// static const ::System::Object IOMCEPLLDFP; // 0x0
		// static const ::System::Object APNPNAEJMOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHKCPJLBOGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHKCPJLBOGE*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKCPJLBOGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHKCPJLBOGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHKCPJLBOGE*>*(*)())((::PBYTE)hIl2Cpp + CHKCPJLBOGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHKCPJLBOGE* Clone()
		{
			return ((::CHKCPJLBOGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_KKGOFMBMMAC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FHCEIOHLADG*>* GICDDALMJDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FHCEIOHLADG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_GICDDALMJDO_OFFSET))(this);
		}

		::System::UInt32 HBLCGJJFBIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_HBLCGJJFBIJ_OFFSET))(this);
		}

		::System::Void NNLOILOCMPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_NNLOILOCMPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHKCPJLBOGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHKCPJLBOGE*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHKCPJLBOGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHKCPJLBOGE*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHKCPJLBOGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
