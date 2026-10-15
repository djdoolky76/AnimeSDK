#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLFLONHKCF;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGLFLONHKCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4EB50)
#define BGLFLONHKCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4EEE0)
#define BGLFLONHKCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4E510)
#define BGLFLONHKCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4E4B0)
#define BGLFLONHKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E4A0)
#define BGLFLONHKCF_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1EA4E580)
#define BGLFLONHKCF_EGCLOPOJINE_OFFSET UNITYSDK_OFFSET(0x1EA4E5C0)
#define BGLFLONHKCF_EJOKOLHBKGC_OFFSET UNITYSDK_OFFSET(0x1EA4E5B0)
#define BGLFLONHKCF_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1EA4E590)
#define BGLFLONHKCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4E770)
#define BGLFLONHKCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4E5E0)
#define BGLFLONHKCF_FEBLKDMIGII_OFFSET UNITYSDK_OFFSET(0x1EA4E5D0)
#define BGLFLONHKCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4E900)
#define BGLFLONHKCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA4E460)
#define BGLFLONHKCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4ED30)
#define BGLFLONHKCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4ECB0)
#define BGLFLONHKCF_OGIMILOAOIC_OFFSET UNITYSDK_OFFSET(0x1EA4E5A0)
#define BGLFLONHKCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E490)
#define BGLFLONHKCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4E9B0)
#define BGLFLONHKCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4EA10)

inline static constexpr unsigned int BGLFLONHKCF_TypeDefinitionIndex = 30505;

	class BGLFLONHKCF : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BIIPLBKCBCB; // 0x20
		::System::UInt32 CCPNMCHBGFA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BGLFLONHKCF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGLFLONHKCF*>**)UnitySDK::FromName("", "BGLFLONHKCF")->GetStaticField(0x553F0);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object HKBJJPGHGKC; // 0x0
		// static const ::System::Object HFJINAGIMMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGLFLONHKCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLFLONHKCF*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLFLONHKCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGLFLONHKCF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGLFLONHKCF*>*(*)())((::PBYTE)hIl2Cpp + BGLFLONHKCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGLFLONHKCF* Clone()
		{
			return ((::BGLFLONHKCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 OGIMILOAOIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_OGIMILOAOIC_OFFSET))(this);
		}

		::System::Void EJOKOLHBKGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLFLONHKCF_EJOKOLHBKGC_OFFSET))(this, a1);
		}

		::System::UInt32 EGCLOPOJINE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_EGCLOPOJINE_OFFSET))(this);
		}

		::System::Void FEBLKDMIGII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLFLONHKCF_FEBLKDMIGII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGLFLONHKCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGLFLONHKCF*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLFLONHKCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGLFLONHKCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLFLONHKCF*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGLFLONHKCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
