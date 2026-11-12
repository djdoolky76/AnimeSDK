#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLPLCICDOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLLPLCICDOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3F2A70)
#define CLLPLCICDOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3F2D90)
#define CLLPLCICDOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3F26B0)
#define CLLPLCICDOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3F2670)
#define CLLPLCICDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F2660)
#define CLLPLCICDOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3F2820)
#define CLLPLCICDOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3F2740)
#define CLLPLCICDOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3F28F0)
#define CLLPLCICDOB_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1F3F2720)
#define CLLPLCICDOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3F2620)
#define CLLPLCICDOB_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1F3F2730)
#define CLLPLCICDOB_MDKCCLPMCDA_OFFSET UNITYSDK_OFFSET(0x1F3F2710)
#define CLLPLCICDOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3F2C10)
#define CLLPLCICDOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3F2BD0)
#define CLLPLCICDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3F2650)
#define CLLPLCICDOB_PPLNBPDMLFF_OFFSET UNITYSDK_OFFSET(0x1F3F2700)
#define CLLPLCICDOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3F2930)
#define CLLPLCICDOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3F2990)

inline static constexpr unsigned int CLLPLCICDOB_TypeDefinitionIndex = 32368;

	class CLLPLCICDOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 AHLHCMHEEKG; // 0x18
		::System::UInt32 FLFEKHCLHCE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CLLPLCICDOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLLPLCICDOB*>**)UnitySDK::FromName("", "CLLPLCICDOB")->GetStaticField(0x18580);
		}

		// static const ::System::Object AHDGKPLFKKF; // 0x0
		// static const ::System::Object CPHNGFPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLLPLCICDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLLPLCICDOB*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLPLCICDOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLLPLCICDOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLLPLCICDOB*>*(*)())((::PBYTE)hIl2Cpp + CLLPLCICDOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLLPLCICDOB* Clone()
		{
			return ((::CLLPLCICDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_CLONE_OFFSET))(this);
		}

		::System::UInt64 PPLNBPDMLFF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_PPLNBPDMLFF_OFFSET))(this);
		}

		::System::Void MDKCCLPMCDA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLLPLCICDOB_MDKCCLPMCDA_OFFSET))(this, a1);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLLPLCICDOB_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLLPLCICDOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLLPLCICDOB*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLLPLCICDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLLPLCICDOB*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLLPLCICDOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
