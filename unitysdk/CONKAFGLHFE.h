#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CONKAFGLHFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CONKAFGLHFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204E0320)
#define CONKAFGLHFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E05F0)
#define CONKAFGLHFE_CLONE_OFFSET UNITYSDK_OFFSET(0x204DFF20)
#define CONKAFGLHFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204DFEF0)
#define CONKAFGLHFE_CTOR_OFFSET UNITYSDK_OFFSET(0x204DFEE0)
#define CONKAFGLHFE_DEHBBDMJLAB_OFFSET UNITYSDK_OFFSET(0x204DFFA0)
#define CONKAFGLHFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204E00E0)
#define CONKAFGLHFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x204DFFD0)
#define CONKAFGLHFE_FKBHCMBLLAG_OFFSET UNITYSDK_OFFSET(0x204DFFC0)
#define CONKAFGLHFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204E01B0)
#define CONKAFGLHFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204DFE70)
#define CONKAFGLHFE_MCFPCKHMMHG_OFFSET UNITYSDK_OFFSET(0x204DFFB0)
#define CONKAFGLHFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204E0470)
#define CONKAFGLHFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204E0430)
#define CONKAFGLHFE_OEONGHMNBPC_OFFSET UNITYSDK_OFFSET(0x204DFF90)
#define CONKAFGLHFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204DFED0)
#define CONKAFGLHFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204E01E0)
#define CONKAFGLHFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x204E0240)

inline static constexpr unsigned int CONKAFGLHFE_TypeDefinitionIndex = 29967;

	class CONKAFGLHFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ELILPBADDAH; // 0x18
		::System::UInt32 BCIKNILHLDO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CONKAFGLHFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CONKAFGLHFE*>**)UnitySDK::FromName("", "CONKAFGLHFE")->GetStaticField(0x17D90);
		}

		// static const ::System::Object IPFAFGFBEOH; // 0x0
		// static const ::System::Object DDFPPALAEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CONKAFGLHFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONKAFGLHFE*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONKAFGLHFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CONKAFGLHFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CONKAFGLHFE*>*(*)())((::PBYTE)hIl2Cpp + CONKAFGLHFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CONKAFGLHFE* Clone()
		{
			return ((::CONKAFGLHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEONGHMNBPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_OEONGHMNBPC_OFFSET))(this);
		}

		::System::Void DEHBBDMJLAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONKAFGLHFE_DEHBBDMJLAB_OFFSET))(this, a1);
		}

		::System::UInt32 MCFPCKHMMHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_MCFPCKHMMHG_OFFSET))(this);
		}

		::System::Void FKBHCMBLLAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONKAFGLHFE_FKBHCMBLLAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CONKAFGLHFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CONKAFGLHFE*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CONKAFGLHFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONKAFGLHFE*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CONKAFGLHFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
