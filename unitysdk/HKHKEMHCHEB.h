#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKHKEMHCHEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKHKEMHCHEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B27D0)
#define HKHKEMHCHEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2AA0)
#define HKHKEMHCHEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B23D0)
#define HKHKEMHCHEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B23A0)
#define HKHKEMHCHEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2390)
#define HKHKEMHCHEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B2590)
#define HKHKEMHCHEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B2480)
#define HKHKEMHCHEB_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E5B2470)
#define HKHKEMHCHEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B2660)
#define HKHKEMHCHEB_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1E5B2450)
#define HKHKEMHCHEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B2320)
#define HKHKEMHCHEB_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1E5B2440)
#define HKHKEMHCHEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B2920)
#define HKHKEMHCHEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B28E0)
#define HKHKEMHCHEB_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E5B2460)
#define HKHKEMHCHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2380)
#define HKHKEMHCHEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B2690)
#define HKHKEMHCHEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B26F0)

inline static constexpr unsigned int HKHKEMHCHEB_TypeDefinitionIndex = 28235;

	class HKHKEMHCHEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HMPAFLDIPPB; // 0x18
		::System::UInt32 AFFBGDFNCBG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKHKEMHCHEB")->GetStaticField(0x455F0);
		}

		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKHKEMHCHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKHKEMHCHEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKHKEMHCHEB* Clone()
		{
			return ((::HKHKEMHCHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_GJIBPKKENEO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKHKEMHCHEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKHKEMHCHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
