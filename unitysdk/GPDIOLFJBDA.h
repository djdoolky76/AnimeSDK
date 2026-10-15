#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDIOLFJBDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPDIOLFJBDA_BKJJOFBNEOI_OFFSET UNITYSDK_OFFSET(0x1E4F6510)
#define GPDIOLFJBDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F68B0)
#define GPDIOLFJBDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6C30)
#define GPDIOLFJBDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F6490)
#define GPDIOLFJBDA_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E4F6520)
#define GPDIOLFJBDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F6450)
#define GPDIOLFJBDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6440)
#define GPDIOLFJBDA_ENEJAIHHLDO_OFFSET UNITYSDK_OFFSET(0x1E4F6500)
#define GPDIOLFJBDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F6620)
#define GPDIOLFJBDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F6540)
#define GPDIOLFJBDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F66F0)
#define GPDIOLFJBDA_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E4F6530)
#define GPDIOLFJBDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F6400)
#define GPDIOLFJBDA_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E4F64E0)
#define GPDIOLFJBDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F6A90)
#define GPDIOLFJBDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F6A40)
#define GPDIOLFJBDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6430)
#define GPDIOLFJBDA_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E4F64F0)
#define GPDIOLFJBDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F6720)
#define GPDIOLFJBDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F6780)

	class GPDIOLFJBDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 JCJAAAEGIIO; // 0x1C
		::System::UInt32 MPFELJLKAFH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GPDIOLFJBDA")->GetStaticField(0x2B750);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object NCKJJHMBKFH; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPDIOLFJBDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDIOLFJBDA*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GPDIOLFJBDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPDIOLFJBDA* Clone()
		{
			return ((::GPDIOLFJBDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::UInt32 ENEJAIHHLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_ENEJAIHHLDO_OFFSET))(this);
		}

		::System::Void BKJJOFBNEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_BKJJOFBNEOI_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPDIOLFJBDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPDIOLFJBDA*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPDIOLFJBDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDIOLFJBDA*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPDIOLFJBDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
