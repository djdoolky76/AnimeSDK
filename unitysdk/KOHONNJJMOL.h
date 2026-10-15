#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOHONNJJMOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOHONNJJMOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B1260)
#define KOHONNJJMOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B14E0)
#define KOHONNJJMOL_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1E8B0DD0)
#define KOHONNJJMOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B0DA0)
#define KOHONNJJMOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B0D10)
#define KOHONNJJMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0CC0)
#define KOHONNJJMOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B0F00)
#define KOHONNJJMOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B0E00)
#define KOHONNJJMOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B1000)
#define KOHONNJJMOL_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1E8B0DE0)
#define KOHONNJJMOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B0C80)
#define KOHONNJJMOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B1320)
#define KOHONNJJMOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B12D0)
#define KOHONNJJMOL_NHFIMIKAGMK_OFFSET UNITYSDK_OFFSET(0x1E8B0DF0)
#define KOHONNJJMOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0CB0)
#define KOHONNJJMOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B1100)
#define KOHONNJJMOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B1160)

	class KOHONNJJMOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKOLJECJJBC; // 0x18
		::System::Boolean AIGHAPALCNE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOHONNJJMOL")->GetStaticField(0x2B800);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IDLJKBKMMHG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KOHONNJJMOL")->GetStaticField(0x2B808);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		// static const ::System::Object FCMDJDPEFNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOHONNJJMOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOHONNJJMOL*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOHONNJJMOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOHONNJJMOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOHONNJJMOL* Clone()
		{
			return ((::KOHONNJJMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOHONNJJMOL_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHFIMIKAGMK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_NHFIMIKAGMK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOHONNJJMOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOHONNJJMOL*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOHONNJJMOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOHONNJJMOL*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOHONNJJMOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
