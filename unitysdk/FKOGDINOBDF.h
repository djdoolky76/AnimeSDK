#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKOGDINOBDF;
class GGGBAIAPDLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKOGDINOBDF_BLBBBHDHNNI_OFFSET UNITYSDK_OFFSET(0x1F6B7F70)
#define FKOGDINOBDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6B8500)
#define FKOGDINOBDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B8820)
#define FKOGDINOBDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6B7EE0)
#define FKOGDINOBDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6B7E70)
#define FKOGDINOBDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B7E60)
#define FKOGDINOBDF_DCMPBFPDJPH_OFFSET UNITYSDK_OFFSET(0x1F6B7F60)
#define FKOGDINOBDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6B80F0)
#define FKOGDINOBDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6B7F80)
#define FKOGDINOBDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6B83C0)
#define FKOGDINOBDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6B7E20)
#define FKOGDINOBDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6B8630)
#define FKOGDINOBDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6B8560)
#define FKOGDINOBDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6B7E50)
#define FKOGDINOBDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6B8410)
#define FKOGDINOBDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6B8470)

inline static constexpr unsigned int FKOGDINOBDF_TypeDefinitionIndex = 33751;

	class FKOGDINOBDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGGBAIAPDLO* IABKNPEKDOC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FKOGDINOBDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKOGDINOBDF*>**)UnitySDK::FromName("", "FKOGDINOBDF")->GetStaticField(0x493F0);
		}

		// static const ::System::Object DBALOCJCBAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKOGDINOBDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOGDINOBDF*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOGDINOBDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKOGDINOBDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKOGDINOBDF*>*(*)())((::PBYTE)hIl2Cpp + FKOGDINOBDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKOGDINOBDF* Clone()
		{
			return ((::FKOGDINOBDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_CLONE_OFFSET))(this);
		}

		::GGGBAIAPDLO* DCMPBFPDJPH()
		{
			return ((::GGGBAIAPDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_DCMPBFPDJPH_OFFSET))(this);
		}

		::System::Void BLBBBHDHNNI(::GGGBAIAPDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGGBAIAPDLO*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_BLBBBHDHNNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKOGDINOBDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKOGDINOBDF*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKOGDINOBDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOGDINOBDF*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKOGDINOBDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
