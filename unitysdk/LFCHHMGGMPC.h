#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFCHHMGGMPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFCHHMGGMPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC59320)
#define LFCHHMGGMPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC59620)
#define LFCHHMGGMPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC58E90)
#define LFCHHMGGMPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC58E60)
#define LFCHHMGGMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC58E50)
#define LFCHHMGGMPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC59010)
#define LFCHHMGGMPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC58F80)
#define LFCHHMGGMPC_FMFFOHNECBM_OFFSET UNITYSDK_OFFSET(0x1FC58F20)
#define LFCHHMGGMPC_GDMOJMKKJJA_OFFSET UNITYSDK_OFFSET(0x1FC58F60)
#define LFCHHMGGMPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC590F0)
#define LFCHHMGGMPC_GLKDMGKPMKK_OFFSET UNITYSDK_OFFSET(0x1FC58F10)
#define LFCHHMGGMPC_HMMHNDKFCLH_OFFSET UNITYSDK_OFFSET(0x1FC58F30)
#define LFCHHMGGMPC_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1FC58F50)
#define LFCHHMGGMPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC58DE0)
#define LFCHHMGGMPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC59580)
#define LFCHHMGGMPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC59530)
#define LFCHHMGGMPC_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x1FC58F00)
#define LFCHHMGGMPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC58E40)
#define LFCHHMGGMPC_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1FC58F40)
#define LFCHHMGGMPC_POIOCAPDCAJ_OFFSET UNITYSDK_OFFSET(0x1FC58F70)
#define LFCHHMGGMPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC59130)
#define LFCHHMGGMPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC59190)

inline static constexpr unsigned int LFCHHMGGMPC_TypeDefinitionIndex = 33049;

	class LFCHHMGGMPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 APCDLEBMHJH; // 0x18
		::System::UInt32 DBHGHOHEPEA; // 0x1C
		::System::UInt32 IDDLDFAPGBE; // 0x20
		::System::UInt32 LAPNIOGIGPL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LFCHHMGGMPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFCHHMGGMPC*>**)UnitySDK::FromName("", "LFCHHMGGMPC")->GetStaticField(0x2FD90);
		}

		// static const ::System::Object BGEAMGMALCL; // 0x0
		// static const ::System::Object NFJLBIKHIAD; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object MDLMGLOMONM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFCHHMGGMPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFCHHMGGMPC*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFCHHMGGMPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFCHHMGGMPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFCHHMGGMPC*>*(*)())((::PBYTE)hIl2Cpp + LFCHHMGGMPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFCHHMGGMPC* Clone()
		{
			return ((::LFCHHMGGMPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 NKDINAILHGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_NKDINAILHGG_OFFSET))(this);
		}

		::System::Void GLKDMGKPMKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_GLKDMGKPMKK_OFFSET))(this, a1);
		}

		::System::UInt32 FMFFOHNECBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_FMFFOHNECBM_OFFSET))(this);
		}

		::System::Void HMMHNDKFCLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_HMMHNDKFCLH_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::UInt32 GDMOJMKKJJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_GDMOJMKKJJA_OFFSET))(this);
		}

		::System::Void POIOCAPDCAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_POIOCAPDCAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFCHHMGGMPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFCHHMGGMPC*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFCHHMGGMPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFCHHMGGMPC*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFCHHMGGMPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
