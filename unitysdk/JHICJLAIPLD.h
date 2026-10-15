#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHICJLAIPLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHICJLAIPLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7468B0)
#define JHICJLAIPLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E746B80)
#define JHICJLAIPLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E746500)
#define JHICJLAIPLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7464D0)
#define JHICJLAIPLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7464C0)
#define JHICJLAIPLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E746670)
#define JHICJLAIPLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E746590)
#define JHICJLAIPLD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E746560)
#define JHICJLAIPLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E746740)
#define JHICJLAIPLD_HEODJHKCJEK_OFFSET UNITYSDK_OFFSET(0x1E746570)
#define JHICJLAIPLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E746480)
#define JHICJLAIPLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E746A00)
#define JHICJLAIPLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7469C0)
#define JHICJLAIPLD_NICNFPBPKGF_OFFSET UNITYSDK_OFFSET(0x1E746580)
#define JHICJLAIPLD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E746550)
#define JHICJLAIPLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7464B0)
#define JHICJLAIPLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E746770)
#define JHICJLAIPLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7467D0)

inline static constexpr unsigned int JHICJLAIPLD_TypeDefinitionIndex = 30408;

	class JHICJLAIPLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 HFEEJACECOM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JHICJLAIPLD")->GetStaticField(0x61240);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JDKBOJADCKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHICJLAIPLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHICJLAIPLD*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHICJLAIPLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JHICJLAIPLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHICJLAIPLD* Clone()
		{
			return ((::JHICJLAIPLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHICJLAIPLD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 HEODJHKCJEK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_HEODJHKCJEK_OFFSET))(this);
		}

		::System::Void NICNFPBPKGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHICJLAIPLD_NICNFPBPKGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHICJLAIPLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHICJLAIPLD*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHICJLAIPLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHICJLAIPLD*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHICJLAIPLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
