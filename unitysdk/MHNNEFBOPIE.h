#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
class MHNNEFBOPIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHNNEFBOPIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA62120)
#define MHNNEFBOPIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA624A0)
#define MHNNEFBOPIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA61C10)
#define MHNNEFBOPIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA61B50)
#define MHNNEFBOPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA61B00)
#define MHNNEFBOPIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA61E20)
#define MHNNEFBOPIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA61C90)
#define MHNNEFBOPIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA61F50)
#define MHNNEFBOPIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA61A90)
#define MHNNEFBOPIE_KJILKDCCLNM_OFFSET UNITYSDK_OFFSET(0x1FA61C70)
#define MHNNEFBOPIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA622D0)
#define MHNNEFBOPIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA62230)
#define MHNNEFBOPIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA61AF0)
#define MHNNEFBOPIE_PGAOGGNFFNG_OFFSET UNITYSDK_OFFSET(0x1FA61C60)
#define MHNNEFBOPIE_PPMPCAGMGLI_OFFSET UNITYSDK_OFFSET(0x1FA61C80)
#define MHNNEFBOPIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA61FC0)
#define MHNNEFBOPIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA62020)

inline static constexpr unsigned int MHNNEFBOPIE_TypeDefinitionIndex = 26387;

	class MHNNEFBOPIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>* NEDMGFEPOKH; // 0x18
		::System::UInt32 LMFIGBEHMJE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JOLAHHGIFHA*>** StaticGet_HOGJAOAAPBO()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOLAHHGIFHA*>**)UnitySDK::FromName("", "MHNNEFBOPIE")->GetStaticField(0x49C60);
		}

		static ::Google::Protobuf::MessageParser_1<::MHNNEFBOPIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHNNEFBOPIE*>**)UnitySDK::FromName("", "MHNNEFBOPIE")->GetStaticField(0x49C68);
		}

		// static const ::System::Object HFNMBCJHMFM; // 0x0
		// static const ::System::Object GJEJNKBBMCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHNNEFBOPIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHNNEFBOPIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHNNEFBOPIE*>*(*)())((::PBYTE)hIl2Cpp + MHNNEFBOPIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHNNEFBOPIE* Clone()
		{
			return ((::MHNNEFBOPIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGAOGGNFFNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PGAOGGNFFNG_OFFSET))(this);
		}

		::System::Void KJILKDCCLNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_KJILKDCCLNM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>* PPMPCAGMGLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PPMPCAGMGLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHNNEFBOPIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHNNEFBOPIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
