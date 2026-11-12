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

#define DLAJEPIPOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4B8E20)
#define DLAJEPIPOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B9110)
#define DLAJEPIPOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4B8990)
#define DLAJEPIPOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4B8900)
#define DLAJEPIPOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B88B0)
#define DLAJEPIPOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4B8AF0)
#define DLAJEPIPOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4B89F0)
#define DLAJEPIPOMO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F4B89D0)
#define DLAJEPIPOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4B8BE0)
#define DLAJEPIPOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4B8870)
#define DLAJEPIPOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4B8F50)
#define DLAJEPIPOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4B8F00)
#define DLAJEPIPOMO_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1F4B89E0)
#define DLAJEPIPOMO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F4B89C0)
#define DLAJEPIPOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4B88A0)
#define DLAJEPIPOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4B8CE0)
#define DLAJEPIPOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4B8D40)

inline static constexpr unsigned int DLAJEPIPOMO_TypeDefinitionIndex = 35608;

	class DLAJEPIPOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DLAJEPIPOMO")->GetStaticField(0x37170);
		}

		static ::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLAJEPIPOMO*>**)UnitySDK::FromName("", "DLAJEPIPOMO")->GetStaticField(0x37178);
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
