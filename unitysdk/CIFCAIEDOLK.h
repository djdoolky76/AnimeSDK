#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFCAIEDOLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIFCAIEDOLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D1AA0)
#define CIFCAIEDOLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1D70)
#define CIFCAIEDOLK_CILLMCNJNPH_OFFSET UNITYSDK_OFFSET(0x1E0D1710)
#define CIFCAIEDOLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D16A0)
#define CIFCAIEDOLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D1670)
#define CIFCAIEDOLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1660)
#define CIFCAIEDOLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D1860)
#define CIFCAIEDOLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D1750)
#define CIFCAIEDOLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D1930)
#define CIFCAIEDOLK_HPOKAAGFPPH_OFFSET UNITYSDK_OFFSET(0x1E0D1740)
#define CIFCAIEDOLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D15F0)
#define CIFCAIEDOLK_LJODPEHPKEF_OFFSET UNITYSDK_OFFSET(0x1E0D1730)
#define CIFCAIEDOLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D1BF0)
#define CIFCAIEDOLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D1BB0)
#define CIFCAIEDOLK_PBALFNKMMOD_OFFSET UNITYSDK_OFFSET(0x1E0D1720)
#define CIFCAIEDOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1650)
#define CIFCAIEDOLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D1960)
#define CIFCAIEDOLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D19C0)

	class CIFCAIEDOLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BLLKFIIICJJ; // 0x18
		::System::UInt32 ENCJIEMOPCH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CIFCAIEDOLK")->GetStaticField(0x17450);
		}

		// static const ::System::Object EOINHHPHIMJ; // 0x0
		// static const ::System::Object LEABPEFKOBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIFCAIEDOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFCAIEDOLK*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CIFCAIEDOLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIFCAIEDOLK* Clone()
		{
			return ((::CIFCAIEDOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CLONE_OFFSET))(this);
		}

		::System::UInt32 CILLMCNJNPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CILLMCNJNPH_OFFSET))(this);
		}

		::System::Void PBALFNKMMOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_PBALFNKMMOD_OFFSET))(this, a1);
		}

		::System::UInt32 LJODPEHPKEF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_LJODPEHPKEF_OFFSET))(this);
		}

		::System::Void HPOKAAGFPPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_HPOKAAGFPPH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIFCAIEDOLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIFCAIEDOLK*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIFCAIEDOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFCAIEDOLK*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIFCAIEDOLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
