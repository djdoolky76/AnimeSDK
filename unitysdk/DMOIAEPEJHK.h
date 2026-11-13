#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODPJEOGDIKF.h"
#include "unitysdk/System/Object.h"
class DMOIAEPEJHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMOIAEPEJHK_ABGGICDBEKG_OFFSET UNITYSDK_OFFSET(0x201E1090)
#define DMOIAEPEJHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201E13F0)
#define DMOIAEPEJHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E1700)
#define DMOIAEPEJHK_CLONE_OFFSET UNITYSDK_OFFSET(0x201E1030)
#define DMOIAEPEJHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201E1000)
#define DMOIAEPEJHK_CTOR_OFFSET UNITYSDK_OFFSET(0x201E0FF0)
#define DMOIAEPEJHK_EMIJDCPPBAI_OFFSET UNITYSDK_OFFSET(0x201E10A0)
#define DMOIAEPEJHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201E11A0)
#define DMOIAEPEJHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x201E10C0)
#define DMOIAEPEJHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201E1270)
#define DMOIAEPEJHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201E0FB0)
#define DMOIAEPEJHK_KMBPPELOJNM_OFFSET UNITYSDK_OFFSET(0x201E10B0)
#define DMOIAEPEJHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201E1580)
#define DMOIAEPEJHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201E1540)
#define DMOIAEPEJHK_OEEDGFFEMKE_OFFSET UNITYSDK_OFFSET(0x201E1080)
#define DMOIAEPEJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201E0FE0)
#define DMOIAEPEJHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201E12A0)
#define DMOIAEPEJHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x201E1300)

inline static constexpr unsigned int DMOIAEPEJHK_TypeDefinitionIndex = 31365;

	class DMOIAEPEJHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ODPJEOGDIKF EJAIFMMHLFK; // 0x18
		::System::UInt32 GOLNPJJCKGP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DMOIAEPEJHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMOIAEPEJHK*>**)UnitySDK::FromName("", "DMOIAEPEJHK")->GetStaticField(0x34E10);
		}

		// static const ::System::Object IMNNKNAKABI; // 0x0
		// static const ::System::Object OOKNIPJJFHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMOIAEPEJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMOIAEPEJHK*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOIAEPEJHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMOIAEPEJHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMOIAEPEJHK*>*(*)())((::PBYTE)hIl2Cpp + DMOIAEPEJHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMOIAEPEJHK* Clone()
		{
			return ((::DMOIAEPEJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_CLONE_OFFSET))(this);
		}

		::ODPJEOGDIKF OEEDGFFEMKE()
		{
			return ((::ODPJEOGDIKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_OEEDGFFEMKE_OFFSET))(this);
		}

		::System::Void ABGGICDBEKG(::ODPJEOGDIKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODPJEOGDIKF))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_ABGGICDBEKG_OFFSET))(this, a1);
		}

		::System::UInt32 EMIJDCPPBAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_EMIJDCPPBAI_OFFSET))(this);
		}

		::System::Void KMBPPELOJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_KMBPPELOJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMOIAEPEJHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMOIAEPEJHK*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMOIAEPEJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMOIAEPEJHK*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMOIAEPEJHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
