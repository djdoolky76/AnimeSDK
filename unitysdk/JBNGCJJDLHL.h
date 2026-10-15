#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJHPILBBHDI;
class JBNGCJJDLHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBNGCJJDLHL_AOFFLJKCECC_OFFSET UNITYSDK_OFFSET(0x1E6FB330)
#define JBNGCJJDLHL_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1E6FB320)
#define JBNGCJJDLHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FB780)
#define JBNGCJJDLHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FBBE0)
#define JBNGCJJDLHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FB2A0)
#define JBNGCJJDLHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FB200)
#define JBNGCJJDLHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FB1C0)
#define JBNGCJJDLHL_DECPJKOFDHI_OFFSET UNITYSDK_OFFSET(0x1E6FB2D0)
#define JBNGCJJDLHL_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1E6FB300)
#define JBNGCJJDLHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FB370)
#define JBNGCJJDLHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FB340)
#define JBNGCJJDLHL_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1E6FB2F0)
#define JBNGCJJDLHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FB4B0)
#define JBNGCJJDLHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FB180)
#define JBNGCJJDLHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FBAF0)
#define JBNGCJJDLHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FBA30)
#define JBNGCJJDLHL_MNDMJHJODHI_OFFSET UNITYSDK_OFFSET(0x1E6FB2E0)
#define JBNGCJJDLHL_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1E6FB310)
#define JBNGCJJDLHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FB1B0)
#define JBNGCJJDLHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FB550)
#define JBNGCJJDLHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FB5B0)

inline static constexpr unsigned int JBNGCJJDLHL_TypeDefinitionIndex = 32438;

	class JBNGCJJDLHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IJHPILBBHDI*>* JAHFPKANDHM; // 0x18
		::System::Int64 DPNKODHICIJ; // 0x20
		::System::UInt32 CGMNHPAAIHN; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 MFHNPAODGGN; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JBNGCJJDLHL")->GetStaticField(0x5D490);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CPODNPDINOG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JBNGCJJDLHL")->GetStaticField(0x5D498);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JBNGCJJDLHL_JJGHOBBFNJD_OFFSET))();
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
