#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABMNFJJDDOE;
class BJNCNELEOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABMNFJJDDOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFD1910)
#define ABMNFJJDDOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD1C90)
#define ABMNFJJDDOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFD1400)
#define ABMNFJJDDOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD1340)
#define ABMNFJJDDOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD12F0)
#define ABMNFJJDDOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFD1610)
#define ABMNFJJDDOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFD1480)
#define ABMNFJJDDOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFD1740)
#define ABMNFJJDDOE_GHFMIEHDEDM_OFFSET UNITYSDK_OFFSET(0x1EFD1470)
#define ABMNFJJDDOE_IKEOIMIDAHJ_OFFSET UNITYSDK_OFFSET(0x1EFD1460)
#define ABMNFJJDDOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFD1280)
#define ABMNFJJDDOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFD1AC0)
#define ABMNFJJDDOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFD1A20)
#define ABMNFJJDDOE_NIKPNLKMIBL_OFFSET UNITYSDK_OFFSET(0x1EFD1450)
#define ABMNFJJDDOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFD12E0)
#define ABMNFJJDDOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFD17B0)
#define ABMNFJJDDOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFD1810)

inline static constexpr unsigned int ABMNFJJDDOE_TypeDefinitionIndex = 26199;

	class ABMNFJJDDOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BJNCNELEOMO*>* EPGPNPFJBIP; // 0x18
		::System::UInt32 MLLJMFGPJLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ABMNFJJDDOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABMNFJJDDOE*>**)UnitySDK::FromName("", "ABMNFJJDDOE")->GetStaticField(0x345C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BJNCNELEOMO*>** StaticGet_FAGAECCNFOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::BJNCNELEOMO*>**)UnitySDK::FromName("", "ABMNFJJDDOE")->GetStaticField(0x345C8);
		}

		// static const ::System::Object EGMMMJMLHMP; // 0x0
		// static const ::System::Object HPGDFBOIEKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABMNFJJDDOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABMNFJJDDOE*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABMNFJJDDOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABMNFJJDDOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABMNFJJDDOE*>*(*)())((::PBYTE)hIl2Cpp + ABMNFJJDDOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABMNFJJDDOE* Clone()
		{
			return ((::ABMNFJJDDOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 NIKPNLKMIBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_NIKPNLKMIBL_OFFSET))(this);
		}

		::System::Void IKEOIMIDAHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_IKEOIMIDAHJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BJNCNELEOMO*>* GHFMIEHDEDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BJNCNELEOMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_GHFMIEHDEDM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABMNFJJDDOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABMNFJJDDOE*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABMNFJJDDOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABMNFJJDDOE*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABMNFJJDDOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
