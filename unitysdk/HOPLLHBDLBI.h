#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOPLLHBDLBI;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOPLLHBDLBI_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E5F2B30)
#define HOPLLHBDLBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F3040)
#define HOPLLHBDLBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F3360)
#define HOPLLHBDLBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F2A70)
#define HOPLLHBDLBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F2A00)
#define HOPLLHBDLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F29F0)
#define HOPLLHBDLBI_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1E5F2B20)
#define HOPLLHBDLBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F2C70)
#define HOPLLHBDLBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F2B70)
#define HOPLLHBDLBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5F2B60)
#define HOPLLHBDLBI_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1E5F2B10)
#define HOPLLHBDLBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F2E10)
#define HOPLLHBDLBI_IGDPIIJEELD_OFFSET UNITYSDK_OFFSET(0x1E5F2AF0)
#define HOPLLHBDLBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F29B0)
#define HOPLLHBDLBI_KMOAIPBICFE_OFFSET UNITYSDK_OFFSET(0x1E5F2B00)
#define HOPLLHBDLBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F3290)
#define HOPLLHBDLBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F3200)
#define HOPLLHBDLBI_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E5F2B40)
#define HOPLLHBDLBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5F2B50)
#define HOPLLHBDLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F29E0)
#define HOPLLHBDLBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F2E50)
#define HOPLLHBDLBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F2EB0)

inline static constexpr unsigned int HOPLLHBDLBI_TypeDefinitionIndex = 28254;

	class HOPLLHBDLBI : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 APAHJAEEAIH; // 0x20
		::System::UInt32 EEBKDMBJHEC; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>**)UnitySDK::FromName("", "HOPLLHBDLBI")->GetStaticField(0x50130);
		}

		// static const ::System::Object LCLODCLLPDD; // 0x0
		// static const ::System::Object DCPHPJKBJBN; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOPLLHBDLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>*(*)())((::PBYTE)hIl2Cpp + HOPLLHBDLBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOPLLHBDLBI* Clone()
		{
			return ((::HOPLLHBDLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGDPIIJEELD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_IGDPIIJEELD_OFFSET))(this);
		}

		::System::Void KMOAIPBICFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_KMOAIPBICFE_OFFSET))(this, a1);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOPLLHBDLBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOPLLHBDLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
