#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOLCCDIJBGO;
class LMOPAFOIJNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMOPAFOIJNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E980B50)
#define LMOPAFOIJNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E980F00)
#define LMOPAFOIJNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9806B0)
#define LMOPAFOIJNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E980580)
#define LMOPAFOIJNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9804F0)
#define LMOPAFOIJNF_DKIONCANBMJ_OFFSET UNITYSDK_OFFSET(0x1E980710)
#define LMOPAFOIJNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E980780)
#define LMOPAFOIJNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E980720)
#define LMOPAFOIJNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9808D0)
#define LMOPAFOIJNF_GLFDJKGMPMM_OFFSET UNITYSDK_OFFSET(0x1E980700)
#define LMOPAFOIJNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E980480)
#define LMOPAFOIJNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E980CE0)
#define LMOPAFOIJNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E980C30)
#define LMOPAFOIJNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9804E0)
#define LMOPAFOIJNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E980A10)
#define LMOPAFOIJNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E980A70)

inline static constexpr unsigned int LMOPAFOIJNF_TypeDefinitionIndex = 28321;

	class LMOPAFOIJNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>* DGCHLNFHENL; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMAIMNNIOBH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LPAGAJCAKAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x3EF70);
		}

		static ::Google::Protobuf::FieldCodec_1<::KOLCCDIJBGO*>** StaticGet_PLDBFECJPHF()
		{
			return (::Google::Protobuf::FieldCodec_1<::KOLCCDIJBGO*>**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x3EF78);
		}

		static ::Google::Protobuf::MessageParser_1<::LMOPAFOIJNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMOPAFOIJNF*>**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x3EF80);
		}

		// static const ::System::Object ICBHKAODHPL; // 0x0
		// static const ::System::Object AFPNINPAOMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMOPAFOIJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMOPAFOIJNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMOPAFOIJNF*>*(*)())((::PBYTE)hIl2Cpp + LMOPAFOIJNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMOPAFOIJNF* Clone()
		{
			return ((::LMOPAFOIJNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GLFDJKGMPMM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_GLFDJKGMPMM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>* DKIONCANBMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_DKIONCANBMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMOPAFOIJNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMOPAFOIJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
