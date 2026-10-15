#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOKEPFNLPM;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOKEPFNLPM_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1EA848A0)
#define MOOKEPFNLPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA84DE0)
#define MOOKEPFNLPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA85180)
#define MOOKEPFNLPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA84800)
#define MOOKEPFNLPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA84790)
#define MOOKEPFNLPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84780)
#define MOOKEPFNLPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA84A70)
#define MOOKEPFNLPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA848E0)
#define MOOKEPFNLPM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA848D0)
#define MOOKEPFNLPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA84C00)
#define MOOKEPFNLPM_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EA84890)
#define MOOKEPFNLPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA84740)
#define MOOKEPFNLPM_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EA84880)
#define MOOKEPFNLPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA84FC0)
#define MOOKEPFNLPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA84F30)
#define MOOKEPFNLPM_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1EA848B0)
#define MOOKEPFNLPM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA848C0)
#define MOOKEPFNLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA84770)
#define MOOKEPFNLPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA84C40)
#define MOOKEPFNLPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA84CA0)

inline static constexpr unsigned int MOOKEPFNLPM_TypeDefinitionIndex = 34053;

	class MOOKEPFNLPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MOOKEPFNLPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOOKEPFNLPM*>**)UnitySDK::FromName("", "MOOKEPFNLPM")->GetStaticField(0x5B200);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOOKEPFNLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOOKEPFNLPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOOKEPFNLPM*>*(*)())((::PBYTE)hIl2Cpp + MOOKEPFNLPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOOKEPFNLPM* Clone()
		{
			return ((::MOOKEPFNLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOOKEPFNLPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOOKEPFNLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
