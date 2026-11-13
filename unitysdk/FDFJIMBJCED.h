#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFJIMBJCED;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDFJIMBJCED_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x20533700)
#define FDFJIMBJCED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20533BA0)
#define FDFJIMBJCED_CCTOR_OFFSET UNITYSDK_OFFSET(0x20533E90)
#define FDFJIMBJCED_CLONE_OFFSET UNITYSDK_OFFSET(0x20533660)
#define FDFJIMBJCED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205335F0)
#define FDFJIMBJCED_CTOR_OFFSET UNITYSDK_OFFSET(0x205335E0)
#define FDFJIMBJCED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205338A0)
#define FDFJIMBJCED_EQUALS_OFFSET UNITYSDK_OFFSET(0x20533720)
#define FDFJIMBJCED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205336F0)
#define FDFJIMBJCED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20533A20)
#define FDFJIMBJCED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205335A0)
#define FDFJIMBJCED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20533CF0)
#define FDFJIMBJCED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20533C70)
#define FDFJIMBJCED_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x20533710)
#define FDFJIMBJCED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205336E0)
#define FDFJIMBJCED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205335D0)
#define FDFJIMBJCED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20533A60)
#define FDFJIMBJCED_WRITETO_OFFSET UNITYSDK_OFFSET(0x20533AC0)

inline static constexpr unsigned int FDFJIMBJCED_TypeDefinitionIndex = 26467;

	class FDFJIMBJCED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FDFJIMBJCED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDFJIMBJCED*>**)UnitySDK::FromName("", "FDFJIMBJCED")->GetStaticField(0x483B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDFJIMBJCED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFJIMBJCED*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFJIMBJCED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDFJIMBJCED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDFJIMBJCED*>*(*)())((::PBYTE)hIl2Cpp + FDFJIMBJCED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDFJIMBJCED* Clone()
		{
			return ((::FDFJIMBJCED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFJIMBJCED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDFJIMBJCED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDFJIMBJCED*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDFJIMBJCED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFJIMBJCED*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDFJIMBJCED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
