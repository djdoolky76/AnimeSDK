#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKBMLELJDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGKBMLELJDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E621770)
#define IGKBMLELJDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E621990)
#define IGKBMLELJDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6213C0)
#define IGKBMLELJDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E621390)
#define IGKBMLELJDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E621380)
#define IGKBMLELJDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6214F0)
#define IGKBMLELJDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E621420)
#define IGKBMLELJDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E621410)
#define IGKBMLELJDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E621660)
#define IGKBMLELJDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E621340)
#define IGKBMLELJDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E621830)
#define IGKBMLELJDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E621800)
#define IGKBMLELJDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E621400)
#define IGKBMLELJDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E621370)
#define IGKBMLELJDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E621690)
#define IGKBMLELJDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6216F0)

inline static constexpr unsigned int IGKBMLELJDH_TypeDefinitionIndex = 34653;

	class IGKBMLELJDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGKBMLELJDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGKBMLELJDH*>**)UnitySDK::FromName("", "IGKBMLELJDH")->GetStaticField(0x4B590);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGKBMLELJDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKBMLELJDH*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKBMLELJDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGKBMLELJDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGKBMLELJDH*>*(*)())((::PBYTE)hIl2Cpp + IGKBMLELJDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGKBMLELJDH* Clone()
		{
			return ((::IGKBMLELJDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGKBMLELJDH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGKBMLELJDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGKBMLELJDH*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGKBMLELJDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKBMLELJDH*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGKBMLELJDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
