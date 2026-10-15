#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDDFIOBBHOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDDFIOBBHOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E708800)
#define JDDFIOBBHOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E708AD0)
#define JDDFIOBBHOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E708450)
#define JDDFIOBBHOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E708420)
#define JDDFIOBBHOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E708410)
#define JDDFIOBBHOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7085C0)
#define JDDFIOBBHOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7084E0)
#define JDDFIOBBHOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7084B0)
#define JDDFIOBBHOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E708690)
#define JDDFIOBBHOF_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E7084D0)
#define JDDFIOBBHOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7083D0)
#define JDDFIOBBHOF_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E7084C0)
#define JDDFIOBBHOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E708950)
#define JDDFIOBBHOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E708910)
#define JDDFIOBBHOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7084A0)
#define JDDFIOBBHOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E708400)
#define JDDFIOBBHOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7086C0)
#define JDDFIOBBHOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E708720)

inline static constexpr unsigned int JDDFIOBBHOF_TypeDefinitionIndex = 25982;

	class JDDFIOBBHOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDDFIOBBHOF")->GetStaticField(0x5DB40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDDFIOBBHOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDDFIOBBHOF*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDDFIOBBHOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDDFIOBBHOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDDFIOBBHOF* Clone()
		{
			return ((::JDDFIOBBHOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDDFIOBBHOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDDFIOBBHOF*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDDFIOBBHOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDDFIOBBHOF*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDDFIOBBHOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
