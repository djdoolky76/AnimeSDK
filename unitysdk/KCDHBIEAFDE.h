#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDHBIEAFDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCDHBIEAFDE_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E7F3950)
#define KCDHBIEAFDE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E7F3970)
#define KCDHBIEAFDE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E7F3980)
#define KCDHBIEAFDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F3EE0)
#define KCDHBIEAFDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4280)
#define KCDHBIEAFDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F38F0)
#define KCDHBIEAFDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F3800)
#define KCDHBIEAFDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F3770)
#define KCDHBIEAFDE_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E7F3960)
#define KCDHBIEAFDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F3A00)
#define KCDHBIEAFDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F39A0)
#define KCDHBIEAFDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F3B20)
#define KCDHBIEAFDE_GHMAMAIOCBJ_OFFSET UNITYSDK_OFFSET(0x1E7F3990)
#define KCDHBIEAFDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F3700)
#define KCDHBIEAFDE_LEAJNJLKBEG_OFFSET UNITYSDK_OFFSET(0x1E7F3940)
#define KCDHBIEAFDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F4130)
#define KCDHBIEAFDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F40C0)
#define KCDHBIEAFDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F3760)
#define KCDHBIEAFDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F3CF0)
#define KCDHBIEAFDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F3D50)

inline static constexpr unsigned int KCDHBIEAFDE_TypeDefinitionIndex = 32579;

	class KCDHBIEAFDE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLPNNHNLABP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FOHLIPBMDLF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x28
		::System::UInt32 LJDBCGPFFDH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::KCDHBIEAFDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCDHBIEAFDE*>**)UnitySDK::FromName("", "KCDHBIEAFDE")->GetStaticField(0xF7A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOIAEPPBIKJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KCDHBIEAFDE")->GetStaticField(0xF7A8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IDNOBCIMDIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KCDHBIEAFDE")->GetStaticField(0xF7B0);
		}

		// static const ::System::Object GDIIKEMJCLN; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BEEEEPNOBGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDHBIEAFDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCDHBIEAFDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCDHBIEAFDE*>*(*)())((::PBYTE)hIl2Cpp + KCDHBIEAFDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCDHBIEAFDE* Clone()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEAJNJLKBEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_LEAJNJLKBEG_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHMAMAIOCBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_GHMAMAIOCBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCDHBIEAFDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCDHBIEAFDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
