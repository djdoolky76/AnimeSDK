#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGHGCIMKGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFGHGCIMKGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2007D9E0)
#define GFGHGCIMKGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2007DCC0)
#define GFGHGCIMKGA_CILLMCNJNPH_OFFSET UNITYSDK_OFFSET(0x2007D580)
#define GFGHGCIMKGA_CLONE_OFFSET UNITYSDK_OFFSET(0x2007D550)
#define GFGHGCIMKGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2007D4C0)
#define GFGHGCIMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0x2007D470)
#define GFGHGCIMKGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2007D6B0)
#define GFGHGCIMKGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2007D5B0)
#define GFGHGCIMKGA_FHKADBNOEKC_OFFSET UNITYSDK_OFFSET(0x2007D5A0)
#define GFGHGCIMKGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2007D7A0)
#define GFGHGCIMKGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2007D430)
#define GFGHGCIMKGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2007DB10)
#define GFGHGCIMKGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2007DAC0)
#define GFGHGCIMKGA_PBALFNKMMOD_OFFSET UNITYSDK_OFFSET(0x2007D590)
#define GFGHGCIMKGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2007D460)
#define GFGHGCIMKGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2007D8A0)
#define GFGHGCIMKGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2007D900)

inline static constexpr unsigned int GFGHGCIMKGA_TypeDefinitionIndex = 33581;

	class GFGHGCIMKGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHJKOKEOBCA; // 0x18
		::System::UInt32 BLLKFIIICJJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GBBDIELKEFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GFGHGCIMKGA")->GetStaticField(0xB680);
		}

		static ::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>**)UnitySDK::FromName("", "GFGHGCIMKGA")->GetStaticField(0xB688);
		}

		// static const ::System::Object EOINHHPHIMJ; // 0x0
		// static const ::System::Object NKOFPBKLDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFGHGCIMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGHGCIMKGA*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>*(*)())((::PBYTE)hIl2Cpp + GFGHGCIMKGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFGHGCIMKGA* Clone()
		{
			return ((::GFGHGCIMKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 CILLMCNJNPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CILLMCNJNPH_OFFSET))(this);
		}

		::System::Void PBALFNKMMOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_PBALFNKMMOD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHKADBNOEKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_FHKADBNOEKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFGHGCIMKGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFGHGCIMKGA*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFGHGCIMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGHGCIMKGA*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFGHGCIMKGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
