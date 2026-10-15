#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNEBIKHBHOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNEBIKHBHOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E795370)
#define JNEBIKHBHOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E795590)
#define JNEBIKHBHOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E794FC0)
#define JNEBIKHBHOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E794F90)
#define JNEBIKHBHOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E794F80)
#define JNEBIKHBHOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7950F0)
#define JNEBIKHBHOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E795020)
#define JNEBIKHBHOB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E795010)
#define JNEBIKHBHOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E795260)
#define JNEBIKHBHOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E794F40)
#define JNEBIKHBHOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E795430)
#define JNEBIKHBHOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E795400)
#define JNEBIKHBHOB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E795000)
#define JNEBIKHBHOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E794F70)
#define JNEBIKHBHOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E795290)
#define JNEBIKHBHOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7952F0)

inline static constexpr unsigned int JNEBIKHBHOB_TypeDefinitionIndex = 30124;

	class JNEBIKHBHOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JNEBIKHBHOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNEBIKHBHOB*>**)UnitySDK::FromName("", "JNEBIKHBHOB")->GetStaticField(0x6C6E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNEBIKHBHOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNEBIKHBHOB*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNEBIKHBHOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNEBIKHBHOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNEBIKHBHOB*>*(*)())((::PBYTE)hIl2Cpp + JNEBIKHBHOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNEBIKHBHOB* Clone()
		{
			return ((::JNEBIKHBHOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNEBIKHBHOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNEBIKHBHOB*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNEBIKHBHOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNEBIKHBHOB*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNEBIKHBHOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
