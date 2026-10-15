#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INEBJNDOBGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INEBJNDOBGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E693140)
#define INEBJNDOBGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6931E0)
#define INEBJNDOBGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E692E30)
#define INEBJNDOBGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E692E00)
#define INEBJNDOBGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E692DF0)
#define INEBJNDOBGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E692F40)
#define INEBJNDOBGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E692E70)
#define INEBJNDOBGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6930A0)
#define INEBJNDOBGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E692DB0)
#define INEBJNDOBGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E693190)
#define INEBJNDOBGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E693160)
#define INEBJNDOBGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E692DE0)
#define INEBJNDOBGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6930D0)
#define INEBJNDOBGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E693130)

inline static constexpr unsigned int INEBJNDOBGP_TypeDefinitionIndex = 31205;

	class INEBJNDOBGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::INEBJNDOBGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INEBJNDOBGP*>**)UnitySDK::FromName("", "INEBJNDOBGP")->GetStaticField(0x53800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INEBJNDOBGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INEBJNDOBGP*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INEBJNDOBGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INEBJNDOBGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INEBJNDOBGP*>*(*)())((::PBYTE)hIl2Cpp + INEBJNDOBGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INEBJNDOBGP* Clone()
		{
			return ((::INEBJNDOBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INEBJNDOBGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INEBJNDOBGP*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INEBJNDOBGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INEBJNDOBGP*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INEBJNDOBGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
