#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIGELLJGGEP;
class DPJCBHKGFOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIGELLJGGEP_BAJLKBPIBDN_OFFSET UNITYSDK_OFFSET(0x1DE01BF0)
#define BIGELLJGGEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE021D0)
#define BIGELLJGGEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE02490)
#define BIGELLJGGEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE01B40)
#define BIGELLJGGEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE01AB0)
#define BIGELLJGGEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE01AA0)
#define BIGELLJGGEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE01D70)
#define BIGELLJGGEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE01C00)
#define BIGELLJGGEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE02040)
#define BIGELLJGGEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE01A60)
#define BIGELLJGGEP_JNMAJGLDFDA_OFFSET UNITYSDK_OFFSET(0x1DE01BE0)
#define BIGELLJGGEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE022E0)
#define BIGELLJGGEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE02230)
#define BIGELLJGGEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE01A90)
#define BIGELLJGGEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE020E0)
#define BIGELLJGGEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE02140)

inline static constexpr unsigned int BIGELLJGGEP_TypeDefinitionIndex = 32546;

	class BIGELLJGGEP : public ::System::Object
	{
	public:
		::DPJCBHKGFOK* AABFFOJLCIN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BIGELLJGGEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BIGELLJGGEP*>**)UnitySDK::FromName("", "BIGELLJGGEP")->GetStaticField(0x482A0);
		}

		// static const ::System::Object KFEFLMHHBJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIGELLJGGEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIGELLJGGEP*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGELLJGGEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BIGELLJGGEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BIGELLJGGEP*>*(*)())((::PBYTE)hIl2Cpp + BIGELLJGGEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIGELLJGGEP* Clone()
		{
			return ((::BIGELLJGGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_CLONE_OFFSET))(this);
		}

		::DPJCBHKGFOK* JNMAJGLDFDA()
		{
			return ((::DPJCBHKGFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_JNMAJGLDFDA_OFFSET))(this);
		}

		::System::Void BAJLKBPIBDN(::DPJCBHKGFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPJCBHKGFOK*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_BAJLKBPIBDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIGELLJGGEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIGELLJGGEP*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIGELLJGGEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIGELLJGGEP*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIGELLJGGEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
