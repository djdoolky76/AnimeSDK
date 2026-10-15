#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHBOOCGAKCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHBOOCGAKCM_BNLBHLJKCDH_OFFSET UNITYSDK_OFFSET(0x1E714A80)
#define JHBOOCGAKCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E714E10)
#define JHBOOCGAKCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7150E0)
#define JHBOOCGAKCM_CICBCJLGDJI_OFFSET UNITYSDK_OFFSET(0x1E714A90)
#define JHBOOCGAKCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E714A10)
#define JHBOOCGAKCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7149E0)
#define JHBOOCGAKCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7149D0)
#define JHBOOCGAKCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E714BD0)
#define JHBOOCGAKCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E714AC0)
#define JHBOOCGAKCM_FKDIOGOKCBA_OFFSET UNITYSDK_OFFSET(0x1E714AB0)
#define JHBOOCGAKCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E714CA0)
#define JHBOOCGAKCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E714960)
#define JHBOOCGAKCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E714F60)
#define JHBOOCGAKCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E714F20)
#define JHBOOCGAKCM_PAEMLAEPCDG_OFFSET UNITYSDK_OFFSET(0x1E714AA0)
#define JHBOOCGAKCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7149C0)
#define JHBOOCGAKCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E714CD0)
#define JHBOOCGAKCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E714D30)

inline static constexpr unsigned int JHBOOCGAKCM_TypeDefinitionIndex = 29843;

	class JHBOOCGAKCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MMEHLMLJBLE; // 0x18
		::System::UInt32 BPHJMBBHMED; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JHBOOCGAKCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHBOOCGAKCM*>**)UnitySDK::FromName("", "JHBOOCGAKCM")->GetStaticField(0x1A5F0);
		}

		// static const ::System::Object HMDFFGEDFNM; // 0x0
		// static const ::System::Object LHIFJGGAJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHBOOCGAKCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHBOOCGAKCM*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHBOOCGAKCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHBOOCGAKCM*>*(*)())((::PBYTE)hIl2Cpp + JHBOOCGAKCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHBOOCGAKCM* Clone()
		{
			return ((::JHBOOCGAKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNLBHLJKCDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_BNLBHLJKCDH_OFFSET))(this);
		}

		::System::Void CICBCJLGDJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CICBCJLGDJI_OFFSET))(this, a1);
		}

		::System::UInt32 PAEMLAEPCDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_PAEMLAEPCDG_OFFSET))(this);
		}

		::System::Void FKDIOGOKCBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_FKDIOGOKCBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHBOOCGAKCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHBOOCGAKCM*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHBOOCGAKCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHBOOCGAKCM*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHBOOCGAKCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
