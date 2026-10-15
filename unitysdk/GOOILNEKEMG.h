#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOOILNEKEMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOILNEKEMG_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E4F4110)
#define GOOILNEKEMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F4470)
#define GOOILNEKEMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F4690)
#define GOOILNEKEMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F40C0)
#define GOOILNEKEMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F4090)
#define GOOILNEKEMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F4080)
#define GOOILNEKEMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F41F0)
#define GOOILNEKEMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F4120)
#define GOOILNEKEMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F4360)
#define GOOILNEKEMG_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E4F4100)
#define GOOILNEKEMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F4040)
#define GOOILNEKEMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F4530)
#define GOOILNEKEMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F4500)
#define GOOILNEKEMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F4070)
#define GOOILNEKEMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F4390)
#define GOOILNEKEMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F43F0)

inline static constexpr unsigned int GOOILNEKEMG_TypeDefinitionIndex = 33738;

	class GOOILNEKEMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GOOILNEKEMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOOILNEKEMG*>**)UnitySDK::FromName("", "GOOILNEKEMG")->GetStaticField(0x2B5E0);
		}

		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOOILNEKEMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOOILNEKEMG*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOILNEKEMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOOILNEKEMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOOILNEKEMG*>*(*)())((::PBYTE)hIl2Cpp + GOOILNEKEMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOOILNEKEMG* Clone()
		{
			return ((::GOOILNEKEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOILNEKEMG_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOOILNEKEMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOOILNEKEMG*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOOILNEKEMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOOILNEKEMG*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOILNEKEMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
