#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC.h"
#include "unitysdk/System/Object.h"
class DPMFDKPNHDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPMFDKPNHDA_ANIKNPPGIDE_OFFSET UNITYSDK_OFFSET(0x1F4FBA40)
#define DPMFDKPNHDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4FBDF0)
#define DPMFDKPNHDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4FC050)
#define DPMFDKPNHDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4FB9C0)
#define DPMFDKPNHDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4FB990)
#define DPMFDKPNHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FB980)
#define DPMFDKPNHDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4FBB50)
#define DPMFDKPNHDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4FBA50)
#define DPMFDKPNHDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4FBCC0)
#define DPMFDKPNHDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4FB910)
#define DPMFDKPNHDA_LBFJLDGLNBI_OFFSET UNITYSDK_OFFSET(0x1F4FBA30)
#define DPMFDKPNHDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4FBEF0)
#define DPMFDKPNHDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4FBEC0)
#define DPMFDKPNHDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4FB970)
#define DPMFDKPNHDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4FBCF0)
#define DPMFDKPNHDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4FBD50)

inline static constexpr unsigned int DPMFDKPNHDA_TypeDefinitionIndex = 30612;

	class DPMFDKPNHDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC KLKLECBGCAD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DPMFDKPNHDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPMFDKPNHDA*>**)UnitySDK::FromName("", "DPMFDKPNHDA")->GetStaticField(0x42830);
		}

		// static const ::System::Object IPPEKMLENLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPMFDKPNHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPMFDKPNHDA*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMFDKPNHDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPMFDKPNHDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPMFDKPNHDA*>*(*)())((::PBYTE)hIl2Cpp + DPMFDKPNHDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPMFDKPNHDA* Clone()
		{
			return ((::DPMFDKPNHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_CLONE_OFFSET))(this);
		}

		::DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC LBFJLDGLNBI()
		{
			return ((::DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_LBFJLDGLNBI_OFFSET))(this);
		}

		::System::Void ANIKNPPGIDE(::DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPMFDKPNHDA_PBJEJCCFNDG_PBNJKJBIHKC))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_ANIKNPPGIDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPMFDKPNHDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPMFDKPNHDA*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPMFDKPNHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPMFDKPNHDA*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPMFDKPNHDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
