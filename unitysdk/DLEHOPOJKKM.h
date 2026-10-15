#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEHOPOJKKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLEHOPOJKKM_AOKILNFEGCL_OFFSET UNITYSDK_OFFSET(0x1E1B6AE0)
#define DLEHOPOJKKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B6E40)
#define DLEHOPOJKKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7060)
#define DLEHOPOJKKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B6A90)
#define DLEHOPOJKKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B6A60)
#define DLEHOPOJKKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6A50)
#define DLEHOPOJKKM_DMKIKMLFCDB_OFFSET UNITYSDK_OFFSET(0x1E1B6AD0)
#define DLEHOPOJKKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B6BC0)
#define DLEHOPOJKKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B6AF0)
#define DLEHOPOJKKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B6D30)
#define DLEHOPOJKKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B6A10)
#define DLEHOPOJKKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B6F00)
#define DLEHOPOJKKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B6ED0)
#define DLEHOPOJKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6A40)
#define DLEHOPOJKKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B6D60)
#define DLEHOPOJKKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B6DC0)

inline static constexpr unsigned int DLEHOPOJKKM_TypeDefinitionIndex = 26262;

	class DLEHOPOJKKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LKIAHNAIAPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DLEHOPOJKKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLEHOPOJKKM*>**)UnitySDK::FromName("", "DLEHOPOJKKM")->GetStaticField(0x35300);
		}

		// static const ::System::Object JDFGGPHKILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLEHOPOJKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLEHOPOJKKM*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLEHOPOJKKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLEHOPOJKKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLEHOPOJKKM*>*(*)())((::PBYTE)hIl2Cpp + DLEHOPOJKKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLEHOPOJKKM* Clone()
		{
			return ((::DLEHOPOJKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMKIKMLFCDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_DMKIKMLFCDB_OFFSET))(this);
		}

		::System::Void AOKILNFEGCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_AOKILNFEGCL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLEHOPOJKKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLEHOPOJKKM*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLEHOPOJKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLEHOPOJKKM*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLEHOPOJKKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
