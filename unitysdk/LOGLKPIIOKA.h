#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOGLKPIIOKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOGLKPIIOKA_BKDPCGKOBEO_OFFSET UNITYSDK_OFFSET(0x1E98F920)
#define LOGLKPIIOKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98FDD0)
#define LOGLKPIIOKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E990130)
#define LOGLKPIIOKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98F8C0)
#define LOGLKPIIOKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98F830)
#define LOGLKPIIOKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98F7E0)
#define LOGLKPIIOKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98FA70)
#define LOGLKPIIOKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98F940)
#define LOGLKPIIOKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98FB60)
#define LOGLKPIIOKA_JEGJNDCHPJF_OFFSET UNITYSDK_OFFSET(0x1E98F930)
#define LOGLKPIIOKA_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E98F910)
#define LOGLKPIIOKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98F770)
#define LOGLKPIIOKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98FF50)
#define LOGLKPIIOKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98FF00)
#define LOGLKPIIOKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98F7D0)
#define LOGLKPIIOKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98FC60)
#define LOGLKPIIOKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98FCC0)

inline static constexpr unsigned int LOGLKPIIOKA_TypeDefinitionIndex = 26814;

	class LOGLKPIIOKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
		::System::UInt32 OMKCOMCNOFP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOGLKPIIOKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOGLKPIIOKA*>**)UnitySDK::FromName("", "LOGLKPIIOKA")->GetStaticField(0x41830);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LOGLKPIIOKA")->GetStaticField(0x41838);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object IAGKJCCNIHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOGLKPIIOKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOGLKPIIOKA*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGLKPIIOKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOGLKPIIOKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOGLKPIIOKA*>*(*)())((::PBYTE)hIl2Cpp + LOGLKPIIOKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOGLKPIIOKA* Clone()
		{
			return ((::LOGLKPIIOKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_JHEFPOGNBND_OFFSET))(this);
		}

		::System::UInt32 BKDPCGKOBEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_BKDPCGKOBEO_OFFSET))(this);
		}

		::System::Void JEGJNDCHPJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_JEGJNDCHPJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOGLKPIIOKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOGLKPIIOKA*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOGLKPIIOKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOGLKPIIOKA*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOGLKPIIOKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
