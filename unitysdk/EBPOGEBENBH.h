#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPOGEBENBH;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBPOGEBENBH_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E24B700)
#define EBPOGEBENBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E24BC70)
#define EBPOGEBENBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24C020)
#define EBPOGEBENBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E24B670)
#define EBPOGEBENBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E24B5F0)
#define EBPOGEBENBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24B5E0)
#define EBPOGEBENBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E24B8F0)
#define EBPOGEBENBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E24B760)
#define EBPOGEBENBH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E24B730)
#define EBPOGEBENBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E24BA80)
#define EBPOGEBENBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E24B5A0)
#define EBPOGEBENBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E24BE60)
#define EBPOGEBENBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E24BDD0)
#define EBPOGEBENBH_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E24B750)
#define EBPOGEBENBH_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E24B710)
#define EBPOGEBENBH_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E24B740)
#define EBPOGEBENBH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E24B720)
#define EBPOGEBENBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E24B5D0)
#define EBPOGEBENBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E24BAD0)
#define EBPOGEBENBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E24BB30)

inline static constexpr unsigned int EBPOGEBENBH_TypeDefinitionIndex = 26717;

	class EBPOGEBENBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBPOGEBENBH")->GetStaticField(0x3D0F0);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBPOGEBENBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPOGEBENBH*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPOGEBENBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBPOGEBENBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBPOGEBENBH* Clone()
		{
			return ((::EBPOGEBENBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBPOGEBENBH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBPOGEBENBH_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBPOGEBENBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBPOGEBENBH*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBPOGEBENBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPOGEBENBH*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBPOGEBENBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
