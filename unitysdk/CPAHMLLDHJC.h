#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APHKOFKECCK;
class CPAHMLLDHJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPAHMLLDHJC_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E139F50)
#define CPAHMLLDHJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13A3F0)
#define CPAHMLLDHJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13A7A0)
#define CPAHMLLDHJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E139EB0)
#define CPAHMLLDHJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E139E40)
#define CPAHMLLDHJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E139E30)
#define CPAHMLLDHJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13A0F0)
#define CPAHMLLDHJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E139F70)
#define CPAHMLLDHJC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E139F40)
#define CPAHMLLDHJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13A270)
#define CPAHMLLDHJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E139DF0)
#define CPAHMLLDHJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13A5A0)
#define CPAHMLLDHJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13A4C0)
#define CPAHMLLDHJC_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E139F60)
#define CPAHMLLDHJC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E139F30)
#define CPAHMLLDHJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E139E20)
#define CPAHMLLDHJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13A2B0)
#define CPAHMLLDHJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13A310)

inline static constexpr unsigned int CPAHMLLDHJC_TypeDefinitionIndex = 26125;

	class CPAHMLLDHJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::APHKOFKECCK* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CPAHMLLDHJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPAHMLLDHJC*>**)UnitySDK::FromName("", "CPAHMLLDHJC")->GetStaticField(0x21F40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPAHMLLDHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPAHMLLDHJC*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPAHMLLDHJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPAHMLLDHJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPAHMLLDHJC*>*(*)())((::PBYTE)hIl2Cpp + CPAHMLLDHJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPAHMLLDHJC* Clone()
		{
			return ((::CPAHMLLDHJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::APHKOFKECCK* BLBBMAGLFDL()
		{
			return ((::APHKOFKECCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::APHKOFKECCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APHKOFKECCK*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPAHMLLDHJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPAHMLLDHJC*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPAHMLLDHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPAHMLLDHJC*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPAHMLLDHJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
