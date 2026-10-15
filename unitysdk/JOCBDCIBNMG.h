#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class JOCBDCIBNMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOCBDCIBNMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E76D570)
#define JOCBDCIBNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76D890)
#define JOCBDCIBNMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E76CFD0)
#define JOCBDCIBNMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E76CF60)
#define JOCBDCIBNMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76CF50)
#define JOCBDCIBNMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E76D210)
#define JOCBDCIBNMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E76D090)
#define JOCBDCIBNMG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E76D080)
#define JOCBDCIBNMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76D390)
#define JOCBDCIBNMG_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1E76D060)
#define JOCBDCIBNMG_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1E76D050)
#define JOCBDCIBNMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E76CF10)
#define JOCBDCIBNMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E76D6D0)
#define JOCBDCIBNMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E76D640)
#define JOCBDCIBNMG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E76D070)
#define JOCBDCIBNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E76CF40)
#define JOCBDCIBNMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76D430)
#define JOCBDCIBNMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E76D490)

inline static constexpr unsigned int JOCBDCIBNMG_TypeDefinitionIndex = 32776;

	class JOCBDCIBNMG : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>**)UnitySDK::FromName("", "JOCBDCIBNMG")->GetStaticField(0x684E0);
		}

		// static const ::System::Object KIAJFAMLJEG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOCBDCIBNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>*(*)())((::PBYTE)hIl2Cpp + JOCBDCIBNMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOCBDCIBNMG* Clone()
		{
			return ((::JOCBDCIBNMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CLONE_OFFSET))(this);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOCBDCIBNMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOCBDCIBNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
