#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJHPILBBHDI;
class JBNGCJJDLHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBNGCJJDLHL_AOFFLJKCECC_OFFSET UNITYSDK_OFFSET(0x1E6CDD00)
#define JBNGCJJDLHL_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1E6CDCF0)
#define JBNGCJJDLHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6CE150)
#define JBNGCJJDLHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CE5B0)
#define JBNGCJJDLHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6CDC70)
#define JBNGCJJDLHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6CDBD0)
#define JBNGCJJDLHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CDB90)
#define JBNGCJJDLHL_DECPJKOFDHI_OFFSET UNITYSDK_OFFSET(0x1E6CDCA0)
#define JBNGCJJDLHL_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1E6CDCD0)
#define JBNGCJJDLHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6CDD40)
#define JBNGCJJDLHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6CDD10)
#define JBNGCJJDLHL_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1E6CDCC0)
#define JBNGCJJDLHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6CDE80)
#define JBNGCJJDLHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6CDB50)
#define JBNGCJJDLHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6CE4C0)
#define JBNGCJJDLHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6CE400)
#define JBNGCJJDLHL_MNDMJHJODHI_OFFSET UNITYSDK_OFFSET(0x1E6CDCB0)
#define JBNGCJJDLHL_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1E6CDCE0)
#define JBNGCJJDLHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6CDB80)
#define JBNGCJJDLHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6CDF20)
#define JBNGCJJDLHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6CDF80)

inline static constexpr unsigned int JBNGCJJDLHL_TypeDefinitionIndex = 32438;

	class JBNGCJJDLHL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IJHPILBBHDI*>* JAHFPKANDHM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int64 MFHNPAODGGN; // 0x20
		::System::UInt32 CGMNHPAAIHN; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 DPNKODHICIJ; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::IJHPILBBHDI*>** StaticGet_CPODNPDINOG()
		{
			return (::Google::Protobuf::FieldCodec_1<::IJHPILBBHDI*>**)UnitySDK::FromName("", "JBNGCJJDLHL")->GetStaticField(0x59BB0);
		}

		static ::Google::Protobuf::MessageParser_1<::JBNGCJJDLHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBNGCJJDLHL*>**)UnitySDK::FromName("", "JBNGCJJDLHL")->GetStaticField(0x59BB8);
		}

		// static const ::System::Object JNCOAIKFMLF; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object ICGAGDOBKAM; // 0x0
		// static const ::System::Object IPHANIPBLGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBNGCJJDLHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBNGCJJDLHL*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBNGCJJDLHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBNGCJJDLHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBNGCJJDLHL*>*(*)())((::PBYTE)hIl2Cpp + JBNGCJJDLHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBNGCJJDLHL* Clone()
		{
			return ((::JBNGCJJDLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 DECPJKOFDHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_DECPJKOFDHI_OFFSET))(this);
		}

		::System::Void MNDMJHJODHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_MNDMJHJODHI_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_NEJDALLPIMG_OFFSET))(this);
		}

		::System::Void BIPGANGGAEC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_BIPGANGGAEC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IJHPILBBHDI*>* AOFFLJKCECC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IJHPILBBHDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_AOFFLJKCECC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBNGCJJDLHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBNGCJJDLHL*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBNGCJJDLHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBNGCJJDLHL*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBNGCJJDLHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
