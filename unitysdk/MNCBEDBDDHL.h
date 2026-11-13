#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKECCJELLI;
class KHADHDLCNOI;
class MNCBEDBDDHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNCBEDBDDHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F96B500)
#define MNCBEDBDDHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F96B850)
#define MNCBEDBDDHL_CKEKMNFFBOC_OFFSET UNITYSDK_OFFSET(0x1F96B0E0)
#define MNCBEDBDDHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F95EBE0)
#define MNCBEDBDDHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F96AFB0)
#define MNCBEDBDDHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F961B00)
#define MNCBEDBDDHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F96B120)
#define MNCBEDBDDHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F96B0F0)
#define MNCBEDBDDHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F95F8F0)
#define MNCBEDBDDHL_IFHOJPAPNKH_OFFSET UNITYSDK_OFFSET(0x1F96B0B0)
#define MNCBEDBDDHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F96AF70)
#define MNCBEDBDDHL_LCHNNPONADI_OFFSET UNITYSDK_OFFSET(0x1F96B0C0)
#define MNCBEDBDDHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F96B600)
#define MNCBEDBDDHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F961B40)
#define MNCBEDBDDHL_MJHNKGJCJHP_OFFSET UNITYSDK_OFFSET(0x1F96B0A0)
#define MNCBEDBDDHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F96AFA0)
#define MNCBEDBDDHL_PHOHOEKEIDE_OFFSET UNITYSDK_OFFSET(0x1F96B0D0)
#define MNCBEDBDDHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F96B300)
#define MNCBEDBDDHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F96B360)

inline static constexpr unsigned int MNCBEDBDDHL_TypeDefinitionIndex = 25844;

	class MNCBEDBDDHL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AAKECCJELLI*>* KODDFEIHCDN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KHADHDLCNOI* IPDJEFAFDNA; // 0x20
		::System::Boolean JADCILGHJKN; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::AAKECCJELLI*>** StaticGet_FLKLPNILEFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::AAKECCJELLI*>**)UnitySDK::FromName("", "MNCBEDBDDHL")->GetStaticField(0x4FF70);
		}

		static ::Google::Protobuf::MessageParser_1<::MNCBEDBDDHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNCBEDBDDHL*>**)UnitySDK::FromName("", "MNCBEDBDDHL")->GetStaticField(0x4FF78);
		}

		// static const ::System::Object FJFADMPEDGH; // 0x0
		// static const ::System::Object ILEPHLBOHPG; // 0x0
		// static const ::System::Object DJPCFBHOMJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNCBEDBDDHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNCBEDBDDHL*>*(*)())((::PBYTE)hIl2Cpp + MNCBEDBDDHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNCBEDBDDHL* Clone()
		{
			return ((::MNCBEDBDDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CLONE_OFFSET))(this);
		}

		::KHADHDLCNOI* MJHNKGJCJHP()
		{
			return ((::KHADHDLCNOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_MJHNKGJCJHP_OFFSET))(this);
		}

		::System::Void IFHOJPAPNKH(::KHADHDLCNOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHADHDLCNOI*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_IFHOJPAPNKH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AAKECCJELLI*>* LCHNNPONADI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AAKECCJELLI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_LCHNNPONADI_OFFSET))(this);
		}

		::System::Boolean PHOHOEKEIDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_PHOHOEKEIDE_OFFSET))(this);
		}

		::System::Void CKEKMNFFBOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CKEKMNFFBOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNCBEDBDDHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNCBEDBDDHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
