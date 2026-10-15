#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJOLGFOHLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDJOLGFOHLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E918D20)
#define BDJOLGFOHLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9190A0)
#define BDJOLGFOHLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E918900)
#define BDJOLGFOHLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9188C0)
#define BDJOLGFOHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9188B0)
#define BDJOLGFOHLM_EHBOOJCBDOB_OFFSET UNITYSDK_OFFSET(0x1E9189A0)
#define BDJOLGFOHLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E918A90)
#define BDJOLGFOHLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9189B0)
#define BDJOLGFOHLM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E918980)
#define BDJOLGFOHLM_FPNMNBPECPL_OFFSET UNITYSDK_OFFSET(0x1E918960)
#define BDJOLGFOHLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E918B60)
#define BDJOLGFOHLM_GNKECPCFJOO_OFFSET UNITYSDK_OFFSET(0x1E918950)
#define BDJOLGFOHLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E918870)
#define BDJOLGFOHLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E918F00)
#define BDJOLGFOHLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E918EB0)
#define BDJOLGFOHLM_NCGHNJANFOA_OFFSET UNITYSDK_OFFSET(0x1E918990)
#define BDJOLGFOHLM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E918970)
#define BDJOLGFOHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9188A0)
#define BDJOLGFOHLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E918B90)
#define BDJOLGFOHLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E918BF0)

inline static constexpr unsigned int BDJOLGFOHLM_TypeDefinitionIndex = 31464;

	class BDJOLGFOHLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 PGCFGIAHHKP; // 0x1C
		::System::UInt32 MGIDMFIPDHE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BDJOLGFOHLM")->GetStaticField(0x3DDB0);
		}

		// static const ::System::Object LMLEBMGFKJO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HELPFLLJMJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDJOLGFOHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJOLGFOHLM*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJOLGFOHLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BDJOLGFOHLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDJOLGFOHLM* Clone()
		{
			return ((::BDJOLGFOHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNKECPCFJOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_GNKECPCFJOO_OFFSET))(this);
		}

		::System::Void FPNMNBPECPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_FPNMNBPECPL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NCGHNJANFOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_NCGHNJANFOA_OFFSET))(this);
		}

		::System::Void EHBOOJCBDOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_EHBOOJCBDOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDJOLGFOHLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDJOLGFOHLM*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDJOLGFOHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJOLGFOHLM*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDJOLGFOHLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
