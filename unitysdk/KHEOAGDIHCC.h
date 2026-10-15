#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHEOAGDIHCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHEOAGDIHCC_BPHAFCAHJPG_OFFSET UNITYSDK_OFFSET(0x1E8419D0)
#define KHEOAGDIHCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E841D70)
#define KHEOAGDIHCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E841F90)
#define KHEOAGDIHCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E841960)
#define KHEOAGDIHCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E841930)
#define KHEOAGDIHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E841920)
#define KHEOAGDIHCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E841AF0)
#define KHEOAGDIHCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8419F0)
#define KHEOAGDIHCC_GEILLPDBLJG_OFFSET UNITYSDK_OFFSET(0x1E8419E0)
#define KHEOAGDIHCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E841C60)
#define KHEOAGDIHCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8418B0)
#define KHEOAGDIHCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E841E30)
#define KHEOAGDIHCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E841E00)
#define KHEOAGDIHCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E841910)
#define KHEOAGDIHCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E841C90)
#define KHEOAGDIHCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E841CF0)

inline static constexpr unsigned int KHEOAGDIHCC_TypeDefinitionIndex = 28072;

	class KHEOAGDIHCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HGECOJIAJOA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHEOAGDIHCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHEOAGDIHCC*>**)UnitySDK::FromName("", "KHEOAGDIHCC")->GetStaticField(0x15310);
		}

		// static const ::System::Object KHDBNNKGJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHEOAGDIHCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHEOAGDIHCC*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHEOAGDIHCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHEOAGDIHCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHEOAGDIHCC*>*(*)())((::PBYTE)hIl2Cpp + KHEOAGDIHCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHEOAGDIHCC* Clone()
		{
			return ((::KHEOAGDIHCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPHAFCAHJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_BPHAFCAHJPG_OFFSET))(this);
		}

		::System::Void GEILLPDBLJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_GEILLPDBLJG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHEOAGDIHCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHEOAGDIHCC*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHEOAGDIHCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHEOAGDIHCC*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHEOAGDIHCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
