#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLJCCLIOCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GachaCeilingAvatar; }
namespace System { class Object; }
namespace System { class String; }

#define FNLJCCLIOCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C5CE0)
#define FNLJCCLIOCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C6080)
#define FNLJCCLIOCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C5760)
#define FNLJCCLIOCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C56C0)
#define FNLJCCLIOCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5680)
#define FNLJCCLIOCM_DJIJFGPGING_OFFSET UNITYSDK_OFFSET(0x1E3C5790)
#define FNLJCCLIOCM_ECGMOCFCKCE_OFFSET UNITYSDK_OFFSET(0x1E3C57B0)
#define FNLJCCLIOCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C5940)
#define FNLJCCLIOCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C57E0)
#define FNLJCCLIOCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C5A80)
#define FNLJCCLIOCM_HLFNAMKGBDH_OFFSET UNITYSDK_OFFSET(0x1E3C57C0)
#define FNLJCCLIOCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C5640)
#define FNLJCCLIOCM_LBKJCMFHILD_OFFSET UNITYSDK_OFFSET(0x1E3C57A0)
#define FNLJCCLIOCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C5EA0)
#define FNLJCCLIOCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C5DF0)
#define FNLJCCLIOCM_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E3C57D0)
#define FNLJCCLIOCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5670)
#define FNLJCCLIOCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C5AF0)
#define FNLJCCLIOCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C5B50)

inline static constexpr unsigned int FNLJCCLIOCM_TypeDefinitionIndex = 29081;

	class FNLJCCLIOCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* CBFGBDBJHID; // 0x18
		::System::UInt32 ELNGMPEPCGP; // 0x20
		::System::Boolean FINIBLCFHCF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FNLJCCLIOCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNLJCCLIOCM*>**)UnitySDK::FromName("", "FNLJCCLIOCM")->GetStaticField(0x5DF00);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>**)UnitySDK::FromName("", "FNLJCCLIOCM")->GetStaticField(0x5DF08);
		}

		// static const ::System::Object EKLKIMFLMMJ; // 0x0
		// static const ::System::Object NAEKFBPAOJF; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNLJCCLIOCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLJCCLIOCM*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNLJCCLIOCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNLJCCLIOCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNLJCCLIOCM*>*(*)())((::PBYTE)hIl2Cpp + FNLJCCLIOCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNLJCCLIOCM* Clone()
		{
			return ((::FNLJCCLIOCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJIJFGPGING()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_DJIJFGPGING_OFFSET))(this);
		}

		::System::Void LBKJCMFHILD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_LBKJCMFHILD_OFFSET))(this, a1);
		}

		::System::Boolean ECGMOCFCKCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_ECGMOCFCKCE_OFFSET))(this);
		}

		::System::Void HLFNAMKGBDH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_HLFNAMKGBDH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNLJCCLIOCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNLJCCLIOCM*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNLJCCLIOCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLJCCLIOCM*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNLJCCLIOCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
