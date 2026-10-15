#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHILEFFPFL.h"
#include "unitysdk/System/Object.h"
class DBGHDPKNNKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBGHDPKNNKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12EFC0)
#define DBGHDPKNNKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12F220)
#define DBGHDPKNNKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12EBF0)
#define DBGHDPKNNKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12EBC0)
#define DBGHDPKNNKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12EBB0)
#define DBGHDPKNNKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12ED20)
#define DBGHDPKNNKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12EC50)
#define DBGHDPKNNKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12EE90)
#define DBGHDPKNNKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12EB70)
#define DBGHDPKNNKK_KELHNBBBLHA_OFFSET UNITYSDK_OFFSET(0x1E12EC40)
#define DBGHDPKNNKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12F0C0)
#define DBGHDPKNNKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12F090)
#define DBGHDPKNNKK_NEICKKPFHOK_OFFSET UNITYSDK_OFFSET(0x1E12EC30)
#define DBGHDPKNNKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12EBA0)
#define DBGHDPKNNKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12EEC0)
#define DBGHDPKNNKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12EF20)

inline static constexpr unsigned int DBGHDPKNNKK_TypeDefinitionIndex = 26825;

	class DBGHDPKNNKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DMHILEFFPFL KOCAPDILNCE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DBGHDPKNNKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBGHDPKNNKK*>**)UnitySDK::FromName("", "DBGHDPKNNKK")->GetStaticField(0x22B00);
		}

		// static const ::System::Object LEBHDCNOCAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBGHDPKNNKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGHDPKNNKK*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGHDPKNNKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBGHDPKNNKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBGHDPKNNKK*>*(*)())((::PBYTE)hIl2Cpp + DBGHDPKNNKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBGHDPKNNKK* Clone()
		{
			return ((::DBGHDPKNNKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_CLONE_OFFSET))(this);
		}

		::DMHILEFFPFL NEICKKPFHOK()
		{
			return ((::DMHILEFFPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_NEICKKPFHOK_OFFSET))(this);
		}

		::System::Void KELHNBBBLHA(::DMHILEFFPFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHILEFFPFL))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_KELHNBBBLHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBGHDPKNNKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBGHDPKNNKK*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBGHDPKNNKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGHDPKNNKK*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBGHDPKNNKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
