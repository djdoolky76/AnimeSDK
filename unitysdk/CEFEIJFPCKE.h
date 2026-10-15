#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEFEIJFPCKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEFEIJFPCKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0924B0)
#define CEFEIJFPCKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E092810)
#define CEFEIJFPCKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E091FA0)
#define CEFEIJFPCKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E091F10)
#define CEFEIJFPCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E091EC0)
#define CEFEIJFPCKE_ECGLOKHJECI_OFFSET UNITYSDK_OFFSET(0x1E092000)
#define CEFEIJFPCKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E092150)
#define CEFEIJFPCKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E092020)
#define CEFEIJFPCKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E092240)
#define CEFEIJFPCKE_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E091FF0)
#define CEFEIJFPCKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E091E50)
#define CEFEIJFPCKE_KEFCMNNJDDM_OFFSET UNITYSDK_OFFSET(0x1E092010)
#define CEFEIJFPCKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E092630)
#define CEFEIJFPCKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0925E0)
#define CEFEIJFPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E091EB0)
#define CEFEIJFPCKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E092340)
#define CEFEIJFPCKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0923A0)

inline static constexpr unsigned int CEFEIJFPCKE_TypeDefinitionIndex = 34756;

	class CEFEIJFPCKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x18
		::System::UInt32 FFEICCANBDA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEFEIJFPCKE")->GetStaticField(0x107D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CEFEIJFPCKE")->GetStaticField(0x107D8);
		}

		// static const ::System::Object GEJEJNNMGGP; // 0x0
		// static const ::System::Object FIEKKDGLMJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEFEIJFPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEFEIJFPCKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEFEIJFPCKE* Clone()
		{
			return ((::CEFEIJFPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_HONGLJECAAC_OFFSET))(this);
		}

		::System::UInt32 ECGLOKHJECI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_ECGLOKHJECI_OFFSET))(this);
		}

		::System::Void KEFCMNNJDDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_KEFCMNNJDDM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEFEIJFPCKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEFEIJFPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
