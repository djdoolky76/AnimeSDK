#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAAGMMIDHDB;
class BCCIJHPLJOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAAGMMIDHDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA683F0)
#define BAAGMMIDHDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA68670)
#define BAAGMMIDHDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA67D70)
#define BAAGMMIDHDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA67D20)
#define BAAGMMIDHDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA67D10)
#define BAAGMMIDHDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA67FC0)
#define BAAGMMIDHDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA67E20)
#define BAAGMMIDHDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA68290)
#define BAAGMMIDHDB_JCHHJKCDGIL_OFFSET UNITYSDK_OFFSET(0x1FA67E10)
#define BAAGMMIDHDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA67CA0)
#define BAAGMMIDHDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA684E0)
#define BAAGMMIDHDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA68450)
#define BAAGMMIDHDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA67D00)
#define BAAGMMIDHDB_PEGOEPHECDE_OFFSET UNITYSDK_OFFSET(0x1FA67E00)
#define BAAGMMIDHDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA68300)
#define BAAGMMIDHDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA68360)

inline static constexpr unsigned int BAAGMMIDHDB_TypeDefinitionIndex = 30102;

	class BAAGMMIDHDB : public ::System::Object
	{
	public:
		::BCCIJHPLJOJ* DAPKCKPHMPM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BAAGMMIDHDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAAGMMIDHDB*>**)UnitySDK::FromName("", "BAAGMMIDHDB")->GetStaticField(0x3E260);
		}

		// static const ::System::Object NFMLBOOCDCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAAGMMIDHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAAGMMIDHDB*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAGMMIDHDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAAGMMIDHDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAAGMMIDHDB*>*(*)())((::PBYTE)hIl2Cpp + BAAGMMIDHDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAAGMMIDHDB* Clone()
		{
			return ((::BAAGMMIDHDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_CLONE_OFFSET))(this);
		}

		::BCCIJHPLJOJ* PEGOEPHECDE()
		{
			return ((::BCCIJHPLJOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_PEGOEPHECDE_OFFSET))(this);
		}

		::System::Void JCHHJKCDGIL(::BCCIJHPLJOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_JCHHJKCDGIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAAGMMIDHDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAAGMMIDHDB*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAAGMMIDHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAAGMMIDHDB*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAAGMMIDHDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
