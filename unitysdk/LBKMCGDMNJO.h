#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBKMCGDMNJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B0E70)
#define LBKMCGDMNJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1230)
#define LBKMCGDMNJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B0A30)
#define LBKMCGDMNJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B09F0)
#define LBKMCGDMNJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B09E0)
#define LBKMCGDMNJO_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E8B0AA0)
#define LBKMCGDMNJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B0BC0)
#define LBKMCGDMNJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B0AE0)
#define LBKMCGDMNJO_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E8B0AD0)
#define LBKMCGDMNJO_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E8B0AB0)
#define LBKMCGDMNJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B0C90)
#define LBKMCGDMNJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B09A0)
#define LBKMCGDMNJO_KKLCJHAHLFF_OFFSET UNITYSDK_OFFSET(0x1E8B0A90)
#define LBKMCGDMNJO_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E8B0AC0)
#define LBKMCGDMNJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B1090)
#define LBKMCGDMNJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B1040)
#define LBKMCGDMNJO_OIDIFKDLOJI_OFFSET UNITYSDK_OFFSET(0x1E8B0A80)
#define LBKMCGDMNJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B09D0)
#define LBKMCGDMNJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B0CC0)
#define LBKMCGDMNJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B0D20)

inline static constexpr unsigned int LBKMCGDMNJO_TypeDefinitionIndex = 27823;

	class LBKMCGDMNJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MGDODHEHDFE; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		::ACINIALAFDE CFCAMOAGIDE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LBKMCGDMNJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBKMCGDMNJO*>**)UnitySDK::FromName("", "LBKMCGDMNJO")->GetStaticField(0xCE30);
		}

		// static const ::System::Object PFJGLEDGEMH; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBKMCGDMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBKMCGDMNJO*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKMCGDMNJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBKMCGDMNJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBKMCGDMNJO*>*(*)())((::PBYTE)hIl2Cpp + LBKMCGDMNJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBKMCGDMNJO* Clone()
		{
			return ((::LBKMCGDMNJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OIDIFKDLOJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_OIDIFKDLOJI_OFFSET))(this);
		}

		::System::Void KKLCJHAHLFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_KKLCJHAHLFF_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBKMCGDMNJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBKMCGDMNJO*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBKMCGDMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBKMCGDMNJO*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBKMCGDMNJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
