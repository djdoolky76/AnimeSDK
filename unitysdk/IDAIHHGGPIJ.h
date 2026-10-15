#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDAIHHGGPIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDAIHHGGPIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6278E0)
#define IDAIHHGGPIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E627B00)
#define IDAIHHGGPIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E627530)
#define IDAIHHGGPIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E627500)
#define IDAIHHGGPIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6274F0)
#define IDAIHHGGPIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E627660)
#define IDAIHHGGPIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E627590)
#define IDAIHHGGPIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E627580)
#define IDAIHHGGPIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6277D0)
#define IDAIHHGGPIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6274B0)
#define IDAIHHGGPIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6279A0)
#define IDAIHHGGPIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E627970)
#define IDAIHHGGPIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E627570)
#define IDAIHHGGPIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6274E0)
#define IDAIHHGGPIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E627800)
#define IDAIHHGGPIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E627860)

inline static constexpr unsigned int IDAIHHGGPIJ_TypeDefinitionIndex = 32167;

	class IDAIHHGGPIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDAIHHGGPIJ")->GetStaticField(0x454A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDAIHHGGPIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDAIHHGGPIJ*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDAIHHGGPIJ* Clone()
		{
			return ((::IDAIHHGGPIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDAIHHGGPIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDAIHHGGPIJ*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDAIHHGGPIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDAIHHGGPIJ*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
