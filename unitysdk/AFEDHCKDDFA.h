#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOCMAOJECF.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFEDHCKDDFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E117020)
#define AFEDHCKDDFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E117370)
#define AFEDHCKDDFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E116BB0)
#define AFEDHCKDDFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E116B70)
#define AFEDHCKDDFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E116B60)
#define AFEDHCKDDFA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E116C70)
#define AFEDHCKDDFA_EMHHBCPKLOC_OFFSET UNITYSDK_OFFSET(0x1E116C50)
#define AFEDHCKDDFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E116D20)
#define AFEDHCKDDFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E116C90)
#define AFEDHCKDDFA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E116C80)
#define AFEDHCKDDFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E116E00)
#define AFEDHCKDDFA_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E116C40)
#define AFEDHCKDDFA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E116C30)
#define AFEDHCKDDFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E116AF0)
#define AFEDHCKDDFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1171D0)
#define AFEDHCKDDFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E117180)
#define AFEDHCKDDFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E116B50)
#define AFEDHCKDDFA_PLCGDLOIAMP_OFFSET UNITYSDK_OFFSET(0x1E116C60)
#define AFEDHCKDDFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E116E30)
#define AFEDHCKDDFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E116E90)

inline static constexpr unsigned int AFEDHCKDDFA_TypeDefinitionIndex = 29829;

	class AFEDHCKDDFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean MEBJKDPBEGK; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GEMFJILOPLL; // 0x1C
		::NAOCMAOJECF GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFEDHCKDDFA")->GetStaticField(0x2E4D0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object CPNIKNGKHDC; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFEDHCKDDFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFEDHCKDDFA*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFEDHCKDDFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFEDHCKDDFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFEDHCKDDFA* Clone()
		{
			return ((::AFEDHCKDDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_CLONE_OFFSET))(this);
		}

		::NAOCMAOJECF JBIOGKPHKKC()
		{
			return ((::NAOCMAOJECF(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::NAOCMAOJECF a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOCMAOJECF))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean EMHHBCPKLOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_EMHHBCPKLOC_OFFSET))(this);
		}

		::System::Void PLCGDLOIAMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_PLCGDLOIAMP_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFEDHCKDDFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFEDHCKDDFA*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFEDHCKDDFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFEDHCKDDFA*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFEDHCKDDFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
