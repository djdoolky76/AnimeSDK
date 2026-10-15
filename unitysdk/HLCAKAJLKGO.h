#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLCAKAJLKGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLCAKAJLKGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58D280)
#define HLCAKAJLKGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58D4A0)
#define HLCAKAJLKGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58CED0)
#define HLCAKAJLKGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58CEA0)
#define HLCAKAJLKGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58CE90)
#define HLCAKAJLKGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58D000)
#define HLCAKAJLKGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58CF30)
#define HLCAKAJLKGO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E58CF20)
#define HLCAKAJLKGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58D170)
#define HLCAKAJLKGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58CE50)
#define HLCAKAJLKGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58D340)
#define HLCAKAJLKGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58D310)
#define HLCAKAJLKGO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E58CF10)
#define HLCAKAJLKGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58CE80)
#define HLCAKAJLKGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58D1A0)
#define HLCAKAJLKGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58D200)

inline static constexpr unsigned int HLCAKAJLKGO_TypeDefinitionIndex = 27132;

	class HLCAKAJLKGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HLCAKAJLKGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLCAKAJLKGO*>**)UnitySDK::FromName("", "HLCAKAJLKGO")->GetStaticField(0x37990);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLCAKAJLKGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLCAKAJLKGO*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCAKAJLKGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HLCAKAJLKGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLCAKAJLKGO*>*(*)())((::PBYTE)hIl2Cpp + HLCAKAJLKGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLCAKAJLKGO* Clone()
		{
			return ((::HLCAKAJLKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLCAKAJLKGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLCAKAJLKGO*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLCAKAJLKGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLCAKAJLKGO*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLCAKAJLKGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
