#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHLNMCEJIDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHLNMCEJIDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58A390)
#define HHLNMCEJIDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58A710)
#define HHLNMCEJIDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E589F70)
#define HHLNMCEJIDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E589F30)
#define HHLNMCEJIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E589F20)
#define HHLNMCEJIDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58A100)
#define HHLNMCEJIDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58A020)
#define HHLNMCEJIDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E58A010)
#define HHLNMCEJIDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58A1D0)
#define HHLNMCEJIDN_HGBBJEIEFOJ_OFFSET UNITYSDK_OFFSET(0x1E589FE0)
#define HHLNMCEJIDN_IHFAPINCPND_OFFSET UNITYSDK_OFFSET(0x1E589FC0)
#define HHLNMCEJIDN_JIMGEPPOHLK_OFFSET UNITYSDK_OFFSET(0x1E589FF0)
#define HHLNMCEJIDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E589EE0)
#define HHLNMCEJIDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58A570)
#define HHLNMCEJIDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58A520)
#define HHLNMCEJIDN_NJLCJNFINBO_OFFSET UNITYSDK_OFFSET(0x1E589FD0)
#define HHLNMCEJIDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E58A000)
#define HHLNMCEJIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E589F10)
#define HHLNMCEJIDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58A200)
#define HHLNMCEJIDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58A260)

inline static constexpr unsigned int HHLNMCEJIDN_TypeDefinitionIndex = 31424;

	class HHLNMCEJIDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CAANKGGMHEP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 IKDINLPAJGO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HHLNMCEJIDN")->GetStaticField(0x3A070);
		}

		// static const ::System::Object FMCMBFOMPCC; // 0x0
		// static const ::System::Object BPOGNDIDJBK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHLNMCEJIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHLNMCEJIDN*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLNMCEJIDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HHLNMCEJIDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHLNMCEJIDN* Clone()
		{
			return ((::HHLNMCEJIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHFAPINCPND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_IHFAPINCPND_OFFSET))(this);
		}

		::System::Void NJLCJNFINBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_NJLCJNFINBO_OFFSET))(this, a1);
		}

		::System::UInt32 HGBBJEIEFOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_HGBBJEIEFOJ_OFFSET))(this);
		}

		::System::Void JIMGEPPOHLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_JIMGEPPOHLK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHLNMCEJIDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHLNMCEJIDN*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHLNMCEJIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHLNMCEJIDN*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHLNMCEJIDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
