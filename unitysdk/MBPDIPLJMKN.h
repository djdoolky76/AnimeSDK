#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPDIPLJMKN_GBDJDHDCBNO.h"
#include "unitysdk/System/Object.h"
class ELGLKEAPLGM;
class MBPDIPLJMKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBPDIPLJMKN_AKOMDELNBNA_OFFSET UNITYSDK_OFFSET(0x1E9C2030)
#define MBPDIPLJMKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C2490)
#define MBPDIPLJMKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C28F0)
#define MBPDIPLJMKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C1FE0)
#define MBPDIPLJMKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C1E80)
#define MBPDIPLJMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1E70)
#define MBPDIPLJMKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C20B0)
#define MBPDIPLJMKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C2050)
#define MBPDIPLJMKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C22C0)
#define MBPDIPLJMKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C1E00)
#define MBPDIPLJMKN_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1E9C1FC0)
#define MBPDIPLJMKN_LFBLAMICPJK_OFFSET UNITYSDK_OFFSET(0x1E9C2040)
#define MBPDIPLJMKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C26B0)
#define MBPDIPLJMKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C2530)
#define MBPDIPLJMKN_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1E9C1F60)
#define MBPDIPLJMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1E60)
#define MBPDIPLJMKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C2360)
#define MBPDIPLJMKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C23C0)

inline static constexpr unsigned int MBPDIPLJMKN_TypeDefinitionIndex = 29183;

	class MBPDIPLJMKN : public ::System::Object
	{
	public:
		::System::Object* PMNOHALFBLB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MBPDIPLJMKN_GBDJDHDCBNO JKMNENBMFMJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MBPDIPLJMKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBPDIPLJMKN*>**)UnitySDK::FromName("", "MBPDIPLJMKN")->GetStaticField(0x2AA50);
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

		static ::Google::Protobuf::MessageParser_1<::MBPDIPLJMKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBPDIPLJMKN*>*(*)())((::PBYTE)hIl2Cpp + MBPDIPLJMKN_JJGHOBBFNJD_OFFSET))();
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
