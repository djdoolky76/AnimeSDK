#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/System/Object.h"
class CFGGOBEDJOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFGGOBEDJOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A29B0)
#define CFGGOBEDJOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2D20)
#define CFGGOBEDJOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A24F0)
#define CFGGOBEDJOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A2460)
#define CFGGOBEDJOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2420)
#define CFGGOBEDJOK_ENHIOKHHKDE_OFFSET UNITYSDK_OFFSET(0x1E0A2520)
#define CFGGOBEDJOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A26A0)
#define CFGGOBEDJOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A2550)
#define CFGGOBEDJOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A27D0)
#define CFGGOBEDJOK_IMFHFKFAIEP_OFFSET UNITYSDK_OFFSET(0x1E0A2540)
#define CFGGOBEDJOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A23E0)
#define CFGGOBEDJOK_LALFOHLNBPF_OFFSET UNITYSDK_OFFSET(0x1E0A2530)
#define CFGGOBEDJOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A2B60)
#define CFGGOBEDJOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A2AC0)
#define CFGGOBEDJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2410)
#define CFGGOBEDJOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A2840)
#define CFGGOBEDJOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A28A0)

inline static constexpr unsigned int CFGGOBEDJOK_TypeDefinitionIndex = 26380;

	class CFGGOBEDJOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* GHOPIJOMOLL; // 0x18
		::System::UInt32 AIICGDFLHJB; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>** StaticGet_LBDBGMJICNM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>**)UnitySDK::FromName("", "CFGGOBEDJOK")->GetStaticField(0x12F90);
		}

		static ::Google::Protobuf::MessageParser_1<::CFGGOBEDJOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFGGOBEDJOK*>**)UnitySDK::FromName("", "CFGGOBEDJOK")->GetStaticField(0x12F98);
		}

		// static const ::System::Object FNJENALBBMG; // 0x0
		// static const ::System::Object AECCGOBPHGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFGGOBEDJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFGGOBEDJOK*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFGGOBEDJOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFGGOBEDJOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFGGOBEDJOK*>*(*)())((::PBYTE)hIl2Cpp + CFGGOBEDJOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFGGOBEDJOK* Clone()
		{
			return ((::CFGGOBEDJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENHIOKHHKDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_ENHIOKHHKDE_OFFSET))(this);
		}

		::System::Void LALFOHLNBPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_LALFOHLNBPF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* IMFHFKFAIEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_IMFHFKFAIEP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFGGOBEDJOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFGGOBEDJOK*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFGGOBEDJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFGGOBEDJOK*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFGGOBEDJOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
