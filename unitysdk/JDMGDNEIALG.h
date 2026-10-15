#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMGDNEIALG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDMGDNEIALG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70E1F0)
#define JDMGDNEIALG_CBIMNNCPIJO_OFFSET UNITYSDK_OFFSET(0x1E70DE40)
#define JDMGDNEIALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70E570)
#define JDMGDNEIALG_CDPBEJOKJCH_OFFSET UNITYSDK_OFFSET(0x1E70DE30)
#define JDMGDNEIALG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70DDD0)
#define JDMGDNEIALG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70DD90)
#define JDMGDNEIALG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70DD80)
#define JDMGDNEIALG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70DF60)
#define JDMGDNEIALG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70DE80)
#define JDMGDNEIALG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E70DE70)
#define JDMGDNEIALG_FLOPPMNAMNH_OFFSET UNITYSDK_OFFSET(0x1E70DE50)
#define JDMGDNEIALG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70E030)
#define JDMGDNEIALG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70DD40)
#define JDMGDNEIALG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70E3D0)
#define JDMGDNEIALG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70E380)
#define JDMGDNEIALG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E70DE60)
#define JDMGDNEIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70DD70)
#define JDMGDNEIALG_PNLLLGEBKAL_OFFSET UNITYSDK_OFFSET(0x1E70DE20)
#define JDMGDNEIALG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70E060)
#define JDMGDNEIALG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70E0C0)

inline static constexpr unsigned int JDMGDNEIALG_TypeDefinitionIndex = 31199;

	class JDMGDNEIALG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PGNJHPCEKPO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 CJDCPGBIKLD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDMGDNEIALG")->GetStaticField(0x5DF70);
		}

		// static const ::System::Object FJBJKBKJNDN; // 0x0
		// static const ::System::Object LLCIHFMGEKN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDMGDNEIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMGDNEIALG*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMGDNEIALG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDMGDNEIALG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDMGDNEIALG* Clone()
		{
			return ((::JDMGDNEIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNLLLGEBKAL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_PNLLLGEBKAL_OFFSET))(this);
		}

		::System::Void CDPBEJOKJCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CDPBEJOKJCH_OFFSET))(this, a1);
		}

		::System::UInt32 CBIMNNCPIJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CBIMNNCPIJO_OFFSET))(this);
		}

		::System::Void FLOPPMNAMNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDMGDNEIALG_FLOPPMNAMNH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDMGDNEIALG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDMGDNEIALG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDMGDNEIALG*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDMGDNEIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMGDNEIALG*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDMGDNEIALG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
