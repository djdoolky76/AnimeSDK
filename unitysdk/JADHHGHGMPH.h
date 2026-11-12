#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JADHHGHGMPH;
class LNDHKMMGBGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JADHHGHGMPH_BBCMBGMCNNL_OFFSET UNITYSDK_OFFSET(0x1F9F73C0)
#define JADHHGHGMPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9F7840)
#define JADHHGHGMPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F7B90)
#define JADHHGHGMPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9F7360)
#define JADHHGHGMPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9F72A0)
#define JADHHGHGMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F7250)
#define JADHHGHGMPH_EGACOJLGBLL_OFFSET UNITYSDK_OFFSET(0x1F9F73D0)
#define JADHHGHGMPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9F7460)
#define JADHHGHGMPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9F7400)
#define JADHHGHGMPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9F75A0)
#define JADHHGHGMPH_ICJDNLECHOE_OFFSET UNITYSDK_OFFSET(0x1F9F73F0)
#define JADHHGHGMPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9F71E0)
#define JADHHGHGMPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9F79A0)
#define JADHHGHGMPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9F78F0)
#define JADHHGHGMPH_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1F9F73B0)
#define JADHHGHGMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9F7240)
#define JADHHGHGMPH_PDLDLCHGJAD_OFFSET UNITYSDK_OFFSET(0x1F9F73E0)
#define JADHHGHGMPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9F7610)
#define JADHHGHGMPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9F7670)

inline static constexpr unsigned int JADHHGHGMPH_TypeDefinitionIndex = 29782;

	class JADHHGHGMPH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LNDHKMMGBGC*>* FDFBNBLNHLK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean CEAFPMGNHGB; // 0x20
		::System::Boolean NHAECKHJJHO; // 0x21
		static ::Google::Protobuf::MessageParser_1<::JADHHGHGMPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JADHHGHGMPH*>**)UnitySDK::FromName("", "JADHHGHGMPH")->GetStaticField(0x5A930);
		}

		static ::Google::Protobuf::FieldCodec_1<::LNDHKMMGBGC*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LNDHKMMGBGC*>**)UnitySDK::FromName("", "JADHHGHGMPH")->GetStaticField(0x5A938);
		}

		// static const ::System::Object DOADNLHHMCH; // 0x0
		// static const ::System::Object PDDPJHMBKCP; // 0x0
		// static const ::System::Object JLGADJONBAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JADHHGHGMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADHHGHGMPH*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JADHHGHGMPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JADHHGHGMPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JADHHGHGMPH*>*(*)())((::PBYTE)hIl2Cpp + JADHHGHGMPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JADHHGHGMPH* Clone()
		{
			return ((::JADHHGHGMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LNDHKMMGBGC*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LNDHKMMGBGC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean BBCMBGMCNNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_BBCMBGMCNNL_OFFSET))(this);
		}

		::System::Void EGACOJLGBLL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JADHHGHGMPH_EGACOJLGBLL_OFFSET))(this, a1);
		}

		::System::Boolean PDLDLCHGJAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_PDLDLCHGJAD_OFFSET))(this);
		}

		::System::Void ICJDNLECHOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JADHHGHGMPH_ICJDNLECHOE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JADHHGHGMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JADHHGHGMPH*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JADHHGHGMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADHHGHGMPH*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JADHHGHGMPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
