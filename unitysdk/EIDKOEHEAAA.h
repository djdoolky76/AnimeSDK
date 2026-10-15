#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEFFFLGJAEM;
class EIDKOEHEAAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIDKOEHEAAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27A380)
#define EIDKOEHEAAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27A720)
#define EIDKOEHEAAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E279EE0)
#define EIDKOEHEAAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E279E20)
#define EIDKOEHEAAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E279DD0)
#define EIDKOEHEAAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27A090)
#define EIDKOEHEAAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E279F40)
#define EIDKOEHEAAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E279F30)
#define EIDKOEHEAAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27A1B0)
#define EIDKOEHEAAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E279D90)
#define EIDKOEHEAAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27A550)
#define EIDKOEHEAAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27A4B0)
#define EIDKOEHEAAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E279F20)
#define EIDKOEHEAAA_OKMMHHNNAJJ_OFFSET UNITYSDK_OFFSET(0x1E279F10)
#define EIDKOEHEAAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E279DC0)
#define EIDKOEHEAAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27A220)
#define EIDKOEHEAAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27A280)

inline static constexpr unsigned int EIDKOEHEAAA_TypeDefinitionIndex = 34911;

	class EIDKOEHEAAA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>* KJOEIBPNOFC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EIDKOEHEAAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIDKOEHEAAA*>**)UnitySDK::FromName("", "EIDKOEHEAAA")->GetStaticField(0x4A980);
		}

		static ::Google::Protobuf::FieldCodec_1<::DEFFFLGJAEM*>** StaticGet_CEPDBGEJOFK()
		{
			return (::Google::Protobuf::FieldCodec_1<::DEFFFLGJAEM*>**)UnitySDK::FromName("", "EIDKOEHEAAA")->GetStaticField(0x4A988);
		}

		// static const ::System::Object MFHLIGPKOJI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIDKOEHEAAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EIDKOEHEAAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EIDKOEHEAAA*>*(*)())((::PBYTE)hIl2Cpp + EIDKOEHEAAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIDKOEHEAAA* Clone()
		{
			return ((::EIDKOEHEAAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>* OKMMHHNNAJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_OKMMHHNNAJJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIDKOEHEAAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIDKOEHEAAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
