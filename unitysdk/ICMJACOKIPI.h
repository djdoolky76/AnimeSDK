#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICMJACOKIPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICMJACOKIPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F8820)
#define ICMJACOKIPI_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E5F8400)
#define ICMJACOKIPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8B20)
#define ICMJACOKIPI_CLJNHOHHGNH_OFFSET UNITYSDK_OFFSET(0x1E5F8460)
#define ICMJACOKIPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F8390)
#define ICMJACOKIPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F8360)
#define ICMJACOKIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8350)
#define ICMJACOKIPI_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E5F8410)
#define ICMJACOKIPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F8510)
#define ICMJACOKIPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F8480)
#define ICMJACOKIPI_FCMJGOJNBLG_OFFSET UNITYSDK_OFFSET(0x1E5F8470)
#define ICMJACOKIPI_FLOOPGFPHDD_OFFSET UNITYSDK_OFFSET(0x1E5F8420)
#define ICMJACOKIPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F85F0)
#define ICMJACOKIPI_HFOKLPOEFJM_OFFSET UNITYSDK_OFFSET(0x1E5F8450)
#define ICMJACOKIPI_HMPGKPMHEDF_OFFSET UNITYSDK_OFFSET(0x1E5F8440)
#define ICMJACOKIPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F82E0)
#define ICMJACOKIPI_MBHGDJOJCLL_OFFSET UNITYSDK_OFFSET(0x1E5F8430)
#define ICMJACOKIPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F8A80)
#define ICMJACOKIPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F8A30)
#define ICMJACOKIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8340)
#define ICMJACOKIPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F8630)
#define ICMJACOKIPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F8690)

inline static constexpr unsigned int ICMJACOKIPI_TypeDefinitionIndex = 26982;

	class ICMJACOKIPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JGBDLDKPNCN; // 0x18
		::System::UInt32 NBFPOGFBMFE; // 0x1C
		::System::UInt32 OIJAOMMHCDA; // 0x20
		::System::UInt32 HHLEBGEAGOI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::ICMJACOKIPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICMJACOKIPI*>**)UnitySDK::FromName("", "ICMJACOKIPI")->GetStaticField(0x23750);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object OEHFFJKNOAB; // 0x0
		// static const ::System::Object HLMDHFNCJGJ; // 0x0
		// static const ::System::Object HODNKPGFDEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICMJACOKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICMJACOKIPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICMJACOKIPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICMJACOKIPI*>*(*)())((::PBYTE)hIl2Cpp + ICMJACOKIPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICMJACOKIPI* Clone()
		{
			return ((::ICMJACOKIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICMJACOKIPI_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 FLOOPGFPHDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_FLOOPGFPHDD_OFFSET))(this);
		}

		::System::Void MBHGDJOJCLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICMJACOKIPI_MBHGDJOJCLL_OFFSET))(this, a1);
		}

		::System::UInt32 HMPGKPMHEDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_HMPGKPMHEDF_OFFSET))(this);
		}

		::System::Void HFOKLPOEFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICMJACOKIPI_HFOKLPOEFJM_OFFSET))(this, a1);
		}

		::System::UInt32 CLJNHOHHGNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CLJNHOHHGNH_OFFSET))(this);
		}

		::System::Void FCMJGOJNBLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICMJACOKIPI_FCMJGOJNBLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICMJACOKIPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICMJACOKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICMJACOKIPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
