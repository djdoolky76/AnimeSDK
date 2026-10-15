#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHLGKKEIIEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHLGKKEIIEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E247C90)
#define AHLGKKEIIEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E247F60)
#define AHLGKKEIIEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E247890)
#define AHLGKKEIIEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E247860)
#define AHLGKKEIIEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E247850)
#define AHLGKKEIIEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E247A50)
#define AHLGKKEIIEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E247940)
#define AHLGKKEIIEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E247B20)
#define AHLGKKEIIEC_HKFDABMCMLO_OFFSET UNITYSDK_OFFSET(0x1E247930)
#define AHLGKKEIIEC_IIKLOMKIKCB_OFFSET UNITYSDK_OFFSET(0x1E247910)
#define AHLGKKEIIEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2477E0)
#define AHLGKKEIIEC_LGMFLDGHGDP_OFFSET UNITYSDK_OFFSET(0x1E247920)
#define AHLGKKEIIEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E247DE0)
#define AHLGKKEIIEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E247DA0)
#define AHLGKKEIIEC_MIHKIHAFJMF_OFFSET UNITYSDK_OFFSET(0x1E247900)
#define AHLGKKEIIEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E247840)
#define AHLGKKEIIEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E247B50)
#define AHLGKKEIIEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E247BB0)

inline static constexpr unsigned int AHLGKKEIIEC_TypeDefinitionIndex = 33421;

	class AHLGKKEIIEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FDBNELCHBJA; // 0x18
		::System::UInt32 EIJPIIHHHIF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AHLGKKEIIEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHLGKKEIIEC*>**)UnitySDK::FromName("", "AHLGKKEIIEC")->GetStaticField(0x3A550);
		}

		// static const ::System::Object MNKNMDHHCGL; // 0x0
		// static const ::System::Object PKICBBILEIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHLGKKEIIEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHLGKKEIIEC*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLGKKEIIEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHLGKKEIIEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHLGKKEIIEC*>*(*)())((::PBYTE)hIl2Cpp + AHLGKKEIIEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHLGKKEIIEC* Clone()
		{
			return ((::AHLGKKEIIEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MIHKIHAFJMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_MIHKIHAFJMF_OFFSET))(this);
		}

		::System::Void IIKLOMKIKCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_IIKLOMKIKCB_OFFSET))(this, a1);
		}

		::System::UInt32 LGMFLDGHGDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_LGMFLDGHGDP_OFFSET))(this);
		}

		::System::Void HKFDABMCMLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_HKFDABMCMLO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHLGKKEIIEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHLGKKEIIEC*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHLGKKEIIEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHLGKKEIIEC*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHLGKKEIIEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
