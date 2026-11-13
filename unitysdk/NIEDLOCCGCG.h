#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNHCHGFEJOI;
class NIEDLOCCGCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIEDLOCCGCG_BEFOLJFFJGA_OFFSET UNITYSDK_OFFSET(0x1EABF0A0)
#define NIEDLOCCGCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EABF500)
#define NIEDLOCCGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABF890)
#define NIEDLOCCGCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EABF050)
#define NIEDLOCCGCG_CPDNECFJAKA_OFFSET UNITYSDK_OFFSET(0x1EABF090)
#define NIEDLOCCGCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EABEFC0)
#define NIEDLOCCGCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABEF80)
#define NIEDLOCCGCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EABF200)
#define NIEDLOCCGCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EABF0B0)
#define NIEDLOCCGCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EABF320)
#define NIEDLOCCGCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EABEF40)
#define NIEDLOCCGCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EABF6D0)
#define NIEDLOCCGCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EABF630)
#define NIEDLOCCGCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EABEF70)
#define NIEDLOCCGCG_PLNNDONHBKP_OFFSET UNITYSDK_OFFSET(0x1EABF080)
#define NIEDLOCCGCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABF390)
#define NIEDLOCCGCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EABF3F0)

inline static constexpr unsigned int NIEDLOCCGCG_TypeDefinitionIndex = 31675;

	class NIEDLOCCGCG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>* HKNNOLGHDBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IGPHPBNBOIB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NIEDLOCCGCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIEDLOCCGCG*>**)UnitySDK::FromName("", "NIEDLOCCGCG")->GetStaticField(0x62530);
		}

		static ::Google::Protobuf::FieldCodec_1<::LNHCHGFEJOI*>** StaticGet_MMNPIAPNKAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::LNHCHGFEJOI*>**)UnitySDK::FromName("", "NIEDLOCCGCG")->GetStaticField(0x62538);
		}

		// static const ::System::Object MFFLBOMHLAJ; // 0x0
		// static const ::System::Object JMAHADJMACO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIEDLOCCGCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEDLOCCGCG*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIEDLOCCGCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIEDLOCCGCG*>*(*)())((::PBYTE)hIl2Cpp + NIEDLOCCGCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIEDLOCCGCG* Clone()
		{
			return ((::NIEDLOCCGCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>* PLNNDONHBKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_PLNNDONHBKP_OFFSET))(this);
		}

		::System::UInt32 CPDNECFJAKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CPDNECFJAKA_OFFSET))(this);
		}

		::System::Void BEFOLJFFJGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_BEFOLJFFJGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIEDLOCCGCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIEDLOCCGCG*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIEDLOCCGCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEDLOCCGCG*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIEDLOCCGCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
