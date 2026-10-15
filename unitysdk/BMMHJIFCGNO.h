#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMMHJIFCGNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMMHJIFCGNO_BPKBAJOMHDN_OFFSET UNITYSDK_OFFSET(0x1DFFF410)
#define BMMHJIFCGNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFF780)
#define BMMHJIFCGNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFFA50)
#define BMMHJIFCGNO_CHEPFLDNHBB_OFFSET UNITYSDK_OFFSET(0x1DFFF400)
#define BMMHJIFCGNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFFF380)
#define BMMHJIFCGNO_CNIEBCOEJOL_OFFSET UNITYSDK_OFFSET(0x1DFFF3F0)
#define BMMHJIFCGNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFF350)
#define BMMHJIFCGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF340)
#define BMMHJIFCGNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFFF540)
#define BMMHJIFCGNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFFF430)
#define BMMHJIFCGNO_FNCFPCHMKEN_OFFSET UNITYSDK_OFFSET(0x1DFFF420)
#define BMMHJIFCGNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFFF610)
#define BMMHJIFCGNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFFF2D0)
#define BMMHJIFCGNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFF8D0)
#define BMMHJIFCGNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFF890)
#define BMMHJIFCGNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF330)
#define BMMHJIFCGNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFFF640)
#define BMMHJIFCGNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFFF6A0)

inline static constexpr unsigned int BMMHJIFCGNO_TypeDefinitionIndex = 32460;

	class BMMHJIFCGNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFDJOMHDIKL; // 0x18
		::System::UInt32 CGMBDMLPKKK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BMMHJIFCGNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMMHJIFCGNO*>**)UnitySDK::FromName("", "BMMHJIFCGNO")->GetStaticField(0x2B5E0);
		}

		// static const ::System::Object PKHJHCONAAA; // 0x0
		// static const ::System::Object FIBNFGLHBJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMMHJIFCGNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMMHJIFCGNO*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMMHJIFCGNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMMHJIFCGNO*>*(*)())((::PBYTE)hIl2Cpp + BMMHJIFCGNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMMHJIFCGNO* Clone()
		{
			return ((::BMMHJIFCGNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CNIEBCOEJOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CNIEBCOEJOL_OFFSET))(this);
		}

		::System::Void CHEPFLDNHBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CHEPFLDNHBB_OFFSET))(this, a1);
		}

		::System::UInt32 BPKBAJOMHDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_BPKBAJOMHDN_OFFSET))(this);
		}

		::System::Void FNCFPCHMKEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_FNCFPCHMKEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMMHJIFCGNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMMHJIFCGNO*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMMHJIFCGNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMMHJIFCGNO*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMMHJIFCGNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
