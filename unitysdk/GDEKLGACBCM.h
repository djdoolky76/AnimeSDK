#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDEKLGACBCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDEKLGACBCM_AIGJAGKCOCO_OFFSET UNITYSDK_OFFSET(0x1E445E80)
#define GDEKLGACBCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4461E0)
#define GDEKLGACBCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E446400)
#define GDEKLGACBCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E445E30)
#define GDEKLGACBCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E445E00)
#define GDEKLGACBCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E445DF0)
#define GDEKLGACBCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E445F60)
#define GDEKLGACBCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E445E90)
#define GDEKLGACBCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4460D0)
#define GDEKLGACBCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E445DB0)
#define GDEKLGACBCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4462A0)
#define GDEKLGACBCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E446270)
#define GDEKLGACBCM_NNILNLEKKND_OFFSET UNITYSDK_OFFSET(0x1E445E70)
#define GDEKLGACBCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E445DE0)
#define GDEKLGACBCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E446100)
#define GDEKLGACBCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E446160)

inline static constexpr unsigned int GDEKLGACBCM_TypeDefinitionIndex = 31466;

	class GDEKLGACBCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LDPCPFBPKPA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GDEKLGACBCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDEKLGACBCM*>**)UnitySDK::FromName("", "GDEKLGACBCM")->GetStaticField(0x10210);
		}

		// static const ::System::Object JAHHDKAPBOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDEKLGACBCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDEKLGACBCM*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEKLGACBCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDEKLGACBCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDEKLGACBCM*>*(*)())((::PBYTE)hIl2Cpp + GDEKLGACBCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDEKLGACBCM* Clone()
		{
			return ((::GDEKLGACBCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNILNLEKKND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_NNILNLEKKND_OFFSET))(this);
		}

		::System::Void AIGJAGKCOCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDEKLGACBCM_AIGJAGKCOCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDEKLGACBCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDEKLGACBCM*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDEKLGACBCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDEKLGACBCM*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDEKLGACBCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
