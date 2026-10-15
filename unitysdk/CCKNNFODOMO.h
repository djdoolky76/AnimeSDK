#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKNNFODOMO;
class IBKDHOIDKJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCKNNFODOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E077CD0)
#define CCKNNFODOMO_CCCPJJGAPMG_OFFSET UNITYSDK_OFFSET(0x1E077730)
#define CCKNNFODOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E077F20)
#define CCKNNFODOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0776B0)
#define CCKNNFODOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E077640)
#define CCKNNFODOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E077630)
#define CCKNNFODOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0778C0)
#define CCKNNFODOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E077750)
#define CCKNNFODOMO_GENEPDAFIGA_OFFSET UNITYSDK_OFFSET(0x1E077740)
#define CCKNNFODOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E077B90)
#define CCKNNFODOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0775F0)
#define CCKNNFODOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E077DA0)
#define CCKNNFODOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E077D30)
#define CCKNNFODOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E077620)
#define CCKNNFODOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E077BE0)
#define CCKNNFODOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E077C40)

inline static constexpr unsigned int CCKNNFODOMO_TypeDefinitionIndex = 32237;

	class CCKNNFODOMO : public ::System::Object
	{
	public:
		::IBKDHOIDKJA* DJBOHGCJIMO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>**)UnitySDK::FromName("", "CCKNNFODOMO")->GetStaticField(0xDB40);
		}

		// static const ::System::Object CPKHFLBNJPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCKNNFODOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKNNFODOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>*(*)())((::PBYTE)hIl2Cpp + CCKNNFODOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCKNNFODOMO* Clone()
		{
			return ((::CCKNNFODOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CLONE_OFFSET))(this);
		}

		::IBKDHOIDKJA* CCCPJJGAPMG()
		{
			return ((::IBKDHOIDKJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CCCPJJGAPMG_OFFSET))(this);
		}

		::System::Void GENEPDAFIGA(::IBKDHOIDKJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBKDHOIDKJA*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_GENEPDAFIGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCKNNFODOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCKNNFODOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
