#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBONEFMPKKO;
class PPAIELAKIJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPAIELAKIJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD3600)
#define PPAIELAKIJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD39B0)
#define PPAIELAKIJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD3160)
#define PPAIELAKIJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD3030)
#define PPAIELAKIJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2FA0)
#define PPAIELAKIJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD3230)
#define PPAIELAKIJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD31D0)
#define PPAIELAKIJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD3380)
#define PPAIELAKIJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD2F30)
#define PPAIELAKIJD_LALLDCLCGAM_OFFSET UNITYSDK_OFFSET(0x1DFD31C0)
#define PPAIELAKIJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD3790)
#define PPAIELAKIJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD36E0)
#define PPAIELAKIJD_NJGIBBNFDNM_OFFSET UNITYSDK_OFFSET(0x1DFD31B0)
#define PPAIELAKIJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2F90)
#define PPAIELAKIJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD34C0)
#define PPAIELAKIJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD3520)

inline static constexpr unsigned int PPAIELAKIJD_TypeDefinitionIndex = 31775;

	class PPAIELAKIJD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HBONEFMPKKO*>* HLGIJDGFIPK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NDJLCJGHGAD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PPAIELAKIJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPAIELAKIJD*>**)UnitySDK::FromName("", "PPAIELAKIJD")->GetStaticField(0x43620);
		}

		static ::Google::Protobuf::FieldCodec_1<::HBONEFMPKKO*>** StaticGet_NNOHEKODHNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::HBONEFMPKKO*>**)UnitySDK::FromName("", "PPAIELAKIJD")->GetStaticField(0x43628);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CPOEKDCDPEL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PPAIELAKIJD")->GetStaticField(0x43630);
		}

		// static const ::System::Object HKGBADNPAHL; // 0x0
		// static const ::System::Object IHJBHHLNOPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPAIELAKIJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPAIELAKIJD*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAIELAKIJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPAIELAKIJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPAIELAKIJD*>*(*)())((::PBYTE)hIl2Cpp + PPAIELAKIJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPAIELAKIJD* Clone()
		{
			return ((::PPAIELAKIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NJGIBBNFDNM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_NJGIBBNFDNM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HBONEFMPKKO*>* LALLDCLCGAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HBONEFMPKKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_LALLDCLCGAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPAIELAKIJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPAIELAKIJD*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPAIELAKIJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPAIELAKIJD*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPAIELAKIJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
