#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKNBCIOBJJ;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGKNBCIOBJJ_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E64FF30)
#define IGKNBCIOBJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6503D0)
#define IGKNBCIOBJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6506C0)
#define IGKNBCIOBJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64FE90)
#define IGKNBCIOBJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64FE20)
#define IGKNBCIOBJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64FE10)
#define IGKNBCIOBJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6500D0)
#define IGKNBCIOBJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64FF50)
#define IGKNBCIOBJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E64FF20)
#define IGKNBCIOBJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E650250)
#define IGKNBCIOBJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64FDD0)
#define IGKNBCIOBJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E650520)
#define IGKNBCIOBJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6504A0)
#define IGKNBCIOBJJ_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E64FF40)
#define IGKNBCIOBJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E64FF10)
#define IGKNBCIOBJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64FE00)
#define IGKNBCIOBJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E650290)
#define IGKNBCIOBJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6502F0)

	class IGKNBCIOBJJ : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGKNBCIOBJJ")->GetStaticField(0x4B630);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGKNBCIOBJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKNBCIOBJJ*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGKNBCIOBJJ* Clone()
		{
			return ((::IGKNBCIOBJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGKNBCIOBJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGKNBCIOBJJ*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGKNBCIOBJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKNBCIOBJJ*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
