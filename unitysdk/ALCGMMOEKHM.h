#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCGMMOEKHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALCGMMOEKHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D59D0)
#define ALCGMMOEKHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D5A70)
#define ALCGMMOEKHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D56C0)
#define ALCGMMOEKHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D5690)
#define ALCGMMOEKHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D5680)
#define ALCGMMOEKHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D57D0)
#define ALCGMMOEKHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D5700)
#define ALCGMMOEKHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D5930)
#define ALCGMMOEKHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D5640)
#define ALCGMMOEKHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D5A20)
#define ALCGMMOEKHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D59F0)
#define ALCGMMOEKHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D5670)
#define ALCGMMOEKHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D5960)
#define ALCGMMOEKHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D59C0)

inline static constexpr unsigned int ALCGMMOEKHM_TypeDefinitionIndex = 30433;

	class ALCGMMOEKHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ALCGMMOEKHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALCGMMOEKHM*>**)UnitySDK::FromName("", "ALCGMMOEKHM")->GetStaticField(0x37A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALCGMMOEKHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCGMMOEKHM*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCGMMOEKHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALCGMMOEKHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALCGMMOEKHM*>*(*)())((::PBYTE)hIl2Cpp + ALCGMMOEKHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALCGMMOEKHM* Clone()
		{
			return ((::ALCGMMOEKHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALCGMMOEKHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALCGMMOEKHM*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALCGMMOEKHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCGMMOEKHM*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALCGMMOEKHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
