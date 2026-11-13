#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPKPGPPHHBM;
class PLHPNBIMIOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPKPGPPHHBM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1F76C8A0)
#define DPKPGPPHHBM_AFMKMEHONPM_OFFSET UNITYSDK_OFFSET(0x1F76C8C0)
#define DPKPGPPHHBM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1F76C8B0)
#define DPKPGPPHHBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F76CD60)
#define DPKPGPPHHBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76D0E0)
#define DPKPGPPHHBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F76C850)
#define DPKPGPPHHBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76C790)
#define DPKPGPPHHBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76C740)
#define DPKPGPPHHBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F76CA60)
#define DPKPGPPHHBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F76C8D0)
#define DPKPGPPHHBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F76CB90)
#define DPKPGPPHHBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F76C6D0)
#define DPKPGPPHHBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F76CF10)
#define DPKPGPPHHBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F76CE70)
#define DPKPGPPHHBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F76C730)
#define DPKPGPPHHBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F76CC00)
#define DPKPGPPHHBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F76CC60)

inline static constexpr unsigned int DPKPGPPHHBM_TypeDefinitionIndex = 26195;

	class DPKPGPPHHBM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PLHPNBIMIOK*>* GDNBPEAAPDH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::PLHPNBIMIOK*>** StaticGet_EKPJADCPMDM()
		{
			return (::Google::Protobuf::FieldCodec_1<::PLHPNBIMIOK*>**)UnitySDK::FromName("", "DPKPGPPHHBM")->GetStaticField(0x3AEE0);
		}

		static ::Google::Protobuf::MessageParser_1<::DPKPGPPHHBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPKPGPPHHBM*>**)UnitySDK::FromName("", "DPKPGPPHHBM")->GetStaticField(0x3AEE8);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BMBCBGAKBIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPKPGPPHHBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKPGPPHHBM*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPKPGPPHHBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPKPGPPHHBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPKPGPPHHBM*>*(*)())((::PBYTE)hIl2Cpp + DPKPGPPHHBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPKPGPPHHBM* Clone()
		{
			return ((::DPKPGPPHHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PLHPNBIMIOK*>* AFMKMEHONPM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PLHPNBIMIOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_AFMKMEHONPM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPKPGPPHHBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPKPGPPHHBM*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPKPGPPHHBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKPGPPHHBM*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPKPGPPHHBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
