#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOGJGJKGECJ;
class GEGLJDELBHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOGJGJKGECJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E66D590)
#define AOGJGJKGECJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66D860)
#define AOGJGJKGECJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E66D030)
#define AOGJGJKGECJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E66CFE0)
#define AOGJGJKGECJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66CFD0)
#define AOGJGJKGECJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E66D250)
#define AOGJGJKGECJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E66D0D0)
#define AOGJGJKGECJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E66D0A0)
#define AOGJGJKGECJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E66D3D0)
#define AOGJGJKGECJ_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E66D0C0)
#define AOGJGJKGECJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E66CF90)
#define AOGJGJKGECJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E66D6D0)
#define AOGJGJKGECJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E66D660)
#define AOGJGJKGECJ_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E66D0B0)
#define AOGJGJKGECJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E66D090)
#define AOGJGJKGECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E66CFC0)
#define AOGJGJKGECJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E66D450)
#define AOGJGJKGECJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E66D4B0)

inline static constexpr unsigned int AOGJGJKGECJ_TypeDefinitionIndex = 29819;

	class AOGJGJKGECJ : public ::System::Object
	{
	public:
		::GEGLJDELBHA* CHFNJJAMCCO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AOGJGJKGECJ")->GetStaticField(0x40F90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOGJGJKGECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGJGJKGECJ*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOGJGJKGECJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AOGJGJKGECJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOGJGJKGECJ* Clone()
		{
			return ((::AOGJGJKGECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GEGLJDELBHA* NDGJGMEFMLH()
		{
			return ((::GEGLJDELBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::GEGLJDELBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGLJDELBHA*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOGJGJKGECJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOGJGJKGECJ*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOGJGJKGECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGJGJKGECJ*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOGJGJKGECJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
