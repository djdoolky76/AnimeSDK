#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNMAIIKMGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDNMAIIKMGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D2860)
#define LDNMAIIKMGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D2BF0)
#define LDNMAIIKMGD_CKNMJPOOLCN_OFFSET UNITYSDK_OFFSET(0x1E8D2520)
#define LDNMAIIKMGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D2470)
#define LDNMAIIKMGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D2430)
#define LDNMAIIKMGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D2420)
#define LDNMAIIKMGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D25D0)
#define LDNMAIIKMGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D2550)
#define LDNMAIIKMGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D26A0)
#define LDNMAIIKMGD_IACIPOFGFMF_OFFSET UNITYSDK_OFFSET(0x1E8D2540)
#define LDNMAIIKMGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D23B0)
#define LDNMAIIKMGD_JLODNLHKNJL_OFFSET UNITYSDK_OFFSET(0x1E8D2510)
#define LDNMAIIKMGD_KBLLJPIHIPI_OFFSET UNITYSDK_OFFSET(0x1E8D2530)
#define LDNMAIIKMGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D2A40)
#define LDNMAIIKMGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D29F0)
#define LDNMAIIKMGD_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x1E8D2500)
#define LDNMAIIKMGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D2410)
#define LDNMAIIKMGD_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x1E8D24F0)
#define LDNMAIIKMGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D26D0)
#define LDNMAIIKMGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D2730)

inline static constexpr unsigned int LDNMAIIKMGD_TypeDefinitionIndex = 25140;

	class LDNMAIIKMGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKMBEBBLHEL; // 0x18
		::System::UInt32 FLDJMJEKBME; // 0x1C
		::System::UInt32 PHGOGHEFEKB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LDNMAIIKMGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDNMAIIKMGD*>**)UnitySDK::FromName("", "LDNMAIIKMGD")->GetStaticField(0x2F110);
		}

		// static const ::System::Object AHHJCDPEOPD; // 0x0
		// static const ::System::Object MLJAJPICBMI; // 0x0
		// static const ::System::Object HMHICPKKGBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDNMAIIKMGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNMAIIKMGD*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDNMAIIKMGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDNMAIIKMGD*>*(*)())((::PBYTE)hIl2Cpp + LDNMAIIKMGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDNMAIIKMGD* Clone()
		{
			return ((::LDNMAIIKMGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::UInt32 JLODNLHKNJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_JLODNLHKNJL_OFFSET))(this);
		}

		::System::Void CKNMJPOOLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CKNMJPOOLCN_OFFSET))(this, a1);
		}

		::System::UInt32 KBLLJPIHIPI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_KBLLJPIHIPI_OFFSET))(this);
		}

		::System::Void IACIPOFGFMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_IACIPOFGFMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDNMAIIKMGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDNMAIIKMGD*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDNMAIIKMGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNMAIIKMGD*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDNMAIIKMGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
