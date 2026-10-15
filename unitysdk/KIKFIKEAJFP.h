#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKFIKEAJFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIKFIKEAJFP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E834520)
#define KIKFIKEAJFP_CBBOHNAEMBN_OFFSET UNITYSDK_OFFSET(0x1E834050)
#define KIKFIKEAJFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E834790)
#define KIKFIKEAJFP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E833FF0)
#define KIKFIKEAJFP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E833FB0)
#define KIKFIKEAJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E833FA0)
#define KIKFIKEAJFP_EIOGEBGMJEI_OFFSET UNITYSDK_OFFSET(0x1E8340C0)
#define KIKFIKEAJFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8341E0)
#define KIKFIKEAJFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8340D0)
#define KIKFIKEAJFP_FMJFCDNCODB_OFFSET UNITYSDK_OFFSET(0x1E834060)
#define KIKFIKEAJFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8342E0)
#define KIKFIKEAJFP_GFNBDKJJOCC_OFFSET UNITYSDK_OFFSET(0x1E8340B0)
#define KIKFIKEAJFP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E833F60)
#define KIKFIKEAJFP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8345E0)
#define KIKFIKEAJFP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E834590)
#define KIKFIKEAJFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E833F90)
#define KIKFIKEAJFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8343A0)
#define KIKFIKEAJFP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E834400)

inline static constexpr unsigned int KIKFIKEAJFP_TypeDefinitionIndex = 32052;

	class KIKFIKEAJFP : public ::System::Object
	{
	public:
		::System::String* APJJPMIKPIK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean KANHAPIFLOM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KIKFIKEAJFP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIKFIKEAJFP*>**)UnitySDK::FromName("", "KIKFIKEAJFP")->GetStaticField(0x19370);
		}

		// static const ::System::Object AHCJNILFHBO; // 0x0
		// static const ::System::Object OPKAOFANLJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIKFIKEAJFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKFIKEAJFP*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIKFIKEAJFP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIKFIKEAJFP*>*(*)())((::PBYTE)hIl2Cpp + KIKFIKEAJFP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIKFIKEAJFP* Clone()
		{
			return ((::KIKFIKEAJFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CLONE_OFFSET))(this);
		}

		::System::String* CBBOHNAEMBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CBBOHNAEMBN_OFFSET))(this);
		}

		::System::Void FMJFCDNCODB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_FMJFCDNCODB_OFFSET))(this, a1);
		}

		::System::Boolean GFNBDKJJOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_GFNBDKJJOCC_OFFSET))(this);
		}

		::System::Void EIOGEBGMJEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_EIOGEBGMJEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIKFIKEAJFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIKFIKEAJFP*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIKFIKEAJFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKFIKEAJFP*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIKFIKEAJFP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
