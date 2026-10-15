#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHFBNKIHGIH;
class JBOBHIPHGPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHFBNKIHGIH_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E240AA0)
#define AHFBNKIHGIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E240F40)
#define AHFBNKIHGIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E241340)
#define AHFBNKIHGIH_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E240AB0)
#define AHFBNKIHGIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2409F0)
#define AHFBNKIHGIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E240970)
#define AHFBNKIHGIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E240960)
#define AHFBNKIHGIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E240C40)
#define AHFBNKIHGIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E240AC0)
#define AHFBNKIHGIH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E240A90)
#define AHFBNKIHGIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E240DC0)
#define AHFBNKIHGIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E240920)
#define AHFBNKIHGIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E241150)
#define AHFBNKIHGIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E241010)
#define AHFBNKIHGIH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E240A80)
#define AHFBNKIHGIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E240950)
#define AHFBNKIHGIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E240E00)
#define AHFBNKIHGIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E240E60)

inline static constexpr unsigned int AHFBNKIHGIH_TypeDefinitionIndex = 30647;

	class AHFBNKIHGIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JBOBHIPHGPB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AHFBNKIHGIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHFBNKIHGIH*>**)UnitySDK::FromName("", "AHFBNKIHGIH")->GetStaticField(0x39930);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAHAEFHMLHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHFBNKIHGIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHFBNKIHGIH*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHFBNKIHGIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHFBNKIHGIH*>*(*)())((::PBYTE)hIl2Cpp + AHFBNKIHGIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHFBNKIHGIH* Clone()
		{
			return ((::AHFBNKIHGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JBOBHIPHGPB* BGEMDHNDOBP()
		{
			return ((::JBOBHIPHGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::JBOBHIPHGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHFBNKIHGIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHFBNKIHGIH*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHFBNKIHGIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHFBNKIHGIH*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHFBNKIHGIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
