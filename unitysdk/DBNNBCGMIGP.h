#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNNBCGMIGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBNNBCGMIGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E135410)
#define DBNNBCGMIGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1356E0)
#define DBNNBCGMIGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E135010)
#define DBNNBCGMIGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E134FE0)
#define DBNNBCGMIGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E134FD0)
#define DBNNBCGMIGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1351D0)
#define DBNNBCGMIGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1350C0)
#define DBNNBCGMIGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1352A0)
#define DBNNBCGMIGP_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x1E1350B0)
#define DBNNBCGMIGP_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x1E1350A0)
#define DBNNBCGMIGP_INPAIIBHHAF_OFFSET UNITYSDK_OFFSET(0x1E135090)
#define DBNNBCGMIGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E134F60)
#define DBNNBCGMIGP_JMCIHLIBMEI_OFFSET UNITYSDK_OFFSET(0x1E135080)
#define DBNNBCGMIGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E135560)
#define DBNNBCGMIGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E135520)
#define DBNNBCGMIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E134FC0)
#define DBNNBCGMIGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1352D0)
#define DBNNBCGMIGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E135330)

inline static constexpr unsigned int DBNNBCGMIGP_TypeDefinitionIndex = 25076;

	class DBNNBCGMIGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIGNEKHKOCK; // 0x18
		::System::UInt32 FMCFBIJJCBM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DBNNBCGMIGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBNNBCGMIGP*>**)UnitySDK::FromName("", "DBNNBCGMIGP")->GetStaticField(0x23320);
		}

		// static const ::System::Object IOOHJPAHKFN; // 0x0
		// static const ::System::Object BMLOHFPHLOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBNNBCGMIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNNBCGMIGP*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBNNBCGMIGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBNNBCGMIGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBNNBCGMIGP*>*(*)())((::PBYTE)hIl2Cpp + DBNNBCGMIGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBNNBCGMIGP* Clone()
		{
			return ((::DBNNBCGMIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JMCIHLIBMEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_JMCIHLIBMEI_OFFSET))(this);
		}

		::System::Void INPAIIBHHAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_INPAIIBHHAF_OFFSET))(this, a1);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBNNBCGMIGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBNNBCGMIGP*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBNNBCGMIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNNBCGMIGP*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBNNBCGMIGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
