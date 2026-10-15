#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
class ALBLEFHHJIC;
class KCOEJJKGNIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCOEJJKGNIG_AFFFMINNBPK_OFFSET UNITYSDK_OFFSET(0x1E7CE6A0)
#define KCOEJJKGNIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CEB70)
#define KCOEJJKGNIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CEF20)
#define KCOEJJKGNIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7CE640)
#define KCOEJJKGNIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7CE590)
#define KCOEJJKGNIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE4D0)
#define KCOEJJKGNIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7CE720)
#define KCOEJJKGNIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7CE6C0)
#define KCOEJJKGNIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7CE890)
#define KCOEJJKGNIG_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E7CE690)
#define KCOEJJKGNIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7CE460)
#define KCOEJJKGNIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7CED90)
#define KCOEJJKGNIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CEC80)
#define KCOEJJKGNIG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E7CE6B0)
#define KCOEJJKGNIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE4C0)
#define KCOEJJKGNIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CEA00)
#define KCOEJJKGNIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CEA60)

inline static constexpr unsigned int KCOEJJKGNIG_TypeDefinitionIndex = 32684;

	class KCOEJJKGNIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>* JLFDMJMJDND; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::ALBLEFHHJIC*>* CBFGBDBJHID; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDLFCGELGAK; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KCOEJJKGNIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCOEJJKGNIG*>**)UnitySDK::FromName("", "KCOEJJKGNIG")->GetStaticField(0xFBC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ABOFJEIMLLJ*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::ABOFJEIMLLJ*>**)UnitySDK::FromName("", "KCOEJJKGNIG")->GetStaticField(0xFBC8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GFDIPJMHIPE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KCOEJJKGNIG")->GetStaticField(0xFBD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ALBLEFHHJIC*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::ALBLEFHHJIC*>**)UnitySDK::FromName("", "KCOEJJKGNIG")->GetStaticField(0xFBD8);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object DDKAMGMEGCN; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCOEJJKGNIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCOEJJKGNIG*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCOEJJKGNIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCOEJJKGNIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCOEJJKGNIG*>*(*)())((::PBYTE)hIl2Cpp + KCOEJJKGNIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCOEJJKGNIG* Clone()
		{
			return ((::KCOEJJKGNIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_JHEFPOGNBND_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFFFMINNBPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_AFFFMINNBPK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ALBLEFHHJIC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ALBLEFHHJIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCOEJJKGNIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCOEJJKGNIG*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCOEJJKGNIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCOEJJKGNIG*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCOEJJKGNIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
