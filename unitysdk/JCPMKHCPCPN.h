#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCPMKHCPCPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCPMKHCPCPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7058E0)
#define JCPMKHCPCPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E705BB0)
#define JCPMKHCPCPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7054E0)
#define JCPMKHCPCPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7054B0)
#define JCPMKHCPCPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7054A0)
#define JCPMKHCPCPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7056A0)
#define JCPMKHCPCPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E705590)
#define JCPMKHCPCPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E705770)
#define JCPMKHCPCPN_GHNLGNKCBMF_OFFSET UNITYSDK_OFFSET(0x1E705560)
#define JCPMKHCPCPN_HLHIOHNFHJL_OFFSET UNITYSDK_OFFSET(0x1E705570)
#define JCPMKHCPCPN_IFBPONHEOGJ_OFFSET UNITYSDK_OFFSET(0x1E705550)
#define JCPMKHCPCPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E705430)
#define JCPMKHCPCPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E705A30)
#define JCPMKHCPCPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7059F0)
#define JCPMKHCPCPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E705490)
#define JCPMKHCPCPN_POMOKOPBFGC_OFFSET UNITYSDK_OFFSET(0x1E705580)
#define JCPMKHCPCPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7057A0)
#define JCPMKHCPCPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E705800)

inline static constexpr unsigned int JCPMKHCPCPN_TypeDefinitionIndex = 34714;

	class JCPMKHCPCPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNHACHAMAFK; // 0x18
		::System::UInt32 GGJAPMLMIAB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JCPMKHCPCPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCPMKHCPCPN*>**)UnitySDK::FromName("", "JCPMKHCPCPN")->GetStaticField(0x5D9D0);
		}

		// static const ::System::Object FDFBMCEPCKI; // 0x0
		// static const ::System::Object BANDKNDILMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCPMKHCPCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCPMKHCPCPN*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCPMKHCPCPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JCPMKHCPCPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCPMKHCPCPN*>*(*)())((::PBYTE)hIl2Cpp + JCPMKHCPCPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCPMKHCPCPN* Clone()
		{
			return ((::JCPMKHCPCPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IFBPONHEOGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_IFBPONHEOGJ_OFFSET))(this);
		}

		::System::Void GHNLGNKCBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_GHNLGNKCBMF_OFFSET))(this, a1);
		}

		::System::UInt32 HLHIOHNFHJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_HLHIOHNFHJL_OFFSET))(this);
		}

		::System::Void POMOKOPBFGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_POMOKOPBFGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCPMKHCPCPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCPMKHCPCPN*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCPMKHCPCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCPMKHCPCPN*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCPMKHCPCPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
