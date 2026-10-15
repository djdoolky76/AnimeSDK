#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJPAPIDKKM;
class FIJIEAHHGFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIJIEAHHGFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E398DD0)
#define FIJIEAHHGFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3990D0)
#define FIJIEAHHGFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E398900)
#define FIJIEAHHGFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E398870)
#define FIJIEAHHGFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E398830)
#define FIJIEAHHGFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E398AA0)
#define FIJIEAHHGFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E398960)
#define FIJIEAHHGFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E398BC0)
#define FIJIEAHHGFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3987F0)
#define FIJIEAHHGFK_LCHHOMMPFCN_OFFSET UNITYSDK_OFFSET(0x1E398930)
#define FIJIEAHHGFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E398F10)
#define FIJIEAHHGFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E398E70)
#define FIJIEAHHGFK_MFFNOBPDPIP_OFFSET UNITYSDK_OFFSET(0x1E398940)
#define FIJIEAHHGFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E398820)
#define FIJIEAHHGFK_PJLAFENJPNA_OFFSET UNITYSDK_OFFSET(0x1E398950)
#define FIJIEAHHGFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E398C30)
#define FIJIEAHHGFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E398C90)

inline static constexpr unsigned int FIJIEAHHGFK_TypeDefinitionIndex = 32178;

	class FIJIEAHHGFK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* GKENPDNNAKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OHCDIALNEKO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIJIEAHHGFK")->GetStaticField(0x600E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ECFIHCFFJED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FIJIEAHHGFK")->GetStaticField(0x600E8);
		}

		// static const ::System::Object HEKNKDNFIME; // 0x0
		// static const ::System::Object JLKJNOPDKDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIJIEAHHGFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIJIEAHHGFK*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJIEAHHGFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIJIEAHHGFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIJIEAHHGFK* Clone()
		{
			return ((::FIJIEAHHGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* LCHHOMMPFCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_LCHHOMMPFCN_OFFSET))(this);
		}

		::System::Boolean MFFNOBPDPIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_MFFNOBPDPIP_OFFSET))(this);
		}

		::System::Void PJLAFENJPNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_PJLAFENJPNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIJIEAHHGFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIJIEAHHGFK*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIJIEAHHGFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIJIEAHHGFK*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIJIEAHHGFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
