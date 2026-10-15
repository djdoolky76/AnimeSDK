#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNIMFMFKLH;
class FJKMGCKMNNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGNIMFMFKLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDEF490)
#define BGNIMFMFKLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEF830)
#define BGNIMFMFKLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDEEEB0)
#define BGNIMFMFKLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEEDC0)
#define BGNIMFMFKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEED70)
#define BGNIMFMFKLH_DPPJKPFHJFE_OFFSET UNITYSDK_OFFSET(0x1DDEEF20)
#define BGNIMFMFKLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDEF110)
#define BGNIMFMFKLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEEF30)
#define BGNIMFMFKLH_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1DDEEF10)
#define BGNIMFMFKLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEF2B0)
#define BGNIMFMFKLH_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1DDEEF00)
#define BGNIMFMFKLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDEED00)
#define BGNIMFMFKLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDEF650)
#define BGNIMFMFKLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDEF570)
#define BGNIMFMFKLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDEED60)
#define BGNIMFMFKLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEF330)
#define BGNIMFMFKLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDEF390)

inline static constexpr unsigned int BGNIMFMFKLH_TypeDefinitionIndex = 28414;

	class BGNIMFMFKLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* DCHECCANBIC; // 0x18
		::FJKMGCKMNNA* HDAIPLJBGAB; // 0x20
		static ::System::Object** StaticGet_BPCHGBKBPPE()
		{
			return (::System::Object**)UnitySDK::FromName("", "BGNIMFMFKLH")->GetStaticField(0x42E50);
		}

		static ::Google::Protobuf::MessageParser_1<::BGNIMFMFKLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGNIMFMFKLH*>**)UnitySDK::FromName("", "BGNIMFMFKLH")->GetStaticField(0x42E58);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object MLILGACOADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNIMFMFKLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGNIMFMFKLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGNIMFMFKLH*>*(*)())((::PBYTE)hIl2Cpp + BGNIMFMFKLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGNIMFMFKLH* Clone()
		{
			return ((::BGNIMFMFKLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_CLONE_OFFSET))(this);
		}

		::FJKMGCKMNNA* IOIFPHAMFDF()
		{
			return ((::FJKMGCKMNNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* DPPJKPFHJFE()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_DPPJKPFHJFE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGNIMFMFKLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGNIMFMFKLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
