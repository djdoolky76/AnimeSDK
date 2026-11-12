#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLCBONEAMNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLCBONEAMNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F24FB70)
#define PLCBONEAMNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F24FE60)
#define PLCBONEAMNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F24F6E0)
#define PLCBONEAMNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F24F650)
#define PLCBONEAMNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F24F600)
#define PLCBONEAMNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F24F840)
#define PLCBONEAMNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F24F740)
#define PLCBONEAMNL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F24F730)
#define PLCBONEAMNL_FKFIGPAAAMG_OFFSET UNITYSDK_OFFSET(0x1F24F710)
#define PLCBONEAMNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F24F930)
#define PLCBONEAMNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F24F5C0)
#define PLCBONEAMNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F24FCB0)
#define PLCBONEAMNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F24FC60)
#define PLCBONEAMNL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F24F720)
#define PLCBONEAMNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F24F5F0)
#define PLCBONEAMNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F24FA30)
#define PLCBONEAMNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F24FA90)

inline static constexpr unsigned int PLCBONEAMNL_TypeDefinitionIndex = 31082;

	class PLCBONEAMNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEDPGFJGBCK; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PLCBONEAMNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLCBONEAMNL*>**)UnitySDK::FromName("", "PLCBONEAMNL")->GetStaticField(0x3D0A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MCIBAOKJLNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PLCBONEAMNL")->GetStaticField(0x3D0A8);
		}

		// static const ::System::Object KGEHKBAACFL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLCBONEAMNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLCBONEAMNL*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBONEAMNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLCBONEAMNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLCBONEAMNL*>*(*)())((::PBYTE)hIl2Cpp + PLCBONEAMNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLCBONEAMNL* Clone()
		{
			return ((::PLCBONEAMNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFIGPAAAMG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_FKFIGPAAAMG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLCBONEAMNL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLCBONEAMNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLCBONEAMNL*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLCBONEAMNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLCBONEAMNL*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLCBONEAMNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
