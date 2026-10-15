#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPFBPLPIADI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPFBPLPIADI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DAED0)
#define FPFBPLPIADI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB1A0)
#define FPFBPLPIADI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DAB20)
#define FPFBPLPIADI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DAAF0)
#define FPFBPLPIADI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DAAE0)
#define FPFBPLPIADI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DAC90)
#define FPFBPLPIADI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DABB0)
#define FPFBPLPIADI_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E3DAB80)
#define FPFBPLPIADI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DAD60)
#define FPFBPLPIADI_JDCCCHJLGHD_OFFSET UNITYSDK_OFFSET(0x1E3DABA0)
#define FPFBPLPIADI_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E3DAB70)
#define FPFBPLPIADI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DAAA0)
#define FPFBPLPIADI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DB020)
#define FPFBPLPIADI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DAFE0)
#define FPFBPLPIADI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DAAD0)
#define FPFBPLPIADI_PFBFJCFNGIA_OFFSET UNITYSDK_OFFSET(0x1E3DAB90)
#define FPFBPLPIADI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DAD90)
#define FPFBPLPIADI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DADF0)

inline static constexpr unsigned int FPFBPLPIADI_TypeDefinitionIndex = 27339;

	class FPFBPLPIADI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		::System::UInt32 FOEDDLKKDBK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FPFBPLPIADI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPFBPLPIADI*>**)UnitySDK::FromName("", "FPFBPLPIADI")->GetStaticField(0x5F4D0);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object MPMLCAMLGOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPFBPLPIADI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPFBPLPIADI*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPFBPLPIADI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPFBPLPIADI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPFBPLPIADI*>*(*)())((::PBYTE)hIl2Cpp + FPFBPLPIADI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPFBPLPIADI* Clone()
		{
			return ((::FPFBPLPIADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPFBPLPIADI_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 PFBFJCFNGIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_PFBFJCFNGIA_OFFSET))(this);
		}

		::System::Void JDCCCHJLGHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPFBPLPIADI_JDCCCHJLGHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPFBPLPIADI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPFBPLPIADI*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPFBPLPIADI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPFBPLPIADI*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPFBPLPIADI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
