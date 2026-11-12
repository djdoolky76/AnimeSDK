#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAMIICJDOBO_KCLMEEMMMAM.h"
#include "unitysdk/System/Object.h"
class CAMIICJDOBO;
class EFIEAIJBHIB;
class MLAENDOFBCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAMIICJDOBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3210E0)
#define CAMIICJDOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3217E0)
#define CAMIICJDOBO_CIBNFJCMBHH_OFFSET UNITYSDK_OFFSET(0x1F320900)
#define CAMIICJDOBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F320A00)
#define CAMIICJDOBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F320780)
#define CAMIICJDOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F320770)
#define CAMIICJDOBO_DOFJGIMGDCK_OFFSET UNITYSDK_OFFSET(0x1F320A60)
#define CAMIICJDOBO_EKMEJKCLBOK_OFFSET UNITYSDK_OFFSET(0x1F3209E0)
#define CAMIICJDOBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F320AD0)
#define CAMIICJDOBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F320A70)
#define CAMIICJDOBO_FKJLFMBEHBA_OFFSET UNITYSDK_OFFSET(0x1F320980)
#define CAMIICJDOBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F320E20)
#define CAMIICJDOBO_ILLPDBCNCOB_OFFSET UNITYSDK_OFFSET(0x1F320960)
#define CAMIICJDOBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F320700)
#define CAMIICJDOBO_LODKJOJJLEH_OFFSET UNITYSDK_OFFSET(0x1F320A50)
#define CAMIICJDOBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3214E0)
#define CAMIICJDOBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F321230)
#define CAMIICJDOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F320760)
#define CAMIICJDOBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F320F20)
#define CAMIICJDOBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F320F80)

inline static constexpr unsigned int CAMIICJDOBO_TypeDefinitionIndex = 30627;

	class CAMIICJDOBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* EBHOHHBEMDA; // 0x18
		::CAMIICJDOBO_KCLMEEMMMAM MKFJGPAMOCF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CAMIICJDOBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAMIICJDOBO*>**)UnitySDK::FromName("", "CAMIICJDOBO")->GetStaticField(0x58AA0);
		}

		// static const ::System::Object BJKHPFBOION; // 0x0
		// static const ::System::Object HOJFGCPEJBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAMIICJDOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAMIICJDOBO*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAMIICJDOBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAMIICJDOBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAMIICJDOBO*>*(*)())((::PBYTE)hIl2Cpp + CAMIICJDOBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAMIICJDOBO* Clone()
		{
			return ((::CAMIICJDOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_CLONE_OFFSET))(this);
		}

		::MLAENDOFBCK* CIBNFJCMBHH()
		{
			return ((::MLAENDOFBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_CIBNFJCMBHH_OFFSET))(this);
		}

		::System::Void ILLPDBCNCOB(::MLAENDOFBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAENDOFBCK*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_ILLPDBCNCOB_OFFSET))(this, a1);
		}

		::EFIEAIJBHIB* FKJLFMBEHBA()
		{
			return ((::EFIEAIJBHIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_FKJLFMBEHBA_OFFSET))(this);
		}

		::System::Void EKMEJKCLBOK(::EFIEAIJBHIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFIEAIJBHIB*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_EKMEJKCLBOK_OFFSET))(this, a1);
		}

		::CAMIICJDOBO_KCLMEEMMMAM LODKJOJJLEH()
		{
			return ((::CAMIICJDOBO_KCLMEEMMMAM(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_LODKJOJJLEH_OFFSET))(this);
		}

		::System::Void DOFJGIMGDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_DOFJGIMGDCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAMIICJDOBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAMIICJDOBO*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAMIICJDOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAMIICJDOBO*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAMIICJDOBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
