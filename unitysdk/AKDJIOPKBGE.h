#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKDJIOPKBGE_LDOPDGJALCD.h"
#include "unitysdk/System/Object.h"
class AKDJIOPKBGE;
class NIEDLOCCGCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKDJIOPKBGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F685210)
#define AKDJIOPKBGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F685540)
#define AKDJIOPKBGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F684DE0)
#define AKDJIOPKBGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F684CF0)
#define AKDJIOPKBGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F684CE0)
#define AKDJIOPKBGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F684E60)
#define AKDJIOPKBGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F684E30)
#define AKDJIOPKBGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F685040)
#define AKDJIOPKBGE_HCJFOHHJGHN_OFFSET UNITYSDK_OFFSET(0x1F684DC0)
#define AKDJIOPKBGE_IEJBIJIKDPB_OFFSET UNITYSDK_OFFSET(0x1F684E10)
#define AKDJIOPKBGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F684CA0)
#define AKDJIOPKBGE_LCGFNMHIOGB_OFFSET UNITYSDK_OFFSET(0x1F684E20)
#define AKDJIOPKBGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F685370)
#define AKDJIOPKBGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F685280)
#define AKDJIOPKBGE_ONBBJCHMAFI_OFFSET UNITYSDK_OFFSET(0x1F684D80)
#define AKDJIOPKBGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F684CD0)
#define AKDJIOPKBGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F685100)
#define AKDJIOPKBGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F685160)

inline static constexpr unsigned int AKDJIOPKBGE_TypeDefinitionIndex = 31677;

	class AKDJIOPKBGE : public ::System::Object
	{
	public:
		::System::Object* GAPGOEGADAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::AKDJIOPKBGE_LDOPDGJALCD MGAKGNOKNPH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AKDJIOPKBGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKDJIOPKBGE*>**)UnitySDK::FromName("", "AKDJIOPKBGE")->GetStaticField(0x3DB40);
		}

		// static const ::System::Object OBDBBEKFECB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKDJIOPKBGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDJIOPKBGE*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDJIOPKBGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKDJIOPKBGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKDJIOPKBGE*>*(*)())((::PBYTE)hIl2Cpp + AKDJIOPKBGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKDJIOPKBGE* Clone()
		{
			return ((::AKDJIOPKBGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_CLONE_OFFSET))(this);
		}

		::NIEDLOCCGCG* ONBBJCHMAFI()
		{
			return ((::NIEDLOCCGCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_ONBBJCHMAFI_OFFSET))(this);
		}

		::System::Void HCJFOHHJGHN(::NIEDLOCCGCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEDLOCCGCG*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_HCJFOHHJGHN_OFFSET))(this, a1);
		}

		::AKDJIOPKBGE_LDOPDGJALCD IEJBIJIKDPB()
		{
			return ((::AKDJIOPKBGE_LDOPDGJALCD(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_IEJBIJIKDPB_OFFSET))(this);
		}

		::System::Void LCGFNMHIOGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_LCGFNMHIOGB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKDJIOPKBGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKDJIOPKBGE*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKDJIOPKBGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDJIOPKBGE*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKDJIOPKBGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
