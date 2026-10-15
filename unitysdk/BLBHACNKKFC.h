#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLBHACNKKFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLBHACNKKFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5CD10)
#define BLBHACNKKFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5CFF0)
#define BLBHACNKKFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5C830)
#define BLBHACNKKFC_CNDAMIPFPPG_OFFSET UNITYSDK_OFFSET(0x1DF5C8C0)
#define BLBHACNKKFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5C7E0)
#define BLBHACNKKFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C7D0)
#define BLBHACNKKFC_DHMGJGFOMKG_OFFSET UNITYSDK_OFFSET(0x1DF5C920)
#define BLBHACNKKFC_DIEOGCNMMEP_OFFSET UNITYSDK_OFFSET(0x1DF5C8E0)
#define BLBHACNKKFC_ENAKDIANONN_OFFSET UNITYSDK_OFFSET(0x1DF5C8D0)
#define BLBHACNKKFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5C9A0)
#define BLBHACNKKFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5C930)
#define BLBHACNKKFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5CA00)
#define BLBHACNKKFC_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1DF5C900)
#define BLBHACNKKFC_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1DF5C8F0)
#define BLBHACNKKFC_IEEOBOBMIOL_OFFSET UNITYSDK_OFFSET(0x1DF5C910)
#define BLBHACNKKFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5C790)
#define BLBHACNKKFC_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1DF5C8A0)
#define BLBHACNKKFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5CF30)
#define BLBHACNKKFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5CED0)
#define BLBHACNKKFC_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1DF5C890)
#define BLBHACNKKFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C7C0)
#define BLBHACNKKFC_PLGDKIAFEGP_OFFSET UNITYSDK_OFFSET(0x1DF5C8B0)
#define BLBHACNKKFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5CA40)
#define BLBHACNKKFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5CAA0)

inline static constexpr unsigned int BLBHACNKKFC_TypeDefinitionIndex = 27918;

	class BLBHACNKKFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KDICHAAEEOL; // 0x18
		::System::UInt32 GDPGCPKEFKH; // 0x1C
		::System::Boolean OEKIMCLMBKI; // 0x20
		::System::Boolean BBJIDLMAPDF; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 ENFCDAFLMEK; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLBHACNKKFC")->GetStaticField(0x4C220);
		}

		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object LIPOOKJOPMC; // 0x0
		// static const ::System::Object IHBBLPAGEJD; // 0x0
		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		// static const ::System::Object BBHHKAGNOBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLBHACNKKFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLBHACNKKFC*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLBHACNKKFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLBHACNKKFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLBHACNKKFC* Clone()
		{
			return ((::BLBHACNKKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_CLONE_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLBHACNKKFC_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Int32 PLGDKIAFEGP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_PLGDKIAFEGP_OFFSET))(this);
		}

		::System::Void CNDAMIPFPPG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLBHACNKKFC_CNDAMIPFPPG_OFFSET))(this, a1);
		}

		::System::Boolean ENAKDIANONN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_ENAKDIANONN_OFFSET))(this);
		}

		::System::Void DIEOGCNMMEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLBHACNKKFC_DIEOGCNMMEP_OFFSET))(this, a1);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLBHACNKKFC_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::UInt32 IEEOBOBMIOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_IEEOBOBMIOL_OFFSET))(this);
		}

		::System::Void DHMGJGFOMKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLBHACNKKFC_DHMGJGFOMKG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLBHACNKKFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLBHACNKKFC*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLBHACNKKFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLBHACNKKFC*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLBHACNKKFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
