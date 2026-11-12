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

#define GFGHGCIMKGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F758290)
#define GFGHGCIMKGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F758570)
#define GFGHGCIMKGA_CILLMCNJNPH_OFFSET UNITYSDK_OFFSET(0x1F757E30)
#define GFGHGCIMKGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F757E00)
#define GFGHGCIMKGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F757D70)
#define GFGHGCIMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F757D20)
#define GFGHGCIMKGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F757F60)
#define GFGHGCIMKGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F757E60)
#define GFGHGCIMKGA_FHKADBNOEKC_OFFSET UNITYSDK_OFFSET(0x1F757E50)
#define GFGHGCIMKGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F758050)
#define GFGHGCIMKGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F757CE0)
#define GFGHGCIMKGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7583C0)
#define GFGHGCIMKGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F758370)
#define GFGHGCIMKGA_PBALFNKMMOD_OFFSET UNITYSDK_OFFSET(0x1F757E40)
#define GFGHGCIMKGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F757D10)
#define GFGHGCIMKGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F758150)
#define GFGHGCIMKGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7581B0)

inline static constexpr unsigned int GFGHGCIMKGA_TypeDefinitionIndex = 33581;

	class GFGHGCIMKGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHJKOKEOBCA; // 0x18
		::System::UInt32 BLLKFIIICJJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GBBDIELKEFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GFGHGCIMKGA")->GetStaticField(0xB430);
		}

		static ::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFGHGCIMKGA*>**)UnitySDK::FromName("", "GFGHGCIMKGA")->GetStaticField(0xB438);
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
