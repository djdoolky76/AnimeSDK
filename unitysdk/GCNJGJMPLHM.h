#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCNJGJMPLHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCNJGJMPLHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E442160)
#define GCNJGJMPLHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E442200)
#define GCNJGJMPLHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E441E00)
#define GCNJGJMPLHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E441DD0)
#define GCNJGJMPLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E441DC0)
#define GCNJGJMPLHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E441F60)
#define GCNJGJMPLHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E441E70)
#define GCNJGJMPLHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4420C0)
#define GCNJGJMPLHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E441D50)
#define GCNJGJMPLHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4421B0)
#define GCNJGJMPLHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E442180)
#define GCNJGJMPLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E441DB0)
#define GCNJGJMPLHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4420F0)
#define GCNJGJMPLHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E442150)

inline static constexpr unsigned int GCNJGJMPLHM_TypeDefinitionIndex = 29863;

	class GCNJGJMPLHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GCNJGJMPLHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCNJGJMPLHM*>**)UnitySDK::FromName("", "GCNJGJMPLHM")->GetStaticField(0xFA70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCNJGJMPLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCNJGJMPLHM*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCNJGJMPLHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCNJGJMPLHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCNJGJMPLHM*>*(*)())((::PBYTE)hIl2Cpp + GCNJGJMPLHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCNJGJMPLHM* Clone()
		{
			return ((::GCNJGJMPLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCNJGJMPLHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCNJGJMPLHM*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCNJGJMPLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCNJGJMPLHM*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCNJGJMPLHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
