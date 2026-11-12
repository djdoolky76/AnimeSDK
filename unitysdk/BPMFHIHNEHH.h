#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMFHIHNEHH;
class FOEPMKFEJMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BPMFHIHNEHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F30F730)
#define BPMFHIHNEHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F30FB70)
#define BPMFHIHNEHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F30EEF0)
#define BPMFHIHNEHH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F30EFB0)
#define BPMFHIHNEHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F30EE40)
#define BPMFHIHNEHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F30EE30)
#define BPMFHIHNEHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F30F240)
#define BPMFHIHNEHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F30F010)
#define BPMFHIHNEHH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F30EFE0)
#define BPMFHIHNEHH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F30EFC0)
#define BPMFHIHNEHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F30F470)
#define BPMFHIHNEHH_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1F30EFF0)
#define BPMFHIHNEHH_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1F30F000)
#define BPMFHIHNEHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F30EDF0)
#define BPMFHIHNEHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F30F940)
#define BPMFHIHNEHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F30F840)
#define BPMFHIHNEHH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F30EFD0)
#define BPMFHIHNEHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F30EE20)
#define BPMFHIHNEHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F30F590)
#define BPMFHIHNEHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F30F5F0)

inline static constexpr unsigned int BPMFHIHNEHH_TypeDefinitionIndex = 26550;

	class BPMFHIHNEHH : public ::System::Object
	{
	public:
		::FOEPMKFEJMK* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BPMFHIHNEHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPMFHIHNEHH*>**)UnitySDK::FromName("", "BPMFHIHNEHH")->GetStaticField(0x56B10);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPMFHIHNEHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPMFHIHNEHH*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPMFHIHNEHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPMFHIHNEHH*>*(*)())((::PBYTE)hIl2Cpp + BPMFHIHNEHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPMFHIHNEHH* Clone()
		{
			return ((::BPMFHIHNEHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::FOEPMKFEJMK* GLPCHDFCIJF()
		{
			return ((::FOEPMKFEJMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::FOEPMKFEJMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEPMKFEJMK*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPMFHIHNEHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPMFHIHNEHH*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPMFHIHNEHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPMFHIHNEHH*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPMFHIHNEHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
