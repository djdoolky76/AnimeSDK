#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKPHAFPGDLO;
class GFNAPELNFIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFNAPELNFIC_BOGBGKOHMFO_OFFSET UNITYSDK_OFFSET(0x1E4461A0)
#define GFNAPELNFIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4466C0)
#define GFNAPELNFIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E446AC0)
#define GFNAPELNFIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4460A0)
#define GFNAPELNFIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E446010)
#define GFNAPELNFIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E446000)
#define GFNAPELNFIC_EEKNGJPLLLF_OFFSET UNITYSDK_OFFSET(0x1E446180)
#define GFNAPELNFIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E446310)
#define GFNAPELNFIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4461E0)
#define GFNAPELNFIC_FFHFHLEEFFA_OFFSET UNITYSDK_OFFSET(0x1E4461D0)
#define GFNAPELNFIC_FOHPOHAFCNL_OFFSET UNITYSDK_OFFSET(0x1E4461C0)
#define GFNAPELNFIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E446490)
#define GFNAPELNFIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E445F90)
#define GFNAPELNFIC_MECLGCLJBGF_OFFSET UNITYSDK_OFFSET(0x1E446190)
#define GFNAPELNFIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E446870)
#define GFNAPELNFIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4467A0)
#define GFNAPELNFIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E445FF0)
#define GFNAPELNFIC_PHMAFMGIBAH_OFFSET UNITYSDK_OFFSET(0x1E4461B0)
#define GFNAPELNFIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4464F0)
#define GFNAPELNFIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E446550)

inline static constexpr unsigned int GFNAPELNFIC_TypeDefinitionIndex = 25485;

	class GFNAPELNFIC : public ::System::Object
	{
	public:
		::DKPHAFPGDLO* FMLMMPIHHEK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean LMPBJNIGODD; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 CODPGEFNIAC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GFNAPELNFIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFNAPELNFIC*>**)UnitySDK::FromName("", "GFNAPELNFIC")->GetStaticField(0x14C80);
		}

		// static const ::System::Object CGMPLBGLDJE; // 0x0
		// static const ::System::Object DOIFENEPGJF; // 0x0
		// static const ::System::Object JGEPFPMBMJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFNAPELNFIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFNAPELNFIC*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFNAPELNFIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFNAPELNFIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFNAPELNFIC*>*(*)())((::PBYTE)hIl2Cpp + GFNAPELNFIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFNAPELNFIC* Clone()
		{
			return ((::GFNAPELNFIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEKNGJPLLLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_EEKNGJPLLLF_OFFSET))(this);
		}

		::System::Void MECLGCLJBGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFNAPELNFIC_MECLGCLJBGF_OFFSET))(this, a1);
		}

		::System::Boolean BOGBGKOHMFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_BOGBGKOHMFO_OFFSET))(this);
		}

		::System::Void PHMAFMGIBAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFNAPELNFIC_PHMAFMGIBAH_OFFSET))(this, a1);
		}

		::DKPHAFPGDLO* FOHPOHAFCNL()
		{
			return ((::DKPHAFPGDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_FOHPOHAFCNL_OFFSET))(this);
		}

		::System::Void FFHFHLEEFFA(::DKPHAFPGDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKPHAFPGDLO*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_FFHFHLEEFFA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFNAPELNFIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFNAPELNFIC*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFNAPELNFIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFNAPELNFIC*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFNAPELNFIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
