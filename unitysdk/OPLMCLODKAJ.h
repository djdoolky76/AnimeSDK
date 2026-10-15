#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPLMCLODKAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPLMCLODKAJ_AOKILNFEGCL_OFFSET UNITYSDK_OFFSET(0x1DEE6AD0)
#define OPLMCLODKAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE6E30)
#define OPLMCLODKAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7050)
#define OPLMCLODKAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE6A80)
#define OPLMCLODKAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE6A50)
#define OPLMCLODKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE6A40)
#define OPLMCLODKAJ_DMKIKMLFCDB_OFFSET UNITYSDK_OFFSET(0x1DEE6AC0)
#define OPLMCLODKAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE6BB0)
#define OPLMCLODKAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE6AE0)
#define OPLMCLODKAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE6D20)
#define OPLMCLODKAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE6A00)
#define OPLMCLODKAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE6EF0)
#define OPLMCLODKAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE6EC0)
#define OPLMCLODKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE6A30)
#define OPLMCLODKAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE6D50)
#define OPLMCLODKAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE6DB0)

inline static constexpr unsigned int OPLMCLODKAJ_TypeDefinitionIndex = 31390;

	class OPLMCLODKAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LKIAHNAIAPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OPLMCLODKAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPLMCLODKAJ*>**)UnitySDK::FromName("", "OPLMCLODKAJ")->GetStaticField(0x30CB0);
		}

		// static const ::System::Object JDFGGPHKILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPLMCLODKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPLMCLODKAJ*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLMCLODKAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPLMCLODKAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPLMCLODKAJ*>*(*)())((::PBYTE)hIl2Cpp + OPLMCLODKAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPLMCLODKAJ* Clone()
		{
			return ((::OPLMCLODKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMKIKMLFCDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_DMKIKMLFCDB_OFFSET))(this);
		}

		::System::Void AOKILNFEGCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_AOKILNFEGCL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPLMCLODKAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPLMCLODKAJ*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPLMCLODKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPLMCLODKAJ*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPLMCLODKAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
