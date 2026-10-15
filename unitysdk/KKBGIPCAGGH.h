#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPENACKJJE;
class KKBGIPCAGGH;
class PNAKHANCNGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKBGIPCAGGH_AEPPMKNDDKP_OFFSET UNITYSDK_OFFSET(0x1E847E50)
#define KKBGIPCAGGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E848400)
#define KKBGIPCAGGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E848930)
#define KKBGIPCAGGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E847E00)
#define KKBGIPCAGGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E847CD0)
#define KKBGIPCAGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E847C80)
#define KKBGIPCAGGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E847F40)
#define KKBGIPCAGGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E847EE0)
#define KKBGIPCAGGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8480A0)
#define KKBGIPCAGGH_HPENLAEEHNP_OFFSET UNITYSDK_OFFSET(0x1E847E70)
#define KKBGIPCAGGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E847C10)
#define KKBGIPCAGGH_JMCEEFDPBME_OFFSET UNITYSDK_OFFSET(0x1E847E90)
#define KKBGIPCAGGH_KGIPMPKCEMC_OFFSET UNITYSDK_OFFSET(0x1E847ED0)
#define KKBGIPCAGGH_LCLBNLJMJIF_OFFSET UNITYSDK_OFFSET(0x1E847E60)
#define KKBGIPCAGGH_LHFDPLCJDMK_OFFSET UNITYSDK_OFFSET(0x1E847E80)
#define KKBGIPCAGGH_MDEDPLLJAIK_OFFSET UNITYSDK_OFFSET(0x1E847EA0)
#define KKBGIPCAGGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E848790)
#define KKBGIPCAGGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E848640)
#define KKBGIPCAGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E847C70)
#define KKBGIPCAGGH_PCMLMMJNPHJ_OFFSET UNITYSDK_OFFSET(0x1E847EB0)
#define KKBGIPCAGGH_PKJJFIAKIMP_OFFSET UNITYSDK_OFFSET(0x1E847EC0)
#define KKBGIPCAGGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E848180)
#define KKBGIPCAGGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8481E0)

inline static constexpr unsigned int KKBGIPCAGGH_TypeDefinitionIndex = 29211;

	class KKBGIPCAGGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PNAKHANCNGK*>* EMGPLPNHBHF; // 0x18
		::CLPENACKJJE* LJOKJJDCFHG; // 0x20
		::System::UInt32 DDKGLOFJIHH; // 0x28
		::System::UInt32 PANBGEDCMCH; // 0x2C
		::System::UInt32 KDCDJDFHIPP; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::PNAKHANCNGK*>** StaticGet_NFLBMIGIJHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::PNAKHANCNGK*>**)UnitySDK::FromName("", "KKBGIPCAGGH")->GetStaticField(0x1B8C0);
		}

		static ::Google::Protobuf::MessageParser_1<::KKBGIPCAGGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KKBGIPCAGGH*>**)UnitySDK::FromName("", "KKBGIPCAGGH")->GetStaticField(0x1B8C8);
		}

		// static const ::System::Object KKCONCGOIFD; // 0x0
		// static const ::System::Object BJHAJEEFLDB; // 0x0
		// static const ::System::Object GMFKJGKBPBG; // 0x0
		// static const ::System::Object DGKMPBJIIOB; // 0x0
		// static const ::System::Object LCJCDPMKOBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKBGIPCAGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKBGIPCAGGH*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKBGIPCAGGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KKBGIPCAGGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KKBGIPCAGGH*>*(*)())((::PBYTE)hIl2Cpp + KKBGIPCAGGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKBGIPCAGGH* Clone()
		{
			return ((::KKBGIPCAGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AEPPMKNDDKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_AEPPMKNDDKP_OFFSET))(this);
		}

		::System::Void LCLBNLJMJIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_LCLBNLJMJIF_OFFSET))(this, a1);
		}

		::System::UInt32 HPENLAEEHNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_HPENLAEEHNP_OFFSET))(this);
		}

		::System::Void LHFDPLCJDMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_LHFDPLCJDMK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PNAKHANCNGK*>* JMCEEFDPBME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PNAKHANCNGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_JMCEEFDPBME_OFFSET))(this);
		}

		::System::UInt32 MDEDPLLJAIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_MDEDPLLJAIK_OFFSET))(this);
		}

		::System::Void PCMLMMJNPHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_PCMLMMJNPHJ_OFFSET))(this, a1);
		}

		::CLPENACKJJE* PKJJFIAKIMP()
		{
			return ((::CLPENACKJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_PKJJFIAKIMP_OFFSET))(this);
		}

		::System::Void KGIPMPKCEMC(::CLPENACKJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPENACKJJE*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_KGIPMPKCEMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKBGIPCAGGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKBGIPCAGGH*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKBGIPCAGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKBGIPCAGGH*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKBGIPCAGGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
