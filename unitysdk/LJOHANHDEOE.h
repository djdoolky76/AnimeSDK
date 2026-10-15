#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJOHANHDEOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJOHANHDEOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9888B0)
#define LJOHANHDEOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E988AD0)
#define LJOHANHDEOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E988500)
#define LJOHANHDEOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9884D0)
#define LJOHANHDEOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9884C0)
#define LJOHANHDEOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E988630)
#define LJOHANHDEOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E988560)
#define LJOHANHDEOE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E988550)
#define LJOHANHDEOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9887A0)
#define LJOHANHDEOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E988480)
#define LJOHANHDEOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E988970)
#define LJOHANHDEOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E988940)
#define LJOHANHDEOE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E988540)
#define LJOHANHDEOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9884B0)
#define LJOHANHDEOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9887D0)
#define LJOHANHDEOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E988830)

inline static constexpr unsigned int LJOHANHDEOE_TypeDefinitionIndex = 26513;

	class LJOHANHDEOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LJOHANHDEOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJOHANHDEOE*>**)UnitySDK::FromName("", "LJOHANHDEOE")->GetStaticField(0x48F80);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJOHANHDEOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOHANHDEOE*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOHANHDEOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJOHANHDEOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJOHANHDEOE*>*(*)())((::PBYTE)hIl2Cpp + LJOHANHDEOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJOHANHDEOE* Clone()
		{
			return ((::LJOHANHDEOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJOHANHDEOE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJOHANHDEOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJOHANHDEOE*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJOHANHDEOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOHANHDEOE*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJOHANHDEOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
