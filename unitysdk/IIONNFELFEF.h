#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIONNFELFEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIONNFELFEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65EFA0)
#define IIONNFELFEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65F230)
#define IIONNFELFEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65EB10)
#define IIONNFELFEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65EA80)
#define IIONNFELFEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65EA30)
#define IIONNFELFEF_EIHBHBIBNBL_OFFSET UNITYSDK_OFFSET(0x1E65EB70)
#define IIONNFELFEF_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E65EB50)
#define IIONNFELFEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65EC10)
#define IIONNFELFEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65EB90)
#define IIONNFELFEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65ED10)
#define IIONNFELFEF_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E65EB40)
#define IIONNFELFEF_INIAEFKIMIF_OFFSET UNITYSDK_OFFSET(0x1E65EB60)
#define IIONNFELFEF_JHBEABOPDPB_OFFSET UNITYSDK_OFFSET(0x1E65EB80)
#define IIONNFELFEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65E9F0)
#define IIONNFELFEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65F160)
#define IIONNFELFEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65F100)
#define IIONNFELFEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65EA20)
#define IIONNFELFEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65EE10)
#define IIONNFELFEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65EE70)

inline static constexpr unsigned int IIONNFELFEF_TypeDefinitionIndex = 25876;

	class IIONNFELFEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDGABKLFBII; // 0x18
		::System::UInt32 AEKECGJLGEF; // 0x20
		::System::UInt32 HKBELAOEBIC; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GEHKNNBGFMJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IIONNFELFEF")->GetStaticField(0x4F450);
		}

		static ::Google::Protobuf::MessageParser_1<::IIONNFELFEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIONNFELFEF*>**)UnitySDK::FromName("", "IIONNFELFEF")->GetStaticField(0x4F458);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object PLLHPONBKKB; // 0x0
		// static const ::System::Object JJANKPOPOKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIONNFELFEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIONNFELFEF*))((::PBYTE)hIl2Cpp + IIONNFELFEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIONNFELFEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIONNFELFEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIONNFELFEF*>*(*)())((::PBYTE)hIl2Cpp + IIONNFELFEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIONNFELFEF* Clone()
		{
			return ((::IIONNFELFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIONNFELFEF_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 INIAEFKIMIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_INIAEFKIMIF_OFFSET))(this);
		}

		::System::Void EIHBHBIBNBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIONNFELFEF_EIHBHBIBNBL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHBEABOPDPB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_JHBEABOPDPB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIONNFELFEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIONNFELFEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIONNFELFEF*))((::PBYTE)hIl2Cpp + IIONNFELFEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIONNFELFEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIONNFELFEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIONNFELFEF*))((::PBYTE)hIl2Cpp + IIONNFELFEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIONNFELFEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
