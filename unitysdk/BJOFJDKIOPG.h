#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJOFJDKIOPG;
class LGOKJFKMCBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJOFJDKIOPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1F1D0)
#define BJOFJDKIOPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1F590)
#define BJOFJDKIOPG_CJFDIDEFAIA_OFFSET UNITYSDK_OFFSET(0x1DF1ED80)
#define BJOFJDKIOPG_CKEGDLPPJEI_OFFSET UNITYSDK_OFFSET(0x1DF1ED40)
#define BJOFJDKIOPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1ECD0)
#define BJOFJDKIOPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1EC10)
#define BJOFJDKIOPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EBC0)
#define BJOFJDKIOPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1EDF0)
#define BJOFJDKIOPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1ED90)
#define BJOFJDKIOPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1EF30)
#define BJOFJDKIOPG_IBINKMBEIFF_OFFSET UNITYSDK_OFFSET(0x1DF1ED20)
#define BJOFJDKIOPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1EB50)
#define BJOFJDKIOPG_JLIJJLEPEGL_OFFSET UNITYSDK_OFFSET(0x1DF1ED70)
#define BJOFJDKIOPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1F490)
#define BJOFJDKIOPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1F3D0)
#define BJOFJDKIOPG_MHHADIBLBPK_OFFSET UNITYSDK_OFFSET(0x1DF1ED30)
#define BJOFJDKIOPG_NHHEFNCEEEM_OFFSET UNITYSDK_OFFSET(0x1DF1ED50)
#define BJOFJDKIOPG_NLBJFCKJMIO_OFFSET UNITYSDK_OFFSET(0x1DF1ED60)
#define BJOFJDKIOPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EBB0)
#define BJOFJDKIOPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1EFB0)
#define BJOFJDKIOPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1F010)

inline static constexpr unsigned int BJOFJDKIOPG_TypeDefinitionIndex = 25612;

	class BJOFJDKIOPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LGOKJFKMCBE*>* PEINDFOIPEF; // 0x18
		::System::UInt32 ADPLPKOGPPD; // 0x20
		::System::UInt32 FAIPHOELLFC; // 0x24
		::System::UInt32 HKMOPCIIBHM; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LGOKJFKMCBE*>** StaticGet_KMBEIDKADBO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGOKJFKMCBE*>**)UnitySDK::FromName("", "BJOFJDKIOPG")->GetStaticField(0x5A060);
		}

		static ::Google::Protobuf::MessageParser_1<::BJOFJDKIOPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJOFJDKIOPG*>**)UnitySDK::FromName("", "BJOFJDKIOPG")->GetStaticField(0x5A068);
		}

		// static const ::System::Object FEHGDPKFHND; // 0x0
		// static const ::System::Object EIAIMEEJNDB; // 0x0
		// static const ::System::Object KKEHNMPOGOP; // 0x0
		// static const ::System::Object BDEPANLNMBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJOFJDKIOPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJOFJDKIOPG*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJOFJDKIOPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJOFJDKIOPG*>*(*)())((::PBYTE)hIl2Cpp + BJOFJDKIOPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJOFJDKIOPG* Clone()
		{
			return ((::BJOFJDKIOPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 IBINKMBEIFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_IBINKMBEIFF_OFFSET))(this);
		}

		::System::Void MHHADIBLBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_MHHADIBLBPK_OFFSET))(this, a1);
		}

		::System::UInt32 CKEGDLPPJEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CKEGDLPPJEI_OFFSET))(this);
		}

		::System::Void NHHEFNCEEEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_NHHEFNCEEEM_OFFSET))(this, a1);
		}

		::System::UInt32 NLBJFCKJMIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_NLBJFCKJMIO_OFFSET))(this);
		}

		::System::Void JLIJJLEPEGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_JLIJJLEPEGL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGOKJFKMCBE*>* CJFDIDEFAIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGOKJFKMCBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CJFDIDEFAIA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJOFJDKIOPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJOFJDKIOPG*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJOFJDKIOPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJOFJDKIOPG*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJOFJDKIOPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
