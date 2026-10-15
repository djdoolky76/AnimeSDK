#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIGAMEJNCJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIGAMEJNCJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5677D0)
#define HIGAMEJNCJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567AA0)
#define HIGAMEJNCJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E567420)
#define HIGAMEJNCJJ_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E567490)
#define HIGAMEJNCJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5673F0)
#define HIGAMEJNCJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5673E0)
#define HIGAMEJNCJJ_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E567480)
#define HIGAMEJNCJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E567590)
#define HIGAMEJNCJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5674B0)
#define HIGAMEJNCJJ_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E567470)
#define HIGAMEJNCJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E567660)
#define HIGAMEJNCJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5673A0)
#define HIGAMEJNCJJ_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E5674A0)
#define HIGAMEJNCJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E567920)
#define HIGAMEJNCJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5678E0)
#define HIGAMEJNCJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5673D0)
#define HIGAMEJNCJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E567690)
#define HIGAMEJNCJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5676F0)

inline static constexpr unsigned int HIGAMEJNCJJ_TypeDefinitionIndex = 32758;

	class HIGAMEJNCJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DDKDAHKMBFL; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HIGAMEJNCJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIGAMEJNCJJ*>**)UnitySDK::FromName("", "HIGAMEJNCJJ")->GetStaticField(0x33B40);
		}

		// static const ::System::Object OBJDFPPBDAA; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIGAMEJNCJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIGAMEJNCJJ*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIGAMEJNCJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIGAMEJNCJJ*>*(*)())((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIGAMEJNCJJ* Clone()
		{
			return ((::HIGAMEJNCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIGAMEJNCJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIGAMEJNCJJ*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIGAMEJNCJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIGAMEJNCJJ*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
