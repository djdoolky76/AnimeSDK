#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNOGAGKIKHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNOGAGKIKHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBE3D00)
#define KNOGAGKIKHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE3F20)
#define KNOGAGKIKHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBE3950)
#define KNOGAGKIKHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBE3920)
#define KNOGAGKIKHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE3910)
#define KNOGAGKIKHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBE3A80)
#define KNOGAGKIKHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBE39B0)
#define KNOGAGKIKHH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBE39A0)
#define KNOGAGKIKHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBE3BF0)
#define KNOGAGKIKHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBE38D0)
#define KNOGAGKIKHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBE3DC0)
#define KNOGAGKIKHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBE3D90)
#define KNOGAGKIKHH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBE3990)
#define KNOGAGKIKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBE3900)
#define KNOGAGKIKHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBE3C20)
#define KNOGAGKIKHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBE3C80)

inline static constexpr unsigned int KNOGAGKIKHH_TypeDefinitionIndex = 27423;

	class KNOGAGKIKHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KNOGAGKIKHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNOGAGKIKHH*>**)UnitySDK::FromName("", "KNOGAGKIKHH")->GetStaticField(0x1D6B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNOGAGKIKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOGAGKIKHH*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOGAGKIKHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNOGAGKIKHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNOGAGKIKHH*>*(*)())((::PBYTE)hIl2Cpp + KNOGAGKIKHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNOGAGKIKHH* Clone()
		{
			return ((::KNOGAGKIKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNOGAGKIKHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNOGAGKIKHH*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNOGAGKIKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOGAGKIKHH*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNOGAGKIKHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
