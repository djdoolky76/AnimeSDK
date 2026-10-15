#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class DBMILNKFCJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBMILNKFCJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E134260)
#define DBMILNKFCJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1345A0)
#define DBMILNKFCJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E133DB0)
#define DBMILNKFCJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E133D80)
#define DBMILNKFCJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E133D70)
#define DBMILNKFCJP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E133E60)
#define DBMILNKFCJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E133F30)
#define DBMILNKFCJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E133EA0)
#define DBMILNKFCJP_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E133E50)
#define DBMILNKFCJP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E133E70)
#define DBMILNKFCJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E134010)
#define DBMILNKFCJP_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E133E90)
#define DBMILNKFCJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E133D00)
#define DBMILNKFCJP_KKLCJHAHLFF_OFFSET UNITYSDK_OFFSET(0x1E133E30)
#define DBMILNKFCJP_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E133E40)
#define DBMILNKFCJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E134500)
#define DBMILNKFCJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1344B0)
#define DBMILNKFCJP_OIDIFKDLOJI_OFFSET UNITYSDK_OFFSET(0x1E133E20)
#define DBMILNKFCJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E133D60)
#define DBMILNKFCJP_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E133E80)
#define DBMILNKFCJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E134050)
#define DBMILNKFCJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1340B0)

inline static constexpr unsigned int DBMILNKFCJP_TypeDefinitionIndex = 30404;

	class DBMILNKFCJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		::ACINIALAFDE CFCAMOAGIDE; // 0x20
		::System::UInt32 MGDODHEHDFE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DBMILNKFCJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBMILNKFCJP*>**)UnitySDK::FromName("", "DBMILNKFCJP")->GetStaticField(0x23170);
		}

		// static const ::System::Object PFJGLEDGEMH; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBMILNKFCJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMILNKFCJP*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMILNKFCJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBMILNKFCJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBMILNKFCJP*>*(*)())((::PBYTE)hIl2Cpp + DBMILNKFCJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBMILNKFCJP* Clone()
		{
			return ((::DBMILNKFCJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OIDIFKDLOJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_OIDIFKDLOJI_OFFSET))(this);
		}

		::System::Void KKLCJHAHLFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMILNKFCJP_KKLCJHAHLFF_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + DBMILNKFCJP_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMILNKFCJP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMILNKFCJP_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBMILNKFCJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBMILNKFCJP*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBMILNKFCJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMILNKFCJP*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBMILNKFCJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
