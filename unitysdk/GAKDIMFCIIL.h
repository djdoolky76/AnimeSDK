#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKDIMFCIIL;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAKDIMFCIIL_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E41FB70)
#define GAKDIMFCIIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E420010)
#define GAKDIMFCIIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E420300)
#define GAKDIMFCIIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41FAD0)
#define GAKDIMFCIIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41FA60)
#define GAKDIMFCIIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41FA50)
#define GAKDIMFCIIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41FD10)
#define GAKDIMFCIIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41FB90)
#define GAKDIMFCIIL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E41FB60)
#define GAKDIMFCIIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41FE90)
#define GAKDIMFCIIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41FA10)
#define GAKDIMFCIIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E420160)
#define GAKDIMFCIIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4200E0)
#define GAKDIMFCIIL_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E41FB80)
#define GAKDIMFCIIL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E41FB50)
#define GAKDIMFCIIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41FA40)
#define GAKDIMFCIIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41FED0)
#define GAKDIMFCIIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41FF30)

	class GAKDIMFCIIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAKDIMFCIIL")->GetStaticField(0xB830);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAKDIMFCIIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAKDIMFCIIL*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAKDIMFCIIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAKDIMFCIIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAKDIMFCIIL* Clone()
		{
			return ((::GAKDIMFCIIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAKDIMFCIIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAKDIMFCIIL*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAKDIMFCIIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAKDIMFCIIL*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAKDIMFCIIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
