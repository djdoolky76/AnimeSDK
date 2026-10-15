#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGJBIJKIMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHGJBIJKIMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B4480)
#define DHGJBIJKIMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B4780)
#define DHGJBIJKIMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B3FF0)
#define DHGJBIJKIMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B3F60)
#define DHGJBIJKIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3F10)
#define DHGJBIJKIMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B4150)
#define DHGJBIJKIMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B4050)
#define DHGJBIJKIMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1B4040)
#define DHGJBIJKIMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B4240)
#define DHGJBIJKIMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B3ED0)
#define DHGJBIJKIMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B45C0)
#define DHGJBIJKIMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B4570)
#define DHGJBIJKIMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1B4030)
#define DHGJBIJKIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3F00)
#define DHGJBIJKIMM_PJCGNIDNIID_OFFSET UNITYSDK_OFFSET(0x1E1B4020)
#define DHGJBIJKIMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B4340)
#define DHGJBIJKIMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B43A0)

inline static constexpr unsigned int DHGJBIJKIMM_TypeDefinitionIndex = 34137;

	class DHGJBIJKIMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DHGJBIJKIMM")->GetStaticField(0x34FB0);
		}

		static ::Google::Protobuf::MessageParser_1<::DHGJBIJKIMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHGJBIJKIMM*>**)UnitySDK::FromName("", "DHGJBIJKIMM")->GetStaticField(0x34FB8);
		}

		// static const ::System::Object IPAMJEJOGBG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHGJBIJKIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGJBIJKIMM*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGJBIJKIMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHGJBIJKIMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHGJBIJKIMM*>*(*)())((::PBYTE)hIl2Cpp + DHGJBIJKIMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHGJBIJKIMM* Clone()
		{
			return ((::DHGJBIJKIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PJCGNIDNIID()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_PJCGNIDNIID_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHGJBIJKIMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHGJBIJKIMM*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHGJBIJKIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGJBIJKIMM*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHGJBIJKIMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
