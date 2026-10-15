#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELKDCCIHLAB;
class LGMFKDCCDNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELKDCCIHLAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D5420)
#define ELKDCCIHLAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D57C0)
#define ELKDCCIHLAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D4F70)
#define ELKDCCIHLAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D4EB0)
#define ELKDCCIHLAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4E60)
#define ELKDCCIHLAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D5120)
#define ELKDCCIHLAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D4FD0)
#define ELKDCCIHLAB_FIKLGPLLNFI_OFFSET UNITYSDK_OFFSET(0x1E2D4FB0)
#define ELKDCCIHLAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D5240)
#define ELKDCCIHLAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D4E20)
#define ELKDCCIHLAB_JLBFCOCKFNM_OFFSET UNITYSDK_OFFSET(0x1E2D4FC0)
#define ELKDCCIHLAB_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E2D4FA0)
#define ELKDCCIHLAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D55F0)
#define ELKDCCIHLAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D5550)
#define ELKDCCIHLAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4E50)
#define ELKDCCIHLAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D52B0)
#define ELKDCCIHLAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D5310)

inline static constexpr unsigned int ELKDCCIHLAB_TypeDefinitionIndex = 26922;

	class ELKDCCIHLAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LGMFKDCCDNN*>* MDELKGNPIOF; // 0x18
		::System::UInt32 GIJAABDJGDA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ELKDCCIHLAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELKDCCIHLAB*>**)UnitySDK::FromName("", "ELKDCCIHLAB")->GetStaticField(0x51330);
		}

		static ::Google::Protobuf::FieldCodec_1<::LGMFKDCCDNN*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGMFKDCCDNN*>**)UnitySDK::FromName("", "ELKDCCIHLAB")->GetStaticField(0x51338);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object GADBEOGJMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELKDCCIHLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELKDCCIHLAB*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELKDCCIHLAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELKDCCIHLAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELKDCCIHLAB*>*(*)())((::PBYTE)hIl2Cpp + ELKDCCIHLAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELKDCCIHLAB* Clone()
		{
			return ((::ELKDCCIHLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGMFKDCCDNN*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGMFKDCCDNN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 FIKLGPLLNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_FIKLGPLLNFI_OFFSET))(this);
		}

		::System::Void JLBFCOCKFNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_JLBFCOCKFNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELKDCCIHLAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELKDCCIHLAB*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELKDCCIHLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELKDCCIHLAB*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELKDCCIHLAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
