#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIONONBIIKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIONONBIIKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E195EE0)
#define DIONONBIIKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E196100)
#define DIONONBIIKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E195B30)
#define DIONONBIIKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E195B00)
#define DIONONBIIKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E195AF0)
#define DIONONBIIKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E195C60)
#define DIONONBIIKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E195B90)
#define DIONONBIIKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E195DD0)
#define DIONONBIIKN_IANOBMBBPFF_OFFSET UNITYSDK_OFFSET(0x1E195B70)
#define DIONONBIIKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E195AB0)
#define DIONONBIIKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E195FA0)
#define DIONONBIIKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E195F70)
#define DIONONBIIKN_NEAKILFKMKO_OFFSET UNITYSDK_OFFSET(0x1E195B80)
#define DIONONBIIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E195AE0)
#define DIONONBIIKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E195E00)
#define DIONONBIIKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E195E60)

inline static constexpr unsigned int DIONONBIIKN_TypeDefinitionIndex = 27159;

	class DIONONBIIKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EAFEGFFAIKG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DIONONBIIKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DIONONBIIKN*>**)UnitySDK::FromName("", "DIONONBIIKN")->GetStaticField(0x31DE0);
		}

		// static const ::System::Object FNGLLCBKEPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIONONBIIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIONONBIIKN*))((::PBYTE)hIl2Cpp + DIONONBIIKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIONONBIIKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DIONONBIIKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DIONONBIIKN*>*(*)())((::PBYTE)hIl2Cpp + DIONONBIIKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIONONBIIKN* Clone()
		{
			return ((::DIONONBIIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IANOBMBBPFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_IANOBMBBPFF_OFFSET))(this);
		}

		::System::Void NEAKILFKMKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIONONBIIKN_NEAKILFKMKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIONONBIIKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIONONBIIKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIONONBIIKN*))((::PBYTE)hIl2Cpp + DIONONBIIKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIONONBIIKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIONONBIIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIONONBIIKN*))((::PBYTE)hIl2Cpp + DIONONBIIKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIONONBIIKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
