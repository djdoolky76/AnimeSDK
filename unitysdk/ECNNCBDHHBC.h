#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class ECNNCBDHHBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECNNCBDHHBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E257130)
#define ECNNCBDHHBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E257450)
#define ECNNCBDHHBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E256B90)
#define ECNNCBDHHBC_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E256C40)
#define ECNNCBDHHBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E256B20)
#define ECNNCBDHHBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E256B10)
#define ECNNCBDHHBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E256DD0)
#define ECNNCBDHHBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E256C50)
#define ECNNCBDHHBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E256F50)
#define ECNNCBDHHBC_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E256C30)
#define ECNNCBDHHBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E256AD0)
#define ECNNCBDHHBC_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E256C10)
#define ECNNCBDHHBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E257290)
#define ECNNCBDHHBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E257200)
#define ECNNCBDHHBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E256B00)
#define ECNNCBDHHBC_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E256C20)
#define ECNNCBDHHBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E256FF0)
#define ECNNCBDHHBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E257050)

inline static constexpr unsigned int ECNNCBDHHBC_TypeDefinitionIndex = 30110;

	class ECNNCBDHHBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 MFMHPDFMGIN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ECNNCBDHHBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECNNCBDHHBC*>**)UnitySDK::FromName("", "ECNNCBDHHBC")->GetStaticField(0x3EE00);
		}

		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECNNCBDHHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNNCBDHHBC*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECNNCBDHHBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECNNCBDHHBC*>*(*)())((::PBYTE)hIl2Cpp + ECNNCBDHHBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECNNCBDHHBC* Clone()
		{
			return ((::ECNNCBDHHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECNNCBDHHBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNNCBDHHBC*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECNNCBDHHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNNCBDHHBC*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECNNCBDHHBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
