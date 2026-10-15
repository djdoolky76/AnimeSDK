#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHNMJPLALEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHNMJPLALEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E09EAC0)
#define CHNMJPLALEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09EDE0)
#define CHNMJPLALEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09E700)
#define CHNMJPLALEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E09E6C0)
#define CHNMJPLALEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09E6B0)
#define CHNMJPLALEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E09E870)
#define CHNMJPLALEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E09E790)
#define CHNMJPLALEC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E09E780)
#define CHNMJPLALEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E09E940)
#define CHNMJPLALEC_HBMDDNLCOPK_OFFSET UNITYSDK_OFFSET(0x1E09E750)
#define CHNMJPLALEC_IGEIPOHDFIH_OFFSET UNITYSDK_OFFSET(0x1E09E760)
#define CHNMJPLALEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E09E670)
#define CHNMJPLALEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E09EC60)
#define CHNMJPLALEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E09EC20)
#define CHNMJPLALEC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E09E770)
#define CHNMJPLALEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E09E6A0)
#define CHNMJPLALEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E09E980)
#define CHNMJPLALEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E09E9E0)

inline static constexpr unsigned int CHNMJPLALEC_TypeDefinitionIndex = 26625;

	class CHNMJPLALEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 ICJLCENOPKP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CHNMJPLALEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHNMJPLALEC*>**)UnitySDK::FromName("", "CHNMJPLALEC")->GetStaticField(0x15FF0);
		}

		// static const ::System::Object KIPBCONBHCJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHNMJPLALEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHNMJPLALEC*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNMJPLALEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHNMJPLALEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHNMJPLALEC*>*(*)())((::PBYTE)hIl2Cpp + CHNMJPLALEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHNMJPLALEC* Clone()
		{
			return ((::CHNMJPLALEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_CLONE_OFFSET))(this);
		}

		::System::UInt64 HBMDDNLCOPK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_HBMDDNLCOPK_OFFSET))(this);
		}

		::System::Void IGEIPOHDFIH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CHNMJPLALEC_IGEIPOHDFIH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHNMJPLALEC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHNMJPLALEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHNMJPLALEC*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHNMJPLALEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHNMJPLALEC*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHNMJPLALEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
