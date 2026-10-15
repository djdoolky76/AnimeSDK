#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKHNMKLEMPL;
class PPONNIHFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKHNMKLEMPL_ACKKJFCOGNA_OFFSET UNITYSDK_OFFSET(0x1E3AF470)
#define FKHNMKLEMPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3AF900)
#define FKHNMKLEMPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AFC30)
#define FKHNMKLEMPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3AF3B0)
#define FKHNMKLEMPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3AF330)
#define FKHNMKLEMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF320)
#define FKHNMKLEMPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3AF600)
#define FKHNMKLEMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3AF480)
#define FKHNMKLEMPL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3AF450)
#define FKHNMKLEMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3AF780)
#define FKHNMKLEMPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3AF2E0)
#define FKHNMKLEMPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3AFA70)
#define FKHNMKLEMPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3AF9D0)
#define FKHNMKLEMPL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3AF440)
#define FKHNMKLEMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF310)
#define FKHNMKLEMPL_POEAMHIMFHO_OFFSET UNITYSDK_OFFSET(0x1E3AF460)
#define FKHNMKLEMPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3AF7C0)
#define FKHNMKLEMPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3AF820)

inline static constexpr unsigned int FKHNMKLEMPL_TypeDefinitionIndex = 35008;

	class FKHNMKLEMPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PPONNIHFJAP* LFHEKFOHLLG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FKHNMKLEMPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKHNMKLEMPL*>**)UnitySDK::FromName("", "FKHNMKLEMPL")->GetStaticField(0x63C80);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBCNCMIDKLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKHNMKLEMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKHNMKLEMPL*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHNMKLEMPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKHNMKLEMPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKHNMKLEMPL*>*(*)())((::PBYTE)hIl2Cpp + FKHNMKLEMPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKHNMKLEMPL* Clone()
		{
			return ((::FKHNMKLEMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::PPONNIHFJAP* POEAMHIMFHO()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_POEAMHIMFHO_OFFSET))(this);
		}

		::System::Void ACKKJFCOGNA(::PPONNIHFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONNIHFJAP*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_ACKKJFCOGNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKHNMKLEMPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKHNMKLEMPL*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKHNMKLEMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKHNMKLEMPL*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKHNMKLEMPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
