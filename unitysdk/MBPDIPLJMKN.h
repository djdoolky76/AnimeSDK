#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPDIPLJMKN_GBDJDHDCBNO.h"
#include "unitysdk/System/Object.h"
class ELGLKEAPLGM;
class MBPDIPLJMKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBPDIPLJMKN_AKOMDELNBNA_OFFSET UNITYSDK_OFFSET(0x1E9EF6F0)
#define MBPDIPLJMKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EFB50)
#define MBPDIPLJMKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EFFB0)
#define MBPDIPLJMKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EF6A0)
#define MBPDIPLJMKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EF540)
#define MBPDIPLJMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF530)
#define MBPDIPLJMKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EF770)
#define MBPDIPLJMKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EF710)
#define MBPDIPLJMKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EF980)
#define MBPDIPLJMKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EF4C0)
#define MBPDIPLJMKN_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1E9EF680)
#define MBPDIPLJMKN_LFBLAMICPJK_OFFSET UNITYSDK_OFFSET(0x1E9EF700)
#define MBPDIPLJMKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EFD70)
#define MBPDIPLJMKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EFBF0)
#define MBPDIPLJMKN_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1E9EF620)
#define MBPDIPLJMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF520)
#define MBPDIPLJMKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EFA20)
#define MBPDIPLJMKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EFA80)

	class MBPDIPLJMKN : public ::System::Object
	{
	public:
		::System::Object* PMNOHALFBLB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MBPDIPLJMKN_GBDJDHDCBNO JKMNENBMFMJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MBPDIPLJMKN")->GetStaticField(0x2FA40);
		}

		// static const ::System::Object PEFBHJBLDLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBPDIPLJMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPDIPLJMKN*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPDIPLJMKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MBPDIPLJMKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBPDIPLJMKN* Clone()
		{
			return ((::MBPDIPLJMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_CLONE_OFFSET))(this);
		}

		::ELGLKEAPLGM* ODEGHBCBLEG()
		{
			return ((::ELGLKEAPLGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_ODEGHBCBLEG_OFFSET))(this);
		}

		::System::Void KMKINFNDDJE(::ELGLKEAPLGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELGLKEAPLGM*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_KMKINFNDDJE_OFFSET))(this, a1);
		}

		::MBPDIPLJMKN_GBDJDHDCBNO AKOMDELNBNA()
		{
			return ((::MBPDIPLJMKN_GBDJDHDCBNO(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_AKOMDELNBNA_OFFSET))(this);
		}

		::System::Void LFBLAMICPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_LFBLAMICPJK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBPDIPLJMKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBPDIPLJMKN*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBPDIPLJMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPDIPLJMKN*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBPDIPLJMKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
