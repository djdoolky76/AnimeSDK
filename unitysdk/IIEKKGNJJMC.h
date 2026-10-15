#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIEKKGNJJMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIEKKGNJJMC_BBHLIGJLJIK_OFFSET UNITYSDK_OFFSET(0x1E685880)
#define IIEKKGNJJMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E685C50)
#define IIEKKGNJJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E685FD0)
#define IIEKKGNJJMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6857E0)
#define IIEKKGNJJMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6857A0)
#define IIEKKGNJJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E685790)
#define IIEKKGNJJMC_EEBEBPENMBP_OFFSET UNITYSDK_OFFSET(0x1E685890)
#define IIEKKGNJJMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E685950)
#define IIEKKGNJJMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6858C0)
#define IIEKKGNJJMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E685A30)
#define IIEKKGNJJMC_GFMLPIKMLBF_OFFSET UNITYSDK_OFFSET(0x1E6858A0)
#define IIEKKGNJJMC_HJONODKCGIL_OFFSET UNITYSDK_OFFSET(0x1E6858B0)
#define IIEKKGNJJMC_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E685870)
#define IIEKKGNJJMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E685720)
#define IIEKKGNJJMC_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E685860)
#define IIEKKGNJJMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E685E10)
#define IIEKKGNJJMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E685DC0)
#define IIEKKGNJJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E685780)
#define IIEKKGNJJMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E685A80)
#define IIEKKGNJJMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E685AE0)

inline static constexpr unsigned int IIEKKGNJJMC_TypeDefinitionIndex = 27174;

	class IIEKKGNJJMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 FCHCMNGHNEP; // 0x18
		::System::Boolean JGDNLAMGHFG; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 BPHAEJMMPGF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::IIEKKGNJJMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIEKKGNJJMC*>**)UnitySDK::FromName("", "IIEKKGNJJMC")->GetStaticField(0x501D0);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object EPMPEIKNBNH; // 0x0
		// static const ::System::Object EDMMNMDMFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIEKKGNJJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIEKKGNJJMC*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIEKKGNJJMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIEKKGNJJMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIEKKGNJJMC*>*(*)())((::PBYTE)hIl2Cpp + IIEKKGNJJMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIEKKGNJJMC* Clone()
		{
			return ((::IIEKKGNJJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::System::Boolean BBHLIGJLJIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_BBHLIGJLJIK_OFFSET))(this);
		}

		::System::Void EEBEBPENMBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_EEBEBPENMBP_OFFSET))(this, a1);
		}

		::System::UInt64 GFMLPIKMLBF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_GFMLPIKMLBF_OFFSET))(this);
		}

		::System::Void HJONODKCGIL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_HJONODKCGIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIEKKGNJJMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIEKKGNJJMC*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIEKKGNJJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIEKKGNJJMC*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIEKKGNJJMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
