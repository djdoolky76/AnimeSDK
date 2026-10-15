#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJBANFPPEFH_CFGAFIEBMNH.h"
#include "unitysdk/System/Object.h"
class MJBANFPPEFH;
class ONHKODAFEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJBANFPPEFH_BJKKJIANOAG_OFFSET UNITYSDK_OFFSET(0x1EA16FE0)
#define MJBANFPPEFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA17410)
#define MJBANFPPEFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA17800)
#define MJBANFPPEFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA16F80)
#define MJBANFPPEFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA16E90)
#define MJBANFPPEFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA16E80)
#define MJBANFPPEFH_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1EA16FB0)
#define MJBANFPPEFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA17020)
#define MJBANFPPEFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA16FF0)
#define MJBANFPPEFH_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1EA16FC0)
#define MJBANFPPEFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA17210)
#define MJBANFPPEFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA16E40)
#define MJBANFPPEFH_LGNJMEKLHIE_OFFSET UNITYSDK_OFFSET(0x1EA16F60)
#define MJBANFPPEFH_LMIJMBABNIA_OFFSET UNITYSDK_OFFSET(0x1EA16FD0)
#define MJBANFPPEFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA17610)
#define MJBANFPPEFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA17510)
#define MJBANFPPEFH_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1EA16F20)
#define MJBANFPPEFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA16E70)
#define MJBANFPPEFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA172D0)
#define MJBANFPPEFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA17330)

inline static constexpr unsigned int MJBANFPPEFH_TypeDefinitionIndex = 30929;

	class MJBANFPPEFH : public ::System::Object
	{
	public:
		::System::Object* LNMMLNNBEGP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MJBANFPPEFH_CFGAFIEBMNH GHJMOMIFBLI; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MJBANFPPEFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJBANFPPEFH*>**)UnitySDK::FromName("", "MJBANFPPEFH")->GetStaticField(0x46F90);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object MOLKOGENBDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJBANFPPEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJBANFPPEFH*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBANFPPEFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJBANFPPEFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJBANFPPEFH*>*(*)())((::PBYTE)hIl2Cpp + MJBANFPPEFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJBANFPPEFH* Clone()
		{
			return ((::MJBANFPPEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJBANFPPEFH_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::ONHKODAFEMH* MPMFFOGBGGM()
		{
			return ((::ONHKODAFEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::Void LGNJMEKLHIE(::ONHKODAFEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_LGNJMEKLHIE_OFFSET))(this, a1);
		}

		::MJBANFPPEFH_CFGAFIEBMNH LMIJMBABNIA()
		{
			return ((::MJBANFPPEFH_CFGAFIEBMNH(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_LMIJMBABNIA_OFFSET))(this);
		}

		::System::Void BJKKJIANOAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_BJKKJIANOAG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJBANFPPEFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJBANFPPEFH*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJBANFPPEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJBANFPPEFH*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJBANFPPEFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
