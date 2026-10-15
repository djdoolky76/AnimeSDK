#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGOIIMJKPEH;
class KHNBFDNKLHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGOIIMJKPEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E656310)
#define IGOIIMJKPEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E656600)
#define IGOIIMJKPEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E655DC0)
#define IGOIIMJKPEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E655D50)
#define IGOIIMJKPEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E655D40)
#define IGOIIMJKPEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E656000)
#define IGOIIMJKPEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E655E80)
#define IGOIIMJKPEH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E655E70)
#define IGOIIMJKPEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E656180)
#define IGOIIMJKPEH_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E655E50)
#define IGOIIMJKPEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E655D00)
#define IGOIIMJKPEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E656460)
#define IGOIIMJKPEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6563E0)
#define IGOIIMJKPEH_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E655E40)
#define IGOIIMJKPEH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E655E60)
#define IGOIIMJKPEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E655D30)
#define IGOIIMJKPEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6561D0)
#define IGOIIMJKPEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E656230)

inline static constexpr unsigned int IGOIIMJKPEH_TypeDefinitionIndex = 26859;

	class IGOIIMJKPEH : public ::System::Object
	{
	public:
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGOIIMJKPEH")->GetStaticField(0x4C170);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGOIIMJKPEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOIIMJKPEH*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOIIMJKPEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGOIIMJKPEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGOIIMJKPEH* Clone()
		{
			return ((::IGOIIMJKPEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGOIIMJKPEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGOIIMJKPEH*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGOIIMJKPEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOIIMJKPEH*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGOIIMJKPEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
