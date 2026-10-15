#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBLONDAEJMC;
class PGMIABHEJNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBLONDAEJMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30BD90)
#define FBLONDAEJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30C0C0)
#define FBLONDAEJMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30B770)
#define FBLONDAEJMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30B700)
#define FBLONDAEJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30B6F0)
#define FBLONDAEJMC_EHDMHDJPPMH_OFFSET UNITYSDK_OFFSET(0x1E30B800)
#define FBLONDAEJMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30B980)
#define FBLONDAEJMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30B810)
#define FBLONDAEJMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30BC50)
#define FBLONDAEJMC_JELLEBGLNEP_OFFSET UNITYSDK_OFFSET(0x1E30B7F0)
#define FBLONDAEJMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30B6B0)
#define FBLONDAEJMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30BEF0)
#define FBLONDAEJMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30BDF0)
#define FBLONDAEJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30B6E0)
#define FBLONDAEJMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30BCA0)
#define FBLONDAEJMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30BD00)

inline static constexpr unsigned int FBLONDAEJMC_TypeDefinitionIndex = 33154;

	class FBLONDAEJMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PGMIABHEJNB* NGNMODBMOHK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBLONDAEJMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBLONDAEJMC*>**)UnitySDK::FromName("", "FBLONDAEJMC")->GetStaticField(0x4ECE0);
		}

		// static const ::System::Object CICDCBECKHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBLONDAEJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBLONDAEJMC*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLONDAEJMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBLONDAEJMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBLONDAEJMC*>*(*)())((::PBYTE)hIl2Cpp + FBLONDAEJMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBLONDAEJMC* Clone()
		{
			return ((::FBLONDAEJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_CLONE_OFFSET))(this);
		}

		::PGMIABHEJNB* JELLEBGLNEP()
		{
			return ((::PGMIABHEJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_JELLEBGLNEP_OFFSET))(this);
		}

		::System::Void EHDMHDJPPMH(::PGMIABHEJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGMIABHEJNB*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_EHDMHDJPPMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBLONDAEJMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBLONDAEJMC*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBLONDAEJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBLONDAEJMC*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBLONDAEJMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
