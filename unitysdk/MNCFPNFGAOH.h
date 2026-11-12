#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCFPNFGAOH;
class OKJCHGLGBHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNCFPNFGAOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC95D0)
#define MNCFPNFGAOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC98D0)
#define MNCFPNFGAOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC91B0)
#define MNCFPNFGAOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC9100)
#define MNCFPNFGAOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC90B0)
#define MNCFPNFGAOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC9330)
#define MNCFPNFGAOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC91F0)
#define MNCFPNFGAOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC9450)
#define MNCFPNFGAOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC9070)
#define MNCFPNFGAOH_KKBJCOEKODE_OFFSET UNITYSDK_OFFSET(0x1FDC91E0)
#define MNCFPNFGAOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC9710)
#define MNCFPNFGAOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC9670)
#define MNCFPNFGAOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC90A0)
#define MNCFPNFGAOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC94C0)
#define MNCFPNFGAOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC9520)

inline static constexpr unsigned int MNCFPNFGAOH_TypeDefinitionIndex = 31728;

	class MNCFPNFGAOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>* ACIPLELKOBD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MNCFPNFGAOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNCFPNFGAOH*>**)UnitySDK::FromName("", "MNCFPNFGAOH")->GetStaticField(0x5ED80);
		}

		static ::Google::Protobuf::FieldCodec_1<::OKJCHGLGBHP*>** StaticGet_HEPNBMLECIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKJCHGLGBHP*>**)UnitySDK::FromName("", "MNCFPNFGAOH")->GetStaticField(0x5ED88);
		}

		// static const ::System::Object EJHKDHEJHEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNCFPNFGAOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNCFPNFGAOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNCFPNFGAOH*>*(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNCFPNFGAOH* Clone()
		{
			return ((::MNCFPNFGAOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>* KKBJCOEKODE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_KKBJCOEKODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNCFPNFGAOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNCFPNFGAOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
