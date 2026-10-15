#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAAECDKBAFC;
class NEIMLKNMDBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAAECDKBAFC_AJBJDNHKJJC_OFFSET UNITYSDK_OFFSET(0x1E1F28C0)
#define EAAECDKBAFC_BPJFNDPNMGC_OFFSET UNITYSDK_OFFSET(0x1E1F28D0)
#define EAAECDKBAFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F2D90)
#define EAAECDKBAFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3180)
#define EAAECDKBAFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F2840)
#define EAAECDKBAFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F27D0)
#define EAAECDKBAFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F27C0)
#define EAAECDKBAFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F2A80)
#define EAAECDKBAFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F2900)
#define EAAECDKBAFC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1F28F0)
#define EAAECDKBAFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F2C00)
#define EAAECDKBAFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F2780)
#define EAAECDKBAFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F2F60)
#define EAAECDKBAFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F2E60)
#define EAAECDKBAFC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1F28E0)
#define EAAECDKBAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F27B0)
#define EAAECDKBAFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F2C50)
#define EAAECDKBAFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F2CB0)

inline static constexpr unsigned int EAAECDKBAFC_TypeDefinitionIndex = 29105;

	class EAAECDKBAFC : public ::System::Object
	{
	public:
		::NEIMLKNMDBM* HBDLBHBNFHI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EAAECDKBAFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EAAECDKBAFC*>**)UnitySDK::FromName("", "EAAECDKBAFC")->GetStaticField(0x3BBA0);
		}

		// static const ::System::Object KHDPMFLGMBM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAAECDKBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAAECDKBAFC*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAAECDKBAFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EAAECDKBAFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EAAECDKBAFC*>*(*)())((::PBYTE)hIl2Cpp + EAAECDKBAFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAAECDKBAFC* Clone()
		{
			return ((::EAAECDKBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_CLONE_OFFSET))(this);
		}

		::NEIMLKNMDBM* AJBJDNHKJJC()
		{
			return ((::NEIMLKNMDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_AJBJDNHKJJC_OFFSET))(this);
		}

		::System::Void BPJFNDPNMGC(::NEIMLKNMDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEIMLKNMDBM*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_BPJFNDPNMGC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAAECDKBAFC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAAECDKBAFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAAECDKBAFC*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAAECDKBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAAECDKBAFC*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAAECDKBAFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
