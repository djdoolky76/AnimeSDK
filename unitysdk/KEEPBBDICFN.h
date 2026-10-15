#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEEPBBDICFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEEPBBDICFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E809BE0)
#define KEEPBBDICFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E809EB0)
#define KEEPBBDICFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8097E0)
#define KEEPBBDICFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8097B0)
#define KEEPBBDICFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8097A0)
#define KEEPBBDICFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8099A0)
#define KEEPBBDICFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E809890)
#define KEEPBBDICFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E809A70)
#define KEEPBBDICFN_GMGMKFIMODK_OFFSET UNITYSDK_OFFSET(0x1E809870)
#define KEEPBBDICFN_IKPNNJAFCCK_OFFSET UNITYSDK_OFFSET(0x1E809850)
#define KEEPBBDICFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E809730)
#define KEEPBBDICFN_JKKPMMABINJ_OFFSET UNITYSDK_OFFSET(0x1E809860)
#define KEEPBBDICFN_KPEGDKKDLDE_OFFSET UNITYSDK_OFFSET(0x1E809880)
#define KEEPBBDICFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E809D30)
#define KEEPBBDICFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E809CF0)
#define KEEPBBDICFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E809790)
#define KEEPBBDICFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E809AA0)
#define KEEPBBDICFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E809B00)

inline static constexpr unsigned int KEEPBBDICFN_TypeDefinitionIndex = 29222;

	class KEEPBBDICFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDAHGDANMKG; // 0x18
		::System::UInt32 AIELBCHJAMN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEEPBBDICFN")->GetStaticField(0x12780);
		}

		// static const ::System::Object GCJPCOCJLKG; // 0x0
		// static const ::System::Object EOEGKEJDNBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEEPBBDICFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEEPBBDICFN*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEEPBBDICFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEEPBBDICFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEEPBBDICFN* Clone()
		{
			return ((::KEEPBBDICFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKPNNJAFCCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_IKPNNJAFCCK_OFFSET))(this);
		}

		::System::Void JKKPMMABINJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEEPBBDICFN_JKKPMMABINJ_OFFSET))(this, a1);
		}

		::System::UInt32 GMGMKFIMODK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_GMGMKFIMODK_OFFSET))(this);
		}

		::System::Void KPEGDKKDLDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEEPBBDICFN_KPEGDKKDLDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEEPBBDICFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEEPBBDICFN*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEEPBBDICFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEEPBBDICFN*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEEPBBDICFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
