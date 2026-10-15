#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACPIBIJPPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BACPIBIJPPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7825B0)
#define BACPIBIJPPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7827D0)
#define BACPIBIJPPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E782200)
#define BACPIBIJPPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7821D0)
#define BACPIBIJPPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7821C0)
#define BACPIBIJPPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E782330)
#define BACPIBIJPPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E782260)
#define BACPIBIJPPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E782250)
#define BACPIBIJPPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7824A0)
#define BACPIBIJPPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E782180)
#define BACPIBIJPPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E782670)
#define BACPIBIJPPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E782640)
#define BACPIBIJPPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E782240)
#define BACPIBIJPPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7821B0)
#define BACPIBIJPPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7824D0)
#define BACPIBIJPPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E782530)

inline static constexpr unsigned int BACPIBIJPPH_TypeDefinitionIndex = 26651;

	class BACPIBIJPPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BACPIBIJPPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BACPIBIJPPH*>**)UnitySDK::FromName("", "BACPIBIJPPH")->GetStaticField(0x4B550);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BACPIBIJPPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACPIBIJPPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BACPIBIJPPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BACPIBIJPPH*>*(*)())((::PBYTE)hIl2Cpp + BACPIBIJPPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BACPIBIJPPH* Clone()
		{
			return ((::BACPIBIJPPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACPIBIJPPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BACPIBIJPPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BACPIBIJPPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
