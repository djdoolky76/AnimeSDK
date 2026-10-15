#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIBBEEAIDIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIBBEEAIDIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E748BD0)
#define JIBBEEAIDIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E748EA0)
#define JIBBEEAIDIC_CILLMCNJNPH_OFFSET UNITYSDK_OFFSET(0x1E748740)
#define JIBBEEAIDIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7486C0)
#define JIBBEEAIDIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E748620)
#define JIBBEEAIDIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7485D0)
#define JIBBEEAIDIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E748800)
#define JIBBEEAIDIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E748760)
#define JIBBEEAIDIC_FHKADBNOEKC_OFFSET UNITYSDK_OFFSET(0x1E748730)
#define JIBBEEAIDIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E748900)
#define JIBBEEAIDIC_HPOKAAGFPPH_OFFSET UNITYSDK_OFFSET(0x1E748720)
#define JIBBEEAIDIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E748560)
#define JIBBEEAIDIC_LJODPEHPKEF_OFFSET UNITYSDK_OFFSET(0x1E748710)
#define JIBBEEAIDIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E748DC0)
#define JIBBEEAIDIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E748D60)
#define JIBBEEAIDIC_PBALFNKMMOD_OFFSET UNITYSDK_OFFSET(0x1E748750)
#define JIBBEEAIDIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7485C0)
#define JIBBEEAIDIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E748A00)
#define JIBBEEAIDIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E748A60)

inline static constexpr unsigned int JIBBEEAIDIC_TypeDefinitionIndex = 32680;

	class JIBBEEAIDIC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHJKOKEOBCA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BLLKFIIICJJ; // 0x20
		::System::UInt32 ENCJIEMOPCH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_GBBDIELKEFO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JIBBEEAIDIC")->GetStaticField(0x63D10);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JIBBEEAIDIC")->GetStaticField(0x63D18);
		}

		// static const ::System::Object LEABPEFKOBB; // 0x0
		// static const ::System::Object NKOFPBKLDFP; // 0x0
		// static const ::System::Object EOINHHPHIMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIBBEEAIDIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIBBEEAIDIC*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JIBBEEAIDIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIBBEEAIDIC* Clone()
		{
			return ((::JIBBEEAIDIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 LJODPEHPKEF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_LJODPEHPKEF_OFFSET))(this);
		}

		::System::Void HPOKAAGFPPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_HPOKAAGFPPH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHKADBNOEKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_FHKADBNOEKC_OFFSET))(this);
		}

		::System::UInt32 CILLMCNJNPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CILLMCNJNPH_OFFSET))(this);
		}

		::System::Void PBALFNKMMOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_PBALFNKMMOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIBBEEAIDIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIBBEEAIDIC*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIBBEEAIDIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIBBEEAIDIC*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIBBEEAIDIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
