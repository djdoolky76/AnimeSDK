#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LODMLDKMPPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LODMLDKMPPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9BADD0)
#define LODMLDKMPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BAFF0)
#define LODMLDKMPPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BA9C0)
#define LODMLDKMPPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BA990)
#define LODMLDKMPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA980)
#define LODMLDKMPPL_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E9BAA30)
#define LODMLDKMPPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9BAB50)
#define LODMLDKMPPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9BAA50)
#define LODMLDKMPPL_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E9BAA40)
#define LODMLDKMPPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9BACC0)
#define LODMLDKMPPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9BA910)
#define LODMLDKMPPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9BAE90)
#define LODMLDKMPPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BAE60)
#define LODMLDKMPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA970)
#define LODMLDKMPPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9BACF0)
#define LODMLDKMPPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9BAD50)

inline static constexpr unsigned int LODMLDKMPPL_TypeDefinitionIndex = 29859;

	class LODMLDKMPPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LODMLDKMPPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LODMLDKMPPL*>**)UnitySDK::FromName("", "LODMLDKMPPL")->GetStaticField(0x51410);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LODMLDKMPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LODMLDKMPPL*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODMLDKMPPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LODMLDKMPPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LODMLDKMPPL*>*(*)())((::PBYTE)hIl2Cpp + LODMLDKMPPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LODMLDKMPPL* Clone()
		{
			return ((::LODMLDKMPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LODMLDKMPPL_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LODMLDKMPPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LODMLDKMPPL*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LODMLDKMPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LODMLDKMPPL*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LODMLDKMPPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
