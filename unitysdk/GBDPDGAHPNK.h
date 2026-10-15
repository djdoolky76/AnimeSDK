#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AACJBNFGABA;
class GBDPDGAHPNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBDPDGAHPNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E429170)
#define GBDPDGAHPNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E429510)
#define GBDPDGAHPNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E428BD0)
#define GBDPDGAHPNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E428B50)
#define GBDPDGAHPNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E428B40)
#define GBDPDGAHPNK_DIBGANDJGCM_OFFSET UNITYSDK_OFFSET(0x1E428C80)
#define GBDPDGAHPNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E428E20)
#define GBDPDGAHPNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E428CA0)
#define GBDPDGAHPNK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E428C70)
#define GBDPDGAHPNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E428FA0)
#define GBDPDGAHPNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E428B00)
#define GBDPDGAHPNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E429320)
#define GBDPDGAHPNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E429240)
#define GBDPDGAHPNK_NGKCBDDHINI_OFFSET UNITYSDK_OFFSET(0x1E428C90)
#define GBDPDGAHPNK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E428C60)
#define GBDPDGAHPNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E428B30)
#define GBDPDGAHPNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E429030)
#define GBDPDGAHPNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E429090)

inline static constexpr unsigned int GBDPDGAHPNK_TypeDefinitionIndex = 27369;

	class GBDPDGAHPNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AACJBNFGABA* JGOHIDJBGHG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBDPDGAHPNK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBDPDGAHPNK*>**)UnitySDK::FromName("", "GBDPDGAHPNK")->GetStaticField(0xCC60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HHMGEGKPFKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBDPDGAHPNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBDPDGAHPNK*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBDPDGAHPNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBDPDGAHPNK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBDPDGAHPNK*>*(*)())((::PBYTE)hIl2Cpp + GBDPDGAHPNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBDPDGAHPNK* Clone()
		{
			return ((::GBDPDGAHPNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::AACJBNFGABA* DIBGANDJGCM()
		{
			return ((::AACJBNFGABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_DIBGANDJGCM_OFFSET))(this);
		}

		::System::Void NGKCBDDHINI(::AACJBNFGABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AACJBNFGABA*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_NGKCBDDHINI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBDPDGAHPNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBDPDGAHPNK*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBDPDGAHPNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBDPDGAHPNK*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBDPDGAHPNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
