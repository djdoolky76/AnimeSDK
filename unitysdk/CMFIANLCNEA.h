#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMFIANLCNEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMFIANLCNEA_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E100BD0)
#define CMFIANLCNEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E100FA0)
#define CMFIANLCNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E101340)
#define CMFIANLCNEA_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E100BE0)
#define CMFIANLCNEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E100B80)
#define CMFIANLCNEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E100B40)
#define CMFIANLCNEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E100B30)
#define CMFIANLCNEA_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E100C00)
#define CMFIANLCNEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E100D10)
#define CMFIANLCNEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E100C30)
#define CMFIANLCNEA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E100C20)
#define CMFIANLCNEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E100DE0)
#define CMFIANLCNEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E100AF0)
#define CMFIANLCNEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E101180)
#define CMFIANLCNEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E101130)
#define CMFIANLCNEA_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E100BF0)
#define CMFIANLCNEA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E100C10)
#define CMFIANLCNEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E100B20)
#define CMFIANLCNEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E100E10)
#define CMFIANLCNEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E100E70)

inline static constexpr unsigned int CMFIANLCNEA_TypeDefinitionIndex = 31950;

	class CMFIANLCNEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DFKHBNCHKBI; // 0x1C
		::System::UInt32 PDKNJCIEBHA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CMFIANLCNEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CMFIANLCNEA*>**)UnitySDK::FromName("", "CMFIANLCNEA")->GetStaticField(0x1DEE0);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMFIANLCNEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMFIANLCNEA*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMFIANLCNEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CMFIANLCNEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CMFIANLCNEA*>*(*)())((::PBYTE)hIl2Cpp + CMFIANLCNEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMFIANLCNEA* Clone()
		{
			return ((::CMFIANLCNEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMFIANLCNEA_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMFIANLCNEA_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMFIANLCNEA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMFIANLCNEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMFIANLCNEA*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMFIANLCNEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMFIANLCNEA*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMFIANLCNEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
