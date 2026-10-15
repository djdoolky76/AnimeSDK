#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEAMIJBBOMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEAMIJBBOMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E606FC0)
#define IEAMIJBBOMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E607290)
#define IEAMIJBBOMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E606C10)
#define IEAMIJBBOMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E606BE0)
#define IEAMIJBBOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E606BD0)
#define IEAMIJBBOMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E606D80)
#define IEAMIJBBOMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E606CA0)
#define IEAMIJBBOMA_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E606C60)
#define IEAMIJBBOMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E606E50)
#define IEAMIJBBOMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E606B90)
#define IEAMIJBBOMA_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E606C80)
#define IEAMIJBBOMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E607110)
#define IEAMIJBBOMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6070D0)
#define IEAMIJBBOMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E606BC0)
#define IEAMIJBBOMA_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E606C70)
#define IEAMIJBBOMA_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E606C90)
#define IEAMIJBBOMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E606E80)
#define IEAMIJBBOMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E606EE0)

inline static constexpr unsigned int IEAMIJBBOMA_TypeDefinitionIndex = 31859;

	class IEAMIJBBOMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 HJPCMINMFBI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IEAMIJBBOMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEAMIJBBOMA*>**)UnitySDK::FromName("", "IEAMIJBBOMA")->GetStaticField(0x47490);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEAMIJBBOMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEAMIJBBOMA*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEAMIJBBOMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEAMIJBBOMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEAMIJBBOMA*>*(*)())((::PBYTE)hIl2Cpp + IEAMIJBBOMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEAMIJBBOMA* Clone()
		{
			return ((::IEAMIJBBOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEAMIJBBOMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEAMIJBBOMA*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEAMIJBBOMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEAMIJBBOMA*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEAMIJBBOMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
