#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLJCCLIOCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GachaCeilingAvatar; }
namespace System { class Object; }
namespace System { class String; }

#define FNLJCCLIOCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F33B0)
#define FNLJCCLIOCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F3750)
#define FNLJCCLIOCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F2E30)
#define FNLJCCLIOCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F2D90)
#define FNLJCCLIOCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2D50)
#define FNLJCCLIOCM_DJIJFGPGING_OFFSET UNITYSDK_OFFSET(0x1E3F2E60)
#define FNLJCCLIOCM_ECGMOCFCKCE_OFFSET UNITYSDK_OFFSET(0x1E3F2E80)
#define FNLJCCLIOCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F3010)
#define FNLJCCLIOCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F2EB0)
#define FNLJCCLIOCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F3150)
#define FNLJCCLIOCM_HLFNAMKGBDH_OFFSET UNITYSDK_OFFSET(0x1E3F2E90)
#define FNLJCCLIOCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F2D10)
#define FNLJCCLIOCM_LBKJCMFHILD_OFFSET UNITYSDK_OFFSET(0x1E3F2E70)
#define FNLJCCLIOCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F3570)
#define FNLJCCLIOCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F34C0)
#define FNLJCCLIOCM_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E3F2EA0)
#define FNLJCCLIOCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2D40)
#define FNLJCCLIOCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F31C0)
#define FNLJCCLIOCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F3220)

	class FNLJCCLIOCM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean FINIBLCFHCF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ELNGMPEPCGP; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FNLJCCLIOCM")->GetStaticField(0x65770);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FNLJCCLIOCM")->GetStaticField(0x65778);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FNLJCCLIOCM_JJGHOBBFNJD_OFFSET))();
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
