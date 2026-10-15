#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHOPIKPAMPJ;
class FNMEHOIANGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHOPIKPAMPJ_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1DDFCDC0)
#define BHOPIKPAMPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFD2B0)
#define BHOPIKPAMPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD5B0)
#define BHOPIKPAMPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFCD00)
#define BHOPIKPAMPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFCC90)
#define BHOPIKPAMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFCC80)
#define BHOPIKPAMPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFCFA0)
#define BHOPIKPAMPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFCDF0)
#define BHOPIKPAMPJ_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1DDFCDB0)
#define BHOPIKPAMPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFD120)
#define BHOPIKPAMPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFCC10)
#define BHOPIKPAMPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFD420)
#define BHOPIKPAMPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFD380)
#define BHOPIKPAMPJ_PAGNDFIHEEP_OFFSET UNITYSDK_OFFSET(0x1DDFCDE0)
#define BHOPIKPAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFCC70)
#define BHOPIKPAMPJ_PDAEKFFJLLA_OFFSET UNITYSDK_OFFSET(0x1DDFCDD0)
#define BHOPIKPAMPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFD170)
#define BHOPIKPAMPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFD1D0)

	class BHOPIKPAMPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FNMEHOIANGN* CPLKHNPLOOD; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHOPIKPAMPJ")->GetStaticField(0x470D0);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object EKHJBFMLCAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHOPIKPAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHOPIKPAMPJ*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHOPIKPAMPJ* Clone()
		{
			return ((::BHOPIKPAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::FNMEHOIANGN* PDAEKFFJLLA()
		{
			return ((::FNMEHOIANGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_PDAEKFFJLLA_OFFSET))(this);
		}

		::System::Void PAGNDFIHEEP(::FNMEHOIANGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNMEHOIANGN*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_PAGNDFIHEEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHOPIKPAMPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHOPIKPAMPJ*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHOPIKPAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHOPIKPAMPJ*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
