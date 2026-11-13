#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMHBEAAOOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJMHBEAAOOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA0F440)
#define NJMHBEAAOOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0F660)
#define NJMHBEAAOOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA0F090)
#define NJMHBEAAOOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA0F060)
#define NJMHBEAAOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0F050)
#define NJMHBEAAOOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA0F1C0)
#define NJMHBEAAOOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA0F0F0)
#define NJMHBEAAOOC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA0F0E0)
#define NJMHBEAAOOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA0F330)
#define NJMHBEAAOOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA0F010)
#define NJMHBEAAOOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA0F500)
#define NJMHBEAAOOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA0F4D0)
#define NJMHBEAAOOC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA0F0D0)
#define NJMHBEAAOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA0F040)
#define NJMHBEAAOOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA0F360)
#define NJMHBEAAOOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA0F3C0)

inline static constexpr unsigned int NJMHBEAAOOC_TypeDefinitionIndex = 28692;

	class NJMHBEAAOOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NJMHBEAAOOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJMHBEAAOOC*>**)UnitySDK::FromName("", "NJMHBEAAOOC")->GetStaticField(0x67A00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJMHBEAAOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMHBEAAOOC*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMHBEAAOOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJMHBEAAOOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJMHBEAAOOC*>*(*)())((::PBYTE)hIl2Cpp + NJMHBEAAOOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJMHBEAAOOC* Clone()
		{
			return ((::NJMHBEAAOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJMHBEAAOOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJMHBEAAOOC*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJMHBEAAOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMHBEAAOOC*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJMHBEAAOOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
