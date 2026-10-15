#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFOOLGFCNDN;
class LCKBHJBKHNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCKBHJBKHNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EE880)
#define LCKBHJBKHNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EEB50)
#define LCKBHJBKHNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EE2D0)
#define LCKBHJBKHNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EE260)
#define LCKBHJBKHNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EE250)
#define LCKBHJBKHNH_ELDMBJFILIM_OFFSET UNITYSDK_OFFSET(0x1E8EE380)
#define LCKBHJBKHNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EE570)
#define LCKBHJBKHNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EE3C0)
#define LCKBHJBKHNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EE6F0)
#define LCKBHJBKHNH_ILGMKAINFGB_OFFSET UNITYSDK_OFFSET(0x1E8EE390)
#define LCKBHJBKHNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EE1E0)
#define LCKBHJBKHNH_LODCDEIDBMA_OFFSET UNITYSDK_OFFSET(0x1E8EE3A0)
#define LCKBHJBKHNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EE9C0)
#define LCKBHJBKHNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EE950)
#define LCKBHJBKHNH_OIJBPGHGDEB_OFFSET UNITYSDK_OFFSET(0x1E8EE3B0)
#define LCKBHJBKHNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EE240)
#define LCKBHJBKHNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EE740)
#define LCKBHJBKHNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EE7A0)

inline static constexpr unsigned int LCKBHJBKHNH_TypeDefinitionIndex = 27170;

	class LCKBHJBKHNH : public ::System::Object
	{
	public:
		::KFOOLGFCNDN* KDHGGPECACJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BJLEFODMIOJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LCKBHJBKHNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCKBHJBKHNH*>**)UnitySDK::FromName("", "LCKBHJBKHNH")->GetStaticField(0x32ED0);
		}

		// static const ::System::Object EEOBMPDGBOP; // 0x0
		// static const ::System::Object DJJEKFLEKDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCKBHJBKHNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCKBHJBKHNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCKBHJBKHNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCKBHJBKHNH*>*(*)())((::PBYTE)hIl2Cpp + LCKBHJBKHNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCKBHJBKHNH* Clone()
		{
			return ((::LCKBHJBKHNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_CLONE_OFFSET))(this);
		}

		::KFOOLGFCNDN* ELDMBJFILIM()
		{
			return ((::KFOOLGFCNDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_ELDMBJFILIM_OFFSET))(this);
		}

		::System::Void ILGMKAINFGB(::KFOOLGFCNDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFOOLGFCNDN*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_ILGMKAINFGB_OFFSET))(this, a1);
		}

		::System::UInt32 LODCDEIDBMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_LODCDEIDBMA_OFFSET))(this);
		}

		::System::Void OIJBPGHGDEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_OIJBPGHGDEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCKBHJBKHNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCKBHJBKHNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCKBHJBKHNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
