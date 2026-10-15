#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJHJGCOJBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBJHJGCOJBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42CFA0)
#define GBJHJGCOJBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42D1C0)
#define GBJHJGCOJBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42CB90)
#define GBJHJGCOJBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42CB60)
#define GBJHJGCOJBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42CB50)
#define GBJHJGCOJBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42CD20)
#define GBJHJGCOJBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42CC20)
#define GBJHJGCOJBC_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E42CC00)
#define GBJHJGCOJBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42CE90)
#define GBJHJGCOJBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42CAE0)
#define GBJHJGCOJBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42D060)
#define GBJHJGCOJBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42D030)
#define GBJHJGCOJBC_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E42CC10)
#define GBJHJGCOJBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42CB40)
#define GBJHJGCOJBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42CEC0)
#define GBJHJGCOJBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42CF20)

inline static constexpr unsigned int GBJHJGCOJBC_TypeDefinitionIndex = 29421;

	class GBJHJGCOJBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBJHJGCOJBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBJHJGCOJBC*>**)UnitySDK::FromName("", "GBJHJGCOJBC")->GetStaticField(0xD170);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBJHJGCOJBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJGCOJBC*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBJHJGCOJBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBJHJGCOJBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBJHJGCOJBC*>*(*)())((::PBYTE)hIl2Cpp + GBJHJGCOJBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBJHJGCOJBC* Clone()
		{
			return ((::GBJHJGCOJBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBJHJGCOJBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBJHJGCOJBC*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBJHJGCOJBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJGCOJBC*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBJHJGCOJBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
