#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJOCEMPFBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDJOCEMPFBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F809920)
#define LDJOCEMPFBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F809BF0)
#define LDJOCEMPFBJ_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1F8095A0)
#define LDJOCEMPFBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F809520)
#define LDJOCEMPFBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8094F0)
#define LDJOCEMPFBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8094E0)
#define LDJOCEMPFBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8096E0)
#define LDJOCEMPFBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8095D0)
#define LDJOCEMPFBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8097B0)
#define LDJOCEMPFBJ_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1F8095B0)
#define LDJOCEMPFBJ_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1F809590)
#define LDJOCEMPFBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F809470)
#define LDJOCEMPFBJ_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1F8095C0)
#define LDJOCEMPFBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F809A70)
#define LDJOCEMPFBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F809A30)
#define LDJOCEMPFBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8094D0)
#define LDJOCEMPFBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8097E0)
#define LDJOCEMPFBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F809840)

inline static constexpr unsigned int LDJOCEMPFBJ_TypeDefinitionIndex = 30620;

	class LDJOCEMPFBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 OGCMNCBOEJG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LDJOCEMPFBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDJOCEMPFBJ*>**)UnitySDK::FromName("", "LDJOCEMPFBJ")->GetStaticField(0x2D570);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDJOCEMPFBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJOCEMPFBJ*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDJOCEMPFBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDJOCEMPFBJ*>*(*)())((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDJOCEMPFBJ* Clone()
		{
			return ((::LDJOCEMPFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDJOCEMPFBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDJOCEMPFBJ*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDJOCEMPFBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJOCEMPFBJ*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDJOCEMPFBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
