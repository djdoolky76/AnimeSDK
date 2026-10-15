#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
class KDODFHMDAJI;
class LEHBIBDGEHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFEOGNAMHCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5381B0)
#define HFEOGNAMHCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5385E0)
#define HFEOGNAMHCG_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0x1E537CF0)
#define HFEOGNAMHCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E537CC0)
#define HFEOGNAMHCG_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1E537D20)
#define HFEOGNAMHCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E537BF0)
#define HFEOGNAMHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E537BB0)
#define HFEOGNAMHCG_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1E537D10)
#define HFEOGNAMHCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E537D70)
#define HFEOGNAMHCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E537D40)
#define HFEOGNAMHCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E537F50)
#define HFEOGNAMHCG_JIDJENAPIPD_OFFSET UNITYSDK_OFFSET(0x1E537D30)
#define HFEOGNAMHCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E537B70)
#define HFEOGNAMHCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5383F0)
#define HFEOGNAMHCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E538300)
#define HFEOGNAMHCG_OGGAGMMHMPG_OFFSET UNITYSDK_OFFSET(0x1E537D00)
#define HFEOGNAMHCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E537BA0)
#define HFEOGNAMHCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E537FE0)
#define HFEOGNAMHCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E538040)

inline static constexpr unsigned int HFEOGNAMHCG_TypeDefinitionIndex = 33278;

	class HFEOGNAMHCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LEHBIBDGEHG* JPGENBFNEMI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KDODFHMDAJI*>* LBJFDJMNDFD; // 0x20
		::System::UInt32 GLFLHLCNOOH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::KDODFHMDAJI*>** StaticGet_EBMPFDEOCME()
		{
			return (::Google::Protobuf::FieldCodec_1<::KDODFHMDAJI*>**)UnitySDK::FromName("", "HFEOGNAMHCG")->GetStaticField(0x1A1B0);
		}

		static ::Google::Protobuf::MessageParser_1<::HFEOGNAMHCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFEOGNAMHCG*>**)UnitySDK::FromName("", "HFEOGNAMHCG")->GetStaticField(0x1A1B8);
		}

		// static const ::System::Object CFPNOGGDNFL; // 0x0
		// static const ::System::Object OPJGBPJDMKH; // 0x0
		// static const ::System::Object FOOPLJCKJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFEOGNAMHCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFEOGNAMHCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFEOGNAMHCG*>*(*)())((::PBYTE)hIl2Cpp + HFEOGNAMHCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFEOGNAMHCG* Clone()
		{
			return ((::HFEOGNAMHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CLONE_OFFSET))(this);
		}

		::LEHBIBDGEHG* CEFPFNBOAPL()
		{
			return ((::LEHBIBDGEHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CEFPFNBOAPL_OFFSET))(this);
		}

		::System::Void OGGAGMMHMPG(::LEHBIBDGEHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEHBIBDGEHG*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_OGGAGMMHMPG_OFFSET))(this, a1);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KDODFHMDAJI*>* JIDJENAPIPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KDODFHMDAJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_JIDJENAPIPD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFEOGNAMHCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFEOGNAMHCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFEOGNAMHCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
