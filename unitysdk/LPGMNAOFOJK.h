#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKFMGCNDHGH;
class LPGMNAOFOJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPGMNAOFOJK_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E9CCB10)
#define LPGMNAOFOJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CD030)
#define LPGMNAOFOJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CD3D0)
#define LPGMNAOFOJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CCA70)
#define LPGMNAOFOJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CC9E0)
#define LPGMNAOFOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CC9D0)
#define LPGMNAOFOJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CCCD0)
#define LPGMNAOFOJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CCB50)
#define LPGMNAOFOJK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9CCB40)
#define LPGMNAOFOJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CCE50)
#define LPGMNAOFOJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CC990)
#define LPGMNAOFOJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CD1E0)
#define LPGMNAOFOJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CD100)
#define LPGMNAOFOJK_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E9CCB20)
#define LPGMNAOFOJK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9CCB30)
#define LPGMNAOFOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CC9C0)
#define LPGMNAOFOJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CCEF0)
#define LPGMNAOFOJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CCF50)

inline static constexpr unsigned int LPGMNAOFOJK_TypeDefinitionIndex = 28115;

	class LPGMNAOFOJK : public ::System::Object
	{
	public:
		::KKFMGCNDHGH* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LPGMNAOFOJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPGMNAOFOJK*>**)UnitySDK::FromName("", "LPGMNAOFOJK")->GetStaticField(0x41B10);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPGMNAOFOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPGMNAOFOJK*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGMNAOFOJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPGMNAOFOJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPGMNAOFOJK*>*(*)())((::PBYTE)hIl2Cpp + LPGMNAOFOJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPGMNAOFOJK* Clone()
		{
			return ((::LPGMNAOFOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_CLONE_OFFSET))(this);
		}

		::KKFMGCNDHGH* ANALOEDDDHD()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPGMNAOFOJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPGMNAOFOJK*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPGMNAOFOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPGMNAOFOJK*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPGMNAOFOJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
