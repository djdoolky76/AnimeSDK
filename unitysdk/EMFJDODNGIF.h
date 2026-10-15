#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMFJDODNGIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMFJDODNGIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E0180)
#define EMFJDODNGIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E03A0)
#define EMFJDODNGIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DFDD0)
#define EMFJDODNGIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DFDA0)
#define EMFJDODNGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFD90)
#define EMFJDODNGIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DFF00)
#define EMFJDODNGIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DFE30)
#define EMFJDODNGIF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2DFE20)
#define EMFJDODNGIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E0070)
#define EMFJDODNGIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DFD50)
#define EMFJDODNGIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E0240)
#define EMFJDODNGIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E0210)
#define EMFJDODNGIF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2DFE10)
#define EMFJDODNGIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFD80)
#define EMFJDODNGIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E00A0)
#define EMFJDODNGIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E0100)

inline static constexpr unsigned int EMFJDODNGIF_TypeDefinitionIndex = 29619;

	class EMFJDODNGIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EMFJDODNGIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMFJDODNGIF*>**)UnitySDK::FromName("", "EMFJDODNGIF")->GetStaticField(0x52A70);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMFJDODNGIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMFJDODNGIF*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFJDODNGIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMFJDODNGIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMFJDODNGIF*>*(*)())((::PBYTE)hIl2Cpp + EMFJDODNGIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMFJDODNGIF* Clone()
		{
			return ((::EMFJDODNGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMFJDODNGIF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMFJDODNGIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMFJDODNGIF*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMFJDODNGIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMFJDODNGIF*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMFJDODNGIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
