#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHAGOFKBFAP;
class MCHIJNKKOAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCHIJNKKOAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CA430)
#define MCHIJNKKOAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CA740)
#define MCHIJNKKOAM_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E9C9FA0)
#define MCHIJNKKOAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C9F10)
#define MCHIJNKKOAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C9EC0)
#define MCHIJNKKOAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9EB0)
#define MCHIJNKKOAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CA130)
#define MCHIJNKKOAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C9FB0)
#define MCHIJNKKOAM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9C9F80)
#define MCHIJNKKOAM_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E9C9F90)
#define MCHIJNKKOAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CA2B0)
#define MCHIJNKKOAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C9E70)
#define MCHIJNKKOAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CA590)
#define MCHIJNKKOAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CA500)
#define MCHIJNKKOAM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9C9F70)
#define MCHIJNKKOAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9EA0)
#define MCHIJNKKOAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CA2F0)
#define MCHIJNKKOAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CA350)

inline static constexpr unsigned int MCHIJNKKOAM_TypeDefinitionIndex = 32950;

	class MCHIJNKKOAM : public ::System::Object
	{
	public:
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MCHIJNKKOAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCHIJNKKOAM*>**)UnitySDK::FromName("", "MCHIJNKKOAM")->GetStaticField(0x4A2A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LNNFMNLEBGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCHIJNKKOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHIJNKKOAM*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCHIJNKKOAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCHIJNKKOAM*>*(*)())((::PBYTE)hIl2Cpp + MCHIJNKKOAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCHIJNKKOAM* Clone()
		{
			return ((::MCHIJNKKOAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCHIJNKKOAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCHIJNKKOAM*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCHIJNKKOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHIJNKKOAM*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCHIJNKKOAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
