#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPIEHAMDJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPIEHAMDJAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CAB50)
#define HPIEHAMDJAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CAE20)
#define HPIEHAMDJAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CA7A0)
#define HPIEHAMDJAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CA770)
#define HPIEHAMDJAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA760)
#define HPIEHAMDJAP_DFDIBJFKEKO_OFFSET UNITYSDK_OFFSET(0x1E5CA820)
#define HPIEHAMDJAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CA910)
#define HPIEHAMDJAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CA830)
#define HPIEHAMDJAP_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5CA7F0)
#define HPIEHAMDJAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CA9E0)
#define HPIEHAMDJAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5CA720)
#define HPIEHAMDJAP_JKCKJHAJMAD_OFFSET UNITYSDK_OFFSET(0x1E5CA810)
#define HPIEHAMDJAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CACA0)
#define HPIEHAMDJAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CAC60)
#define HPIEHAMDJAP_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5CA800)
#define HPIEHAMDJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA750)
#define HPIEHAMDJAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CAA10)
#define HPIEHAMDJAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CAA70)

inline static constexpr unsigned int HPIEHAMDJAP_TypeDefinitionIndex = 30596;

	class HPIEHAMDJAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GMNDCJLDDCN; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HPIEHAMDJAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPIEHAMDJAP*>**)UnitySDK::FromName("", "HPIEHAMDJAP")->GetStaticField(0x3EDD0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object HMJCIGPMHFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPIEHAMDJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPIEHAMDJAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPIEHAMDJAP*>*(*)())((::PBYTE)hIl2Cpp + HPIEHAMDJAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPIEHAMDJAP* Clone()
		{
			return ((::HPIEHAMDJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 JKCKJHAJMAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_JKCKJHAJMAD_OFFSET))(this);
		}

		::System::Void DFDIBJFKEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_DFDIBJFKEKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPIEHAMDJAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPIEHAMDJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
