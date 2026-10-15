#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIEAMBAGHBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OIEAMBAGHBK_AEEKKDHOFCF_OFFSET UNITYSDK_OFFSET(0x1DE6B3A0)
#define OIEAMBAGHBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6B940)
#define OIEAMBAGHBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6BC90)
#define OIEAMBAGHBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6B2F0)
#define OIEAMBAGHBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6B280)
#define OIEAMBAGHBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B270)
#define OIEAMBAGHBK_DJLCABACLKF_OFFSET UNITYSDK_OFFSET(0x1DE6B3B0)
#define OIEAMBAGHBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6B530)
#define OIEAMBAGHBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6B400)
#define OIEAMBAGHBK_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DE6B3E0)
#define OIEAMBAGHBK_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1DE6B3F0)
#define OIEAMBAGHBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6B6D0)
#define OIEAMBAGHBK_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1DE6B3D0)
#define OIEAMBAGHBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6B200)
#define OIEAMBAGHBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6BAB0)
#define OIEAMBAGHBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6BA10)
#define OIEAMBAGHBK_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1DE6B3C0)
#define OIEAMBAGHBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B260)
#define OIEAMBAGHBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6B770)
#define OIEAMBAGHBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6B7D0)

inline static constexpr unsigned int OIEAMBAGHBK_TypeDefinitionIndex = 26576;

	class OIEAMBAGHBK : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GKOHBFHOFKN; // 0x20
		::System::Boolean HONCCGDMBBL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>**)UnitySDK::FromName("", "OIEAMBAGHBK")->GetStaticField(0x1BE00);
		}

		// static const ::System::Object OMCPIPGCDIP; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIEAMBAGHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIEAMBAGHBK*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIEAMBAGHBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>*(*)())((::PBYTE)hIl2Cpp + OIEAMBAGHBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIEAMBAGHBK* Clone()
		{
			return ((::OIEAMBAGHBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_CLONE_OFFSET))(this);
		}

		::System::Boolean AEEKKDHOFCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_AEEKKDHOFCF_OFFSET))(this);
		}

		::System::Void DJLCABACLKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_DJLCABACLKF_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIEAMBAGHBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIEAMBAGHBK*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIEAMBAGHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIEAMBAGHBK*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
