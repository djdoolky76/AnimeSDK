#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKONENEGJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKONENEGJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3C1ED0)
#define CKONENEGJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C21A0)
#define CKONENEGJMM_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1F3C1B80)
#define CKONENEGJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3C1B20)
#define CKONENEGJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3C1AF0)
#define CKONENEGJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C1AE0)
#define CKONENEGJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3C1C90)
#define CKONENEGJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3C1BB0)
#define CKONENEGJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3C1D60)
#define CKONENEGJMM_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1F3C1B90)
#define CKONENEGJMM_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1F3C1B70)
#define CKONENEGJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3C1AA0)
#define CKONENEGJMM_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1F3C1BA0)
#define CKONENEGJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3C2020)
#define CKONENEGJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3C1FE0)
#define CKONENEGJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3C1AD0)
#define CKONENEGJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3C1D90)
#define CKONENEGJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3C1DF0)

inline static constexpr unsigned int CKONENEGJMM_TypeDefinitionIndex = 31976;

	class CKONENEGJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		::System::UInt32 KBBFPCGLDCN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CKONENEGJMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKONENEGJMM*>**)UnitySDK::FromName("", "CKONENEGJMM")->GetStaticField(0x150D0);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKONENEGJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKONENEGJMM*))((::PBYTE)hIl2Cpp + CKONENEGJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKONENEGJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKONENEGJMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKONENEGJMM*>*(*)())((::PBYTE)hIl2Cpp + CKONENEGJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKONENEGJMM* Clone()
		{
			return ((::CKONENEGJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKONENEGJMM_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKONENEGJMM_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKONENEGJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKONENEGJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKONENEGJMM*))((::PBYTE)hIl2Cpp + CKONENEGJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKONENEGJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKONENEGJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKONENEGJMM*))((::PBYTE)hIl2Cpp + CKONENEGJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKONENEGJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
