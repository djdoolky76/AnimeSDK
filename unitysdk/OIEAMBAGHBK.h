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

#define OIEAMBAGHBK_AEEKKDHOFCF_OFFSET UNITYSDK_OFFSET(0x1F1133E0)
#define OIEAMBAGHBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F113970)
#define OIEAMBAGHBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F113CC0)
#define OIEAMBAGHBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F113330)
#define OIEAMBAGHBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1132C0)
#define OIEAMBAGHBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1132B0)
#define OIEAMBAGHBK_DJLCABACLKF_OFFSET UNITYSDK_OFFSET(0x1F1133F0)
#define OIEAMBAGHBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F113570)
#define OIEAMBAGHBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F113440)
#define OIEAMBAGHBK_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1F113400)
#define OIEAMBAGHBK_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1F113410)
#define OIEAMBAGHBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F113710)
#define OIEAMBAGHBK_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1F113430)
#define OIEAMBAGHBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F113240)
#define OIEAMBAGHBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F113AE0)
#define OIEAMBAGHBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F113A40)
#define OIEAMBAGHBK_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1F113420)
#define OIEAMBAGHBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1132A0)
#define OIEAMBAGHBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1137A0)
#define OIEAMBAGHBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F113800)

inline static constexpr unsigned int OIEAMBAGHBK_TypeDefinitionIndex = 27107;

	class OIEAMBAGHBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DALKEINMPBH; // 0x18
		::System::Boolean HONCCGDMBBL; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GKOHBFHOFKN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIEAMBAGHBK*>**)UnitySDK::FromName("", "OIEAMBAGHBK")->GetStaticField(0x16C10);
		}

		// static const ::System::Object OMCPIPGCDIP; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
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

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OIEAMBAGHBK_IIHMFDMFOPO_OFFSET))(this, a1);
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
