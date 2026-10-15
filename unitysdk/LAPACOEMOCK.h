#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPACOEMOCK;
class NCFKHDIKCNI;
class OJHHACMHFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAPACOEMOCK_ABGGICDBEKG_OFFSET UNITYSDK_OFFSET(0x1E8A6510)
#define LAPACOEMOCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A6C50)
#define LAPACOEMOCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7080)
#define LAPACOEMOCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A6490)
#define LAPACOEMOCK_CMKNFNLPEEN_OFFSET UNITYSDK_OFFSET(0x1E8A64F0)
#define LAPACOEMOCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A63B0)
#define LAPACOEMOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A63A0)
#define LAPACOEMOCK_DDHAHLJBKEI_OFFSET UNITYSDK_OFFSET(0x1E8A64E0)
#define LAPACOEMOCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A66E0)
#define LAPACOEMOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A6540)
#define LAPACOEMOCK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8A6530)
#define LAPACOEMOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A6910)
#define LAPACOEMOCK_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1E8A64C0)
#define LAPACOEMOCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A6360)
#define LAPACOEMOCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A6F40)
#define LAPACOEMOCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A6DE0)
#define LAPACOEMOCK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8A6520)
#define LAPACOEMOCK_OEEDGFFEMKE_OFFSET UNITYSDK_OFFSET(0x1E8A6500)
#define LAPACOEMOCK_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1E8A64D0)
#define LAPACOEMOCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6390)
#define LAPACOEMOCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A6A60)
#define LAPACOEMOCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A6AC0)

inline static constexpr unsigned int LAPACOEMOCK_TypeDefinitionIndex = 32000;

	class LAPACOEMOCK : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* CPBIHOFBCGI; // 0x10
		::OJHHACMHFKA* IANPHEMCHDG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 EJAIFMMHLFK; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::LAPACOEMOCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAPACOEMOCK*>**)UnitySDK::FromName("", "LAPACOEMOCK")->GetStaticField(0x251B0);
		}

		// static const ::System::Object CLMHGEKEEOH; // 0x0
		// static const ::System::Object OBOLMHIMIOP; // 0x0
		// static const ::System::Object IMNNKNAKABI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAPACOEMOCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPACOEMOCK*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPACOEMOCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAPACOEMOCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAPACOEMOCK*>*(*)())((::PBYTE)hIl2Cpp + LAPACOEMOCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAPACOEMOCK* Clone()
		{
			return ((::LAPACOEMOCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_CLONE_OFFSET))(this);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_PAGHNFFHKEO_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* DDHAHLJBKEI()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_DDHAHLJBKEI_OFFSET))(this);
		}

		::System::Void CMKNFNLPEEN(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_CMKNFNLPEEN_OFFSET))(this, a1);
		}

		::System::UInt32 OEEDGFFEMKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_OEEDGFFEMKE_OFFSET))(this);
		}

		::System::Void ABGGICDBEKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAPACOEMOCK_ABGGICDBEKG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAPACOEMOCK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAPACOEMOCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAPACOEMOCK*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAPACOEMOCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPACOEMOCK*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAPACOEMOCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
