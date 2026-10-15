#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGLEIOGOID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJGLEIOGOID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C1F30)
#define AJGLEIOGOID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C21F0)
#define AJGLEIOGOID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C1AA0)
#define AJGLEIOGOID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C1A00)
#define AJGLEIOGOID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C19B0)
#define AJGLEIOGOID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C1BA0)
#define AJGLEIOGOID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C1B20)
#define AJGLEIOGOID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C1CA0)
#define AJGLEIOGOID_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E3C1B10)
#define AJGLEIOGOID_HPMLFDLAELK_OFFSET UNITYSDK_OFFSET(0x1E3C1AF0)
#define AJGLEIOGOID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C1970)
#define AJGLEIOGOID_JKCDIEBEMAM_OFFSET UNITYSDK_OFFSET(0x1E3C1AE0)
#define AJGLEIOGOID_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E3C1B00)
#define AJGLEIOGOID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C2100)
#define AJGLEIOGOID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C20A0)
#define AJGLEIOGOID_NLABMBBBIIC_OFFSET UNITYSDK_OFFSET(0x1E3C1AD0)
#define AJGLEIOGOID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C19A0)
#define AJGLEIOGOID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C1DA0)
#define AJGLEIOGOID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C1E00)

inline static constexpr unsigned int AJGLEIOGOID_TypeDefinitionIndex = 34588;

	class AJGLEIOGOID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FOINCHMJAFI; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 HJNKPLBHKDA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::AJGLEIOGOID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJGLEIOGOID*>**)UnitySDK::FromName("", "AJGLEIOGOID")->GetStaticField(0x24F50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EIOGEOCGJMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AJGLEIOGOID")->GetStaticField(0x24F58);
		}

		// static const ::System::Object IECJKKGHNLL; // 0x0
		// static const ::System::Object LCFFIPCKACD; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJGLEIOGOID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGLEIOGOID*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGLEIOGOID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJGLEIOGOID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJGLEIOGOID*>*(*)())((::PBYTE)hIl2Cpp + AJGLEIOGOID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJGLEIOGOID* Clone()
		{
			return ((::AJGLEIOGOID*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_CLONE_OFFSET))(this);
		}

		::System::UInt32 NLABMBBBIIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_NLABMBBBIIC_OFFSET))(this);
		}

		::System::Void JKCDIEBEMAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGLEIOGOID_JKCDIEBEMAM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPMLFDLAELK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_HPMLFDLAELK_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGLEIOGOID_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJGLEIOGOID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJGLEIOGOID*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJGLEIOGOID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGLEIOGOID*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJGLEIOGOID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
