#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLAJEPIPOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLAJEPIPOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DC9C0)
#define DLAJEPIPOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DCCB0)
#define DLAJEPIPOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DC530)
#define DLAJEPIPOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DC4A0)
#define DLAJEPIPOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC450)
#define DLAJEPIPOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DC690)
#define DLAJEPIPOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DC590)
#define DLAJEPIPOMO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1DC570)
#define DLAJEPIPOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DC780)
#define DLAJEPIPOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DC410)
#define DLAJEPIPOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DCAF0)
#define DLAJEPIPOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DCAA0)
#define DLAJEPIPOMO_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1E1DC580)
#define DLAJEPIPOMO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1DC560)
#define DLAJEPIPOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC440)
#define DLAJEPIPOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DC880)
#define DLAJEPIPOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DC8E0)

inline static constexpr unsigned int DLAJEPIPOMO_TypeDefinitionIndex = 34680;

	class DLAJEPIPOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>**)UnitySDK::FromName("", "DLAJEPIPOMO")->GetStaticField(0x3B740);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DLAJEPIPOMO")->GetStaticField(0x3B748);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GEIJLLIDHFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLAJEPIPOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAJEPIPOMO*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAJEPIPOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>*(*)())((::PBYTE)hIl2Cpp + DLAJEPIPOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLAJEPIPOMO* Clone()
		{
			return ((::DLAJEPIPOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKGGFJLECGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_MKGGFJLECGJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLAJEPIPOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLAJEPIPOMO*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLAJEPIPOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAJEPIPOMO*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLAJEPIPOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
