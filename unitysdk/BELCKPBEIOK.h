#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BELCKPBEIOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BELCKPBEIOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA36AE0)
#define BELCKPBEIOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36DB0)
#define BELCKPBEIOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA36730)
#define BELCKPBEIOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA36700)
#define BELCKPBEIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA366F0)
#define BELCKPBEIOK_EEANKCMAONE_OFFSET UNITYSDK_OFFSET(0x1EA367A0)
#define BELCKPBEIOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA368A0)
#define BELCKPBEIOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA367C0)
#define BELCKPBEIOK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA36790)
#define BELCKPBEIOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA36970)
#define BELCKPBEIOK_GHNFIJANKGP_OFFSET UNITYSDK_OFFSET(0x1EA367B0)
#define BELCKPBEIOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA366B0)
#define BELCKPBEIOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA36C30)
#define BELCKPBEIOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA36BF0)
#define BELCKPBEIOK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA36780)
#define BELCKPBEIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA366E0)
#define BELCKPBEIOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA369A0)
#define BELCKPBEIOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA36A00)

inline static constexpr unsigned int BELCKPBEIOK_TypeDefinitionIndex = 27144;

	class BELCKPBEIOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBFGCLPCKEA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BELCKPBEIOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BELCKPBEIOK*>**)UnitySDK::FromName("", "BELCKPBEIOK")->GetStaticField(0x53500);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BCJDCONICKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BELCKPBEIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BELCKPBEIOK*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELCKPBEIOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BELCKPBEIOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BELCKPBEIOK*>*(*)())((::PBYTE)hIl2Cpp + BELCKPBEIOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BELCKPBEIOK* Clone()
		{
			return ((::BELCKPBEIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BELCKPBEIOK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EEANKCMAONE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_EEANKCMAONE_OFFSET))(this);
		}

		::System::Void GHNFIJANKGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BELCKPBEIOK_GHNFIJANKGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BELCKPBEIOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BELCKPBEIOK*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BELCKPBEIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BELCKPBEIOK*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BELCKPBEIOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
