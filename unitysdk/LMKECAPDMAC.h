#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKECAPDMAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMKECAPDMAC_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E9A84F0)
#define LMKECAPDMAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A8820)
#define LMKECAPDMAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A8BA0)
#define LMKECAPDMAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A8430)
#define LMKECAPDMAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A83F0)
#define LMKECAPDMAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A83E0)
#define LMKECAPDMAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A8590)
#define LMKECAPDMAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A8510)
#define LMKECAPDMAC_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E9A84B0)
#define LMKECAPDMAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A8660)
#define LMKECAPDMAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A8370)
#define LMKECAPDMAC_KACHGJNOBCO_OFFSET UNITYSDK_OFFSET(0x1E9A84E0)
#define LMKECAPDMAC_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E9A8500)
#define LMKECAPDMAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A8A00)
#define LMKECAPDMAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A89B0)
#define LMKECAPDMAC_OFGOLAEELNP_OFFSET UNITYSDK_OFFSET(0x1E9A84D0)
#define LMKECAPDMAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A83D0)
#define LMKECAPDMAC_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E9A84C0)
#define LMKECAPDMAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A8690)
#define LMKECAPDMAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A86F0)

inline static constexpr unsigned int LMKECAPDMAC_TypeDefinitionIndex = 34716;

	class LMKECAPDMAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 DIHAPDNPDHC; // 0x1C
		::System::UInt32 GGOLOPJCHOK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LMKECAPDMAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMKECAPDMAC*>**)UnitySDK::FromName("", "LMKECAPDMAC")->GetStaticField(0x11910);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object OHMMOKDEBBP; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMKECAPDMAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKECAPDMAC*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKECAPDMAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMKECAPDMAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMKECAPDMAC*>*(*)())((::PBYTE)hIl2Cpp + LMKECAPDMAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMKECAPDMAC* Clone()
		{
			return ((::LMKECAPDMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKECAPDMAC_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 OFGOLAEELNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_OFGOLAEELNP_OFFSET))(this);
		}

		::System::Void KACHGJNOBCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKECAPDMAC_KACHGJNOBCO_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKECAPDMAC_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMKECAPDMAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMKECAPDMAC*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMKECAPDMAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKECAPDMAC*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMKECAPDMAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
