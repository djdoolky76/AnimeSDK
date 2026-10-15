#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFNJCDINMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFNJCDINMLA_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1DF28E30)
#define PFNJCDINMLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF29280)
#define PFNJCDINMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF29560)
#define PFNJCDINMLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF28DD0)
#define PFNJCDINMLA_CMLGBNCNCCI_OFFSET UNITYSDK_OFFSET(0x1DF28E70)
#define PFNJCDINMLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF28D90)
#define PFNJCDINMLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF28D80)
#define PFNJCDINMLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF28F10)
#define PFNJCDINMLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF28EB0)
#define PFNJCDINMLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF29000)
#define PFNJCDINMLA_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1DF28E40)
#define PFNJCDINMLA_HNJDJPKNLBA_OFFSET UNITYSDK_OFFSET(0x1DF28EA0)
#define PFNJCDINMLA_IDJHICIEJJO_OFFSET UNITYSDK_OFFSET(0x1DF28E80)
#define PFNJCDINMLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF28D40)
#define PFNJCDINMLA_KCFFENAPECL_OFFSET UNITYSDK_OFFSET(0x1DF28E60)
#define PFNJCDINMLA_MAGAPPDNDDK_OFFSET UNITYSDK_OFFSET(0x1DF28E50)
#define PFNJCDINMLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF294B0)
#define PFNJCDINMLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF29460)
#define PFNJCDINMLA_MKMPLJICAHL_OFFSET UNITYSDK_OFFSET(0x1DF28E90)
#define PFNJCDINMLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF28D70)
#define PFNJCDINMLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF29050)
#define PFNJCDINMLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF290B0)

inline static constexpr unsigned int PFNJCDINMLA_TypeDefinitionIndex = 25899;

	class PFNJCDINMLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHPKCCHOLJO; // 0x18
		::System::UInt32 CILOBIHBOJN; // 0x1C
		::System::Boolean KDKIMLOMINO; // 0x20
		::System::Byte _padding0[0x7];
		::System::UInt64 EMIEPBJAICO; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PFNJCDINMLA")->GetStaticField(0x3C190);
		}

		// static const ::System::Object FMDKMAKPJOB; // 0x0
		// static const ::System::Object LNKFMPGAMAD; // 0x0
		// static const ::System::Object NKEIPCAKBNN; // 0x0
		// static const ::System::Object AOMJCDOGCEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFNJCDINMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFNJCDINMLA*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNJCDINMLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PFNJCDINMLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFNJCDINMLA* Clone()
		{
			return ((::PFNJCDINMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_CLONE_OFFSET))(this);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PFNJCDINMLA_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::System::UInt32 MAGAPPDNDDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_MAGAPPDNDDK_OFFSET))(this);
		}

		::System::Void KCFFENAPECL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFNJCDINMLA_KCFFENAPECL_OFFSET))(this, a1);
		}

		::System::UInt32 CMLGBNCNCCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_CMLGBNCNCCI_OFFSET))(this);
		}

		::System::Void IDJHICIEJJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFNJCDINMLA_IDJHICIEJJO_OFFSET))(this, a1);
		}

		::System::Boolean MKMPLJICAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_MKMPLJICAHL_OFFSET))(this);
		}

		::System::Void HNJDJPKNLBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFNJCDINMLA_HNJDJPKNLBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFNJCDINMLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFNJCDINMLA*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFNJCDINMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFNJCDINMLA*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFNJCDINMLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
