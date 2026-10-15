#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHHHFHGINI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKHHHFHGINI_AMONAKNHNPL_OFFSET UNITYSDK_OFFSET(0x1E4B4F10)
#define GKHHHFHGINI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B5410)
#define GKHHHFHGINI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B58B0)
#define GKHHHFHGINI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B4EA0)
#define GKHHHFHGINI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B4E10)
#define GKHHHFHGINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B4DD0)
#define GKHHHFHGINI_DFDIBJFKEKO_OFFSET UNITYSDK_OFFSET(0x1E4B4F30)
#define GKHHHFHGINI_EGBOLDOFOEM_OFFSET UNITYSDK_OFFSET(0x1E4B4F00)
#define GKHHHFHGINI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B4FF0)
#define GKHHHFHGINI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B4FC0)
#define GKHHHFHGINI_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E4B4F40)
#define GKHHHFHGINI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B5080)
#define GKHHHFHGINI_HCNEEPLBNNL_OFFSET UNITYSDK_OFFSET(0x1E4B4EE0)
#define GKHHHFHGINI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B4D90)
#define GKHHHFHGINI_JKCKJHAJMAD_OFFSET UNITYSDK_OFFSET(0x1E4B4F20)
#define GKHHHFHGINI_MCFNIIKKJKF_OFFSET UNITYSDK_OFFSET(0x1E4B4F70)
#define GKHHHFHGINI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B5750)
#define GKHHHFHGINI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B56C0)
#define GKHHHFHGINI_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1E4B4F60)
#define GKHHHFHGINI_ODJMOKFKMIE_OFFSET UNITYSDK_OFFSET(0x1E4B4EF0)
#define GKHHHFHGINI_OEODOHMJLFP_OFFSET UNITYSDK_OFFSET(0x1E4B4ED0)
#define GKHHHFHGINI_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E4B4F50)
#define GKHHHFHGINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B4DC0)
#define GKHHHFHGINI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B5150)
#define GKHHHFHGINI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B51B0)

	class GKHHHFHGINI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* MFDIFJCMBCL; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* MGFJNHOFKOB; // 0x20
		::System::UInt32 IHODDKNKKOM; // 0x28
		::System::UInt32 GMNDCJLDDCN; // 0x2C
		::System::UInt32 HJBLFOHJIPB; // 0x30
		::System::UInt32 OPPNMFMNMGC; // 0x34
		static ::System::Object** StaticGet_LEMHKMKOEDO()
		{
			return (::System::Object**)UnitySDK::FromName("", "GKHHHFHGINI")->GetStaticField(0x1D790);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKHHHFHGINI")->GetStaticField(0x1D798);
		}

		// static const ::System::Object IEIFNKPAEFE; // 0x0
		// static const ::System::Object PECNAADIAFB; // 0x0
		// static const ::System::Object AKDGEBMBHAM; // 0x0
		// static const ::System::Object HMJCIGPMHFK; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object FJDILKCJAIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKHHHFHGINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHHHFHGINI*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHHHFHGINI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKHHHFHGINI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKHHHFHGINI* Clone()
		{
			return ((::GKHHHFHGINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEODOHMJLFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_OEODOHMJLFP_OFFSET))(this);
		}

		::System::Void HCNEEPLBNNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKHHHFHGINI_HCNEEPLBNNL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ODJMOKFKMIE()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_ODJMOKFKMIE_OFFSET))(this);
		}

		::System::UInt32 EGBOLDOFOEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_EGBOLDOFOEM_OFFSET))(this);
		}

		::System::Void AMONAKNHNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKHHHFHGINI_AMONAKNHNPL_OFFSET))(this, a1);
		}

		::System::UInt32 JKCKJHAJMAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_JKCKJHAJMAD_OFFSET))(this);
		}

		::System::Void DFDIBJFKEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKHHHFHGINI_DFDIBJFKEKO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKHHHFHGINI_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::String* MHLKGONEGDG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_MHLKGONEGDG_OFFSET))(this);
		}

		::System::Void MCFNIIKKJKF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_MCFNIIKKJKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKHHHFHGINI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKHHHFHGINI*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKHHHFHGINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHHHFHGINI*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKHHHFHGINI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
