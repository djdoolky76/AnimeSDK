#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCOFKOEJGGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCOFKOEJGGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CF460)
#define MCOFKOEJGGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CF790)
#define MCOFKOEJGGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CEF60)
#define MCOFKOEJGGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CEED0)
#define MCOFKOEJGGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CEE80)
#define MCOFKOEJGGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CF110)
#define MCOFKOEJGGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CEFE0)
#define MCOFKOEJGGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CF200)
#define MCOFKOEJGGL_GPONAJEBOHL_OFFSET UNITYSDK_OFFSET(0x1E9CEFC0)
#define MCOFKOEJGGL_HHJHLOKNJPF_OFFSET UNITYSDK_OFFSET(0x1E9CEFD0)
#define MCOFKOEJGGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CEE10)
#define MCOFKOEJGGL_LDHFANFCLJK_OFFSET UNITYSDK_OFFSET(0x1E9CEFB0)
#define MCOFKOEJGGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CF5C0)
#define MCOFKOEJGGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CF570)
#define MCOFKOEJGGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CEE70)
#define MCOFKOEJGGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CF300)
#define MCOFKOEJGGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CF360)

inline static constexpr unsigned int MCOFKOEJGGL_TypeDefinitionIndex = 25158;

	class MCOFKOEJGGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPHICPLCOAN; // 0x18
		::System::UInt32 BONKLGNIGFL; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KGCDJKKEJMK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MCOFKOEJGGL")->GetStaticField(0x23760);
		}

		static ::Google::Protobuf::MessageParser_1<::MCOFKOEJGGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCOFKOEJGGL*>**)UnitySDK::FromName("", "MCOFKOEJGGL")->GetStaticField(0x23768);
		}

		// static const ::System::Object KICJBIHBGON; // 0x0
		// static const ::System::Object AKCNNMGKHFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCOFKOEJGGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCOFKOEJGGL*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCOFKOEJGGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCOFKOEJGGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCOFKOEJGGL*>*(*)())((::PBYTE)hIl2Cpp + MCOFKOEJGGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCOFKOEJGGL* Clone()
		{
			return ((::MCOFKOEJGGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 LDHFANFCLJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_LDHFANFCLJK_OFFSET))(this);
		}

		::System::Void GPONAJEBOHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_GPONAJEBOHL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHJHLOKNJPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_HHJHLOKNJPF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCOFKOEJGGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCOFKOEJGGL*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCOFKOEJGGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCOFKOEJGGL*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCOFKOEJGGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
