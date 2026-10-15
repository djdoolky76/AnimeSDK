#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/PBBJDEMIFDC.h"
#include "unitysdk/System/Object.h"
class IIEEOLPONJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIEEOLPONJM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E684BD0)
#define IIEEOLPONJM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E684BE0)
#define IIEEOLPONJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E685040)
#define IIEEOLPONJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E685450)
#define IIEEOLPONJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E684B70)
#define IIEEOLPONJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E684AD0)
#define IIEEOLPONJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E684A90)
#define IIEEOLPONJM_EBOBMNNPEIE_OFFSET UNITYSDK_OFFSET(0x1E684C00)
#define IIEEOLPONJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E684C40)
#define IIEEOLPONJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E684C10)
#define IIEEOLPONJM_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E684BB0)
#define IIEEOLPONJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E684D80)
#define IIEEOLPONJM_IMFHFKFAIEP_OFFSET UNITYSDK_OFFSET(0x1E684BC0)
#define IIEEOLPONJM_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E684BA0)
#define IIEEOLPONJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E684A50)
#define IIEEOLPONJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E685350)
#define IIEEOLPONJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E685290)
#define IIEEOLPONJM_MFCLCKHJGLK_OFFSET UNITYSDK_OFFSET(0x1E684BF0)
#define IIEEOLPONJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E684A80)
#define IIEEOLPONJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E684E00)
#define IIEEOLPONJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E684E60)

inline static constexpr unsigned int IIEEOLPONJM_TypeDefinitionIndex = 26376;

	class IIEEOLPONJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* GHOPIJOMOLL; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 FCEOLGCNODA; // 0x24
		::PBBJDEMIFDC HDAIPLJBGAB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::IIEEOLPONJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIEEOLPONJM*>**)UnitySDK::FromName("", "IIEEOLPONJM")->GetStaticField(0x50100);
		}

		static ::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>** StaticGet_LBDBGMJICNM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>**)UnitySDK::FromName("", "IIEEOLPONJM")->GetStaticField(0x50108);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object AECCGOBPHGM; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object GIDFENOFHLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIEEOLPONJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIEEOLPONJM*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIEEOLPONJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIEEOLPONJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIEEOLPONJM*>*(*)())((::PBYTE)hIl2Cpp + IIEEOLPONJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIEEOLPONJM* Clone()
		{
			return ((::IIEEOLPONJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_CLONE_OFFSET))(this);
		}

		::PBBJDEMIFDC IOIFPHAMFDF()
		{
			return ((::PBBJDEMIFDC(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::PBBJDEMIFDC a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBBJDEMIFDC))((::PBYTE)hIl2Cpp + IIEEOLPONJM_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* IMFHFKFAIEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_IMFHFKFAIEP_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIEEOLPONJM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 MFCLCKHJGLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_MFCLCKHJGLK_OFFSET))(this);
		}

		::System::Void EBOBMNNPEIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIEEOLPONJM_EBOBMNNPEIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIEEOLPONJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIEEOLPONJM*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIEEOLPONJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIEEOLPONJM*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIEEOLPONJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
