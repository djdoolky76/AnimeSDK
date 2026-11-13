#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOMOHEJBLNN.h"
#include "unitysdk/KPJMJPKBLME.h"
#include "unitysdk/System/Object.h"
class NPDKKNACMHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPDKKNACMHC_BHDFELGFFOH_OFFSET UNITYSDK_OFFSET(0x1FB78EE0)
#define NPDKKNACMHC_BPLKBEDGCML_OFFSET UNITYSDK_OFFSET(0x1FB78EF0)
#define NPDKKNACMHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB79370)
#define NPDKKNACMHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB796B0)
#define NPDKKNACMHC_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1FB78F00)
#define NPDKKNACMHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB78E60)
#define NPDKKNACMHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB78E10)
#define NPDKKNACMHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB78E00)
#define NPDKKNACMHC_DJGNCDFDDGI_OFFSET UNITYSDK_OFFSET(0x1FB78EC0)
#define NPDKKNACMHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB78FD0)
#define NPDKKNACMHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB78F60)
#define NPDKKNACMHC_GDNFNCJPDKD_OFFSET UNITYSDK_OFFSET(0x1FB78F40)
#define NPDKKNACMHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB79030)
#define NPDKKNACMHC_ILJANLIPIKB_OFFSET UNITYSDK_OFFSET(0x1FB78F50)
#define NPDKKNACMHC_INLHCOHANHO_OFFSET UNITYSDK_OFFSET(0x1FB78F20)
#define NPDKKNACMHC_JIOFPKIECOI_OFFSET UNITYSDK_OFFSET(0x1FB78ED0)
#define NPDKKNACMHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB78DC0)
#define NPDKKNACMHC_JJIJENBIGCB_OFFSET UNITYSDK_OFFSET(0x1FB78F30)
#define NPDKKNACMHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB795F0)
#define NPDKKNACMHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB79590)
#define NPDKKNACMHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB78DF0)
#define NPDKKNACMHC_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1FB78F10)
#define NPDKKNACMHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB79070)
#define NPDKKNACMHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB790D0)

inline static constexpr unsigned int NPDKKNACMHC_TypeDefinitionIndex = 30636;

	class NPDKKNACMHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNIPIFDDAAE; // 0x18
		::System::Boolean IMNAMFEELNF; // 0x1C
		::System::Boolean NECCNJOHMLK; // 0x1D
		::System::Byte _padding0[0x2];
		::KPJMJPKBLME FCKOIACJLLE; // 0x20
		::HOMOHEJBLNN OCHHDKGKECF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::NPDKKNACMHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPDKKNACMHC*>**)UnitySDK::FromName("", "NPDKKNACMHC")->GetStaticField(0x15780);
		}

		// static const ::System::Object MOFMFHINLIG; // 0x0
		// static const ::System::Object NEHCICDGCGI; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object MMPGAHMIIPN; // 0x0
		// static const ::System::Object IGPKMMEIDAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPDKKNACMHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPDKKNACMHC*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPDKKNACMHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPDKKNACMHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPDKKNACMHC*>*(*)())((::PBYTE)hIl2Cpp + NPDKKNACMHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPDKKNACMHC* Clone()
		{
			return ((::NPDKKNACMHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_CLONE_OFFSET))(this);
		}

		::KPJMJPKBLME DJGNCDFDDGI()
		{
			return ((::KPJMJPKBLME(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_DJGNCDFDDGI_OFFSET))(this);
		}

		::System::Void JIOFPKIECOI(::KPJMJPKBLME a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJMJPKBLME))((::PBYTE)hIl2Cpp + NPDKKNACMHC_JIOFPKIECOI_OFFSET))(this, a1);
		}

		::System::Boolean BHDFELGFFOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_BHDFELGFFOH_OFFSET))(this);
		}

		::System::Void BPLKBEDGCML(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPDKKNACMHC_BPLKBEDGCML_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPDKKNACMHC_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean INLHCOHANHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_INLHCOHANHO_OFFSET))(this);
		}

		::System::Void JJIJENBIGCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPDKKNACMHC_JJIJENBIGCB_OFFSET))(this, a1);
		}

		::HOMOHEJBLNN GDNFNCJPDKD()
		{
			return ((::HOMOHEJBLNN(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_GDNFNCJPDKD_OFFSET))(this);
		}

		::System::Void ILJANLIPIKB(::HOMOHEJBLNN a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOMOHEJBLNN))((::PBYTE)hIl2Cpp + NPDKKNACMHC_ILJANLIPIKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPDKKNACMHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPDKKNACMHC*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPDKKNACMHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPDKKNACMHC*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPDKKNACMHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
