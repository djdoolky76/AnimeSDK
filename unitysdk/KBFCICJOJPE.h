#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBFCICJOJPE;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBFCICJOJPE_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E7EE1D0)
#define KBFCICJOJPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7EE670)
#define KBFCICJOJPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE960)
#define KBFCICJOJPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7EE130)
#define KBFCICJOJPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7EE0C0)
#define KBFCICJOJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE0B0)
#define KBFCICJOJPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7EE370)
#define KBFCICJOJPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7EE1F0)
#define KBFCICJOJPE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7EE1C0)
#define KBFCICJOJPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7EE4F0)
#define KBFCICJOJPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7EE070)
#define KBFCICJOJPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7EE7C0)
#define KBFCICJOJPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7EE740)
#define KBFCICJOJPE_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E7EE1E0)
#define KBFCICJOJPE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7EE1B0)
#define KBFCICJOJPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE0A0)
#define KBFCICJOJPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7EE530)
#define KBFCICJOJPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7EE590)

inline static constexpr unsigned int KBFCICJOJPE_TypeDefinitionIndex = 28445;

	class KBFCICJOJPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KBFCICJOJPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBFCICJOJPE*>**)UnitySDK::FromName("", "KBFCICJOJPE")->GetStaticField(0xEF70);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBFCICJOJPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBFCICJOJPE*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBFCICJOJPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBFCICJOJPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBFCICJOJPE*>*(*)())((::PBYTE)hIl2Cpp + KBFCICJOJPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBFCICJOJPE* Clone()
		{
			return ((::KBFCICJOJPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBFCICJOJPE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBFCICJOJPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBFCICJOJPE*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCICJOJPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBFCICJOJPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBFCICJOJPE*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBFCICJOJPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
