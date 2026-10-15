#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMAHPJPGLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBMAHPJPGLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E430C60)
#define GBMAHPJPGLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E430E80)
#define GBMAHPJPGLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4308B0)
#define GBMAHPJPGLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E430880)
#define GBMAHPJPGLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E430870)
#define GBMAHPJPGLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4309E0)
#define GBMAHPJPGLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E430910)
#define GBMAHPJPGLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E430B50)
#define GBMAHPJPGLM_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E430900)
#define GBMAHPJPGLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E430830)
#define GBMAHPJPGLM_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E4308F0)
#define GBMAHPJPGLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E430D20)
#define GBMAHPJPGLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E430CF0)
#define GBMAHPJPGLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E430860)
#define GBMAHPJPGLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E430B80)
#define GBMAHPJPGLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E430BE0)

inline static constexpr unsigned int GBMAHPJPGLM_TypeDefinitionIndex = 31716;

	class GBMAHPJPGLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBMAHPJPGLM")->GetStaticField(0xDA50);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBMAHPJPGLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMAHPJPGLM*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMAHPJPGLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBMAHPJPGLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBMAHPJPGLM* Clone()
		{
			return ((::GBMAHPJPGLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBMAHPJPGLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBMAHPJPGLM*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBMAHPJPGLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMAHPJPGLM*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBMAHPJPGLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
