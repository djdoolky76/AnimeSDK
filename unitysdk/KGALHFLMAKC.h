#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class DLCJPINDIAC;
class KGALHFLMAKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGALHFLMAKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8337F0)
#define KGALHFLMAKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E833BC0)
#define KGALHFLMAKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E833340)
#define KGALHFLMAKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E833280)
#define KGALHFLMAKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E833230)
#define KGALHFLMAKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8334F0)
#define KGALHFLMAKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8333A0)
#define KGALHFLMAKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E833610)
#define KGALHFLMAKC_HNIGPKEECAE_OFFSET UNITYSDK_OFFSET(0x1E833390)
#define KGALHFLMAKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8331F0)
#define KGALHFLMAKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8339F0)
#define KGALHFLMAKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E833950)
#define KGALHFLMAKC_MPHIMCMBJGC_OFFSET UNITYSDK_OFFSET(0x1E833370)
#define KGALHFLMAKC_ODBCLGDKOFM_OFFSET UNITYSDK_OFFSET(0x1E833380)
#define KGALHFLMAKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E833220)
#define KGALHFLMAKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E833680)
#define KGALHFLMAKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8336E0)

inline static constexpr unsigned int KGALHFLMAKC_TypeDefinitionIndex = 31306;

	class KGALHFLMAKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DLCJPINDIAC*>* JIHOHBEMIID; // 0x18
		::FJPMJPEKLJL CIFEGFBGDNB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KGALHFLMAKC")->GetStaticField(0x15920);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LCOCPCGLFKF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KGALHFLMAKC")->GetStaticField(0x15928);
		}

		// static const ::System::Object HILCNCKAGFK; // 0x0
		// static const ::System::Object EPHDHCDELFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGALHFLMAKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGALHFLMAKC*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGALHFLMAKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KGALHFLMAKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGALHFLMAKC* Clone()
		{
			return ((::KGALHFLMAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DLCJPINDIAC*>* MPHIMCMBJGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DLCJPINDIAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_MPHIMCMBJGC_OFFSET))(this);
		}

		::FJPMJPEKLJL ODBCLGDKOFM()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_ODBCLGDKOFM_OFFSET))(this);
		}

		::System::Void HNIGPKEECAE(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + KGALHFLMAKC_HNIGPKEECAE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGALHFLMAKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGALHFLMAKC*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGALHFLMAKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGALHFLMAKC*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGALHFLMAKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
