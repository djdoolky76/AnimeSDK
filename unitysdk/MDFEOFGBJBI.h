#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDFEOFGBJBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDFEOFGBJBI_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E9D4110)
#define MDFEOFGBJBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D4470)
#define MDFEOFGBJBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4690)
#define MDFEOFGBJBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D40C0)
#define MDFEOFGBJBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D4090)
#define MDFEOFGBJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4080)
#define MDFEOFGBJBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D41F0)
#define MDFEOFGBJBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D4120)
#define MDFEOFGBJBI_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E9D4100)
#define MDFEOFGBJBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D4360)
#define MDFEOFGBJBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D4040)
#define MDFEOFGBJBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D4530)
#define MDFEOFGBJBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D4500)
#define MDFEOFGBJBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4070)
#define MDFEOFGBJBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D4390)
#define MDFEOFGBJBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D43F0)

inline static constexpr unsigned int MDFEOFGBJBI_TypeDefinitionIndex = 32732;

	class MDFEOFGBJBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MDFEOFGBJBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDFEOFGBJBI*>**)UnitySDK::FromName("", "MDFEOFGBJBI")->GetStaticField(0x4B9E0);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDFEOFGBJBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDFEOFGBJBI*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDFEOFGBJBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDFEOFGBJBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDFEOFGBJBI*>*(*)())((::PBYTE)hIl2Cpp + MDFEOFGBJBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDFEOFGBJBI* Clone()
		{
			return ((::MDFEOFGBJBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDFEOFGBJBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDFEOFGBJBI*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDFEOFGBJBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDFEOFGBJBI*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDFEOFGBJBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
