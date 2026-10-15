#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPIFGEONFPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPIFGEONFPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E39D0)
#define DPIFGEONFPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E3D20)
#define DPIFGEONFPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E34C0)
#define DPIFGEONFPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E3430)
#define DPIFGEONFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E33E0)
#define DPIFGEONFPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E3670)
#define DPIFGEONFPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E3540)
#define DPIFGEONFPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E3760)
#define DPIFGEONFPI_IKEOIMIDAHJ_OFFSET UNITYSDK_OFFSET(0x1E1E3530)
#define DPIFGEONFPI_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E1E3510)
#define DPIFGEONFPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E3370)
#define DPIFGEONFPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E3B50)
#define DPIFGEONFPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E3B00)
#define DPIFGEONFPI_NIKPNLKMIBL_OFFSET UNITYSDK_OFFSET(0x1E1E3520)
#define DPIFGEONFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E33D0)
#define DPIFGEONFPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E3860)
#define DPIFGEONFPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E38C0)

inline static constexpr unsigned int DPIFGEONFPI_TypeDefinitionIndex = 25226;

	class DPIFGEONFPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MLLJMFGPJLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DPIFGEONFPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPIFGEONFPI*>**)UnitySDK::FromName("", "DPIFGEONFPI")->GetStaticField(0x3A2C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DPIFGEONFPI")->GetStaticField(0x3A2C8);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object EGMMMJMLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPIFGEONFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIFGEONFPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPIFGEONFPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPIFGEONFPI*>*(*)())((::PBYTE)hIl2Cpp + DPIFGEONFPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPIFGEONFPI* Clone()
		{
			return ((::DPIFGEONFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_JINLEONNCEN_OFFSET))(this);
		}

		::System::UInt32 NIKPNLKMIBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_NIKPNLKMIBL_OFFSET))(this);
		}

		::System::Void IKEOIMIDAHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPIFGEONFPI_IKEOIMIDAHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPIFGEONFPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPIFGEONFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
