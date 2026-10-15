#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOCMAOJECF.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFEDHCKDDFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E9AA0)
#define AFEDHCKDDFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E9DF0)
#define AFEDHCKDDFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E9630)
#define AFEDHCKDDFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E95F0)
#define AFEDHCKDDFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E95E0)
#define AFEDHCKDDFA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E0E96F0)
#define AFEDHCKDDFA_EMHHBCPKLOC_OFFSET UNITYSDK_OFFSET(0x1E0E96D0)
#define AFEDHCKDDFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E97A0)
#define AFEDHCKDDFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E9710)
#define AFEDHCKDDFA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E0E9700)
#define AFEDHCKDDFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E9880)
#define AFEDHCKDDFA_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E0E96C0)
#define AFEDHCKDDFA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E0E96B0)
#define AFEDHCKDDFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E9570)
#define AFEDHCKDDFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E9C50)
#define AFEDHCKDDFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E9C00)
#define AFEDHCKDDFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E95D0)
#define AFEDHCKDDFA_PLCGDLOIAMP_OFFSET UNITYSDK_OFFSET(0x1E0E96E0)
#define AFEDHCKDDFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E98B0)
#define AFEDHCKDDFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E9910)

inline static constexpr unsigned int AFEDHCKDDFA_TypeDefinitionIndex = 29829;

	class AFEDHCKDDFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::NAOCMAOJECF GMPNCOBOFDM; // 0x1C
		::System::Boolean MEBJKDPBEGK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AFEDHCKDDFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFEDHCKDDFA*>**)UnitySDK::FromName("", "AFEDHCKDDFA")->GetStaticField(0x2FDA0);
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

		static ::Google::Protobuf::MessageParser_1<::AFEDHCKDDFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFEDHCKDDFA*>*(*)())((::PBYTE)hIl2Cpp + AFEDHCKDDFA_JJGHOBBFNJD_OFFSET))();
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
