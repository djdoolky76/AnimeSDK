#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKKBILNMLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CGKKBILNMLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0837E0)
#define CGKKBILNMLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E083BE0)
#define CGKKBILNMLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0831B0)
#define CGKKBILNMLI_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E083250)
#define CGKKBILNMLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E083130)
#define CGKKBILNMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E083120)
#define CGKKBILNMLI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E0832B0)
#define CGKKBILNMLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0833E0)
#define CGKKBILNMLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0832D0)
#define CGKKBILNMLI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E083240)
#define CGKKBILNMLI_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E083280)
#define CGKKBILNMLI_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E083260)
#define CGKKBILNMLI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E0832C0)
#define CGKKBILNMLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0834F0)
#define CGKKBILNMLI_GOBCHHEIPJM_OFFSET UNITYSDK_OFFSET(0x1E0832A0)
#define CGKKBILNMLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0830E0)
#define CGKKBILNMLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E083AE0)
#define CGKKBILNMLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E083A30)
#define CGKKBILNMLI_MFNCCAHGMBB_OFFSET UNITYSDK_OFFSET(0x1E083290)
#define CGKKBILNMLI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E083230)
#define CGKKBILNMLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E083110)
#define CGKKBILNMLI_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E083270)
#define CGKKBILNMLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E083590)
#define CGKKBILNMLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0835F0)

inline static constexpr unsigned int CGKKBILNMLI_TypeDefinitionIndex = 25950;

	class CGKKBILNMLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 OBCOKODJPLI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 DBHLHPDBNFD; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CGKKBILNMLI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGKKBILNMLI*>**)UnitySDK::FromName("", "CGKKBILNMLI")->GetStaticField(0x13200);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object CCBADEFMFHL; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGKKBILNMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKKBILNMLI*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKKBILNMLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGKKBILNMLI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGKKBILNMLI*>*(*)())((::PBYTE)hIl2Cpp + CGKKBILNMLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGKKBILNMLI* Clone()
		{
			return ((::CGKKBILNMLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKKBILNMLI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKKBILNMLI_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 MFNCCAHGMBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_MFNCCAHGMBB_OFFSET))(this);
		}

		::System::Void GOBCHHEIPJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKKBILNMLI_GOBCHHEIPJM_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKKBILNMLI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGKKBILNMLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGKKBILNMLI*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGKKBILNMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKKBILNMLI*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGKKBILNMLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
