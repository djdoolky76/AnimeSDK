#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class LDCFLPGNOJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDCFLPGNOJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F38B0)
#define LDCFLPGNOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3C80)
#define LDCFLPGNOJE_CFFDFLGECPG_OFFSET UNITYSDK_OFFSET(0x1E8F33E0)
#define LDCFLPGNOJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F3300)
#define LDCFLPGNOJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F3280)
#define LDCFLPGNOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3270)
#define LDCFLPGNOJE_EHDKAEJOCNL_OFFSET UNITYSDK_OFFSET(0x1E8F33C0)
#define LDCFLPGNOJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F35A0)
#define LDCFLPGNOJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F33F0)
#define LDCFLPGNOJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F3720)
#define LDCFLPGNOJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F3200)
#define LDCFLPGNOJE_JNGDABPMGIA_OFFSET UNITYSDK_OFFSET(0x1E8F33B0)
#define LDCFLPGNOJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F3AA0)
#define LDCFLPGNOJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F39E0)
#define LDCFLPGNOJE_NLDDGCKOBIO_OFFSET UNITYSDK_OFFSET(0x1E8F33D0)
#define LDCFLPGNOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3260)
#define LDCFLPGNOJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F3770)
#define LDCFLPGNOJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F37D0)

inline static constexpr unsigned int LDCFLPGNOJE_TypeDefinitionIndex = 28897;

	class LDCFLPGNOJE : public ::System::Object
	{
	public:
		::EPBMGIOIHEI* LLNBEBKIOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int64 GBLNAJJGPBM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LDCFLPGNOJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDCFLPGNOJE*>**)UnitySDK::FromName("", "LDCFLPGNOJE")->GetStaticField(0x33900);
		}

		// static const ::System::Object DLFLLLJJOKD; // 0x0
		// static const ::System::Object AAALJMDAKBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDCFLPGNOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCFLPGNOJE*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDCFLPGNOJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDCFLPGNOJE*>*(*)())((::PBYTE)hIl2Cpp + LDCFLPGNOJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDCFLPGNOJE* Clone()
		{
			return ((::LDCFLPGNOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CLONE_OFFSET))(this);
		}

		::EPBMGIOIHEI* JNGDABPMGIA()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_JNGDABPMGIA_OFFSET))(this);
		}

		::System::Void EHDKAEJOCNL(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_EHDKAEJOCNL_OFFSET))(this, a1);
		}

		::System::Int64 NLDDGCKOBIO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_NLDDGCKOBIO_OFFSET))(this);
		}

		::System::Void CFFDFLGECPG(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CFFDFLGECPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDCFLPGNOJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDCFLPGNOJE*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDCFLPGNOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCFLPGNOJE*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDCFLPGNOJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
