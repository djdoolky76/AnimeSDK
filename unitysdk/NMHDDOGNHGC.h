#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHDDOGNHGC;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMHDDOGNHGC_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1EB75710)
#define NMHDDOGNHGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB75C50)
#define NMHDDOGNHGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB75FF0)
#define NMHDDOGNHGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB75670)
#define NMHDDOGNHGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB75600)
#define NMHDDOGNHGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB755F0)
#define NMHDDOGNHGC_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1EB75730)
#define NMHDDOGNHGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB758E0)
#define NMHDDOGNHGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB75750)
#define NMHDDOGNHGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB75700)
#define NMHDDOGNHGC_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1EB75740)
#define NMHDDOGNHGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB75A70)
#define NMHDDOGNHGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB755B0)
#define NMHDDOGNHGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB75E30)
#define NMHDDOGNHGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB75DA0)
#define NMHDDOGNHGC_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1EB75720)
#define NMHDDOGNHGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB756F0)
#define NMHDDOGNHGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB755E0)
#define NMHDDOGNHGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB75AB0)
#define NMHDDOGNHGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB75B10)

inline static constexpr unsigned int NMHDDOGNHGC_TypeDefinitionIndex = 28487;

	class NMHDDOGNHGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMHDDOGNHGC")->GetStaticField(0x6C340);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMHDDOGNHGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHDDOGNHGC*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHDDOGNHGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMHDDOGNHGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMHDDOGNHGC* Clone()
		{
			return ((::NMHDDOGNHGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMHDDOGNHGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMHDDOGNHGC*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMHDDOGNHGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHDDOGNHGC*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMHDDOGNHGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
