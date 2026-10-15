#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPLCPBANMD;
class PDFEPMMIKDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COPLCPBANMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10C320)
#define COPLCPBANMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10C610)
#define COPLCPBANMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10BE30)
#define COPLCPBANMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10BDA0)
#define COPLCPBANMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10BD60)
#define COPLCPBANMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10BFF0)
#define COPLCPBANMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10BE90)
#define COPLCPBANMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10C120)
#define COPLCPBANMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10BD20)
#define COPLCPBANMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10C450)
#define COPLCPBANMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10C3B0)
#define COPLCPBANMD_MOFFLKMBGAE_OFFSET UNITYSDK_OFFSET(0x1E10BE70)
#define COPLCPBANMD_OCADIIIBEGK_OFFSET UNITYSDK_OFFSET(0x1E10BE80)
#define COPLCPBANMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10BD50)
#define COPLCPBANMD_PDJHNLCGKBA_OFFSET UNITYSDK_OFFSET(0x1E10BE60)
#define COPLCPBANMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10C190)
#define COPLCPBANMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10C1F0)

inline static constexpr unsigned int COPLCPBANMD_TypeDefinitionIndex = 31550;

	class COPLCPBANMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>* IJNPHIPLHKJ; // 0x18
		::System::Boolean LNBPIGDCOAG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::COPLCPBANMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COPLCPBANMD*>**)UnitySDK::FromName("", "COPLCPBANMD")->GetStaticField(0x1E9E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::PDFEPMMIKDF*>** StaticGet_OKPKIJKMGOF()
		{
			return (::Google::Protobuf::FieldCodec_1<::PDFEPMMIKDF*>**)UnitySDK::FromName("", "COPLCPBANMD")->GetStaticField(0x1E9E8);
		}

		// static const ::System::Object HELLCIHJGIM; // 0x0
		// static const ::System::Object JGJGNPMEGDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COPLCPBANMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COPLCPBANMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COPLCPBANMD*>*(*)())((::PBYTE)hIl2Cpp + COPLCPBANMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COPLCPBANMD* Clone()
		{
			return ((::COPLCPBANMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CLONE_OFFSET))(this);
		}

		::System::Boolean PDJHNLCGKBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_PDJHNLCGKBA_OFFSET))(this);
		}

		::System::Void MOFFLKMBGAE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COPLCPBANMD_MOFFLKMBGAE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>* OCADIIIBEGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_OCADIIIBEGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COPLCPBANMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COPLCPBANMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COPLCPBANMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COPLCPBANMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
