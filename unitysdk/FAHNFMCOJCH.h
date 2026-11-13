#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHNFMCOJCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAHNFMCOJCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F748A50)
#define FAHNFMCOJCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F748C70)
#define FAHNFMCOJCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7486A0)
#define FAHNFMCOJCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F748670)
#define FAHNFMCOJCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F748660)
#define FAHNFMCOJCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7487D0)
#define FAHNFMCOJCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F748700)
#define FAHNFMCOJCH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F7486F0)
#define FAHNFMCOJCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F748940)
#define FAHNFMCOJCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F748620)
#define FAHNFMCOJCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F748B10)
#define FAHNFMCOJCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F748AE0)
#define FAHNFMCOJCH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F7486E0)
#define FAHNFMCOJCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F748650)
#define FAHNFMCOJCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F748970)
#define FAHNFMCOJCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7489D0)

inline static constexpr unsigned int FAHNFMCOJCH_TypeDefinitionIndex = 27651;

	class FAHNFMCOJCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FAHNFMCOJCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAHNFMCOJCH*>**)UnitySDK::FromName("", "FAHNFMCOJCH")->GetStaticField(0x3DA40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAHNFMCOJCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHNFMCOJCH*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHNFMCOJCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAHNFMCOJCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAHNFMCOJCH*>*(*)())((::PBYTE)hIl2Cpp + FAHNFMCOJCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAHNFMCOJCH* Clone()
		{
			return ((::FAHNFMCOJCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAHNFMCOJCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAHNFMCOJCH*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAHNFMCOJCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHNFMCOJCH*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAHNFMCOJCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
