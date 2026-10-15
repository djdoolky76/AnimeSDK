#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFJJJNGBMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFJJJNGBMMK_ADGMLOPOONI_OFFSET UNITYSDK_OFFSET(0x1E7EE280)
#define KFJJJNGBMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7EE6C0)
#define KFJJJNGBMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE9B0)
#define KFJJJNGBMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7EE230)
#define KFJJJNGBMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7EE1A0)
#define KFJJJNGBMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE150)
#define KFJJJNGBMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7EE390)
#define KFJJJNGBMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7EE290)
#define KFJJJNGBMMK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7EE270)
#define KFJJJNGBMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7EE480)
#define KFJJJNGBMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7EE110)
#define KFJJJNGBMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7EE7F0)
#define KFJJJNGBMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7EE7A0)
#define KFJJJNGBMMK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7EE260)
#define KFJJJNGBMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE140)
#define KFJJJNGBMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7EE580)
#define KFJJJNGBMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7EE5E0)

inline static constexpr unsigned int KFJJJNGBMMK_TypeDefinitionIndex = 34578;

	class KFJJJNGBMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKMKIDBEBFH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFJJJNGBMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFJJJNGBMMK*>**)UnitySDK::FromName("", "KFJJJNGBMMK")->GetStaticField(0x12E40);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PNNGNPLNGIL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KFJJJNGBMMK")->GetStaticField(0x12E48);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FEEGJLAMKLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFJJJNGBMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJJJNGBMMK*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFJJJNGBMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFJJJNGBMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFJJJNGBMMK*>*(*)())((::PBYTE)hIl2Cpp + KFJJJNGBMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFJJJNGBMMK* Clone()
		{
			return ((::KFJJJNGBMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADGMLOPOONI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_ADGMLOPOONI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFJJJNGBMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFJJJNGBMMK*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFJJJNGBMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJJJNGBMMK*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFJJJNGBMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
